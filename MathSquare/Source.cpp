#include <iostream>

bool checkEq(int x1, int x2, int x3, int x4, int x5, int x6, int x7, int x8, int x9, int x10, int x11, int x12, int x13, int x14, int x15, int x16)
{
	bool eq1 = (x1 * x2) - x3 - x4 == 56;
	bool eq2 = x5 + x6 - x7 + x8 == 21;
	bool eq3 = ((x9 / x10) * x11) - x12 == 44;
	bool eq4 = x13 + x14 - 15 + x16 == 30;
	bool eq5 = (x1 * x5) + x9 - x13 == 52;
	bool eq6 = x2 - (x6 / x10) - x14 == -5;
	bool eq7 = (x3 / x7) - x11 - x15 == -10;
	bool eq8 = (x4 * x8) + x12 - x16 == 84;
	return eq1 || eq2 || eq3 || eq4 || eq5 || eq6 || eq7 || eq8;
}

int main()
{
	bool isTrue = true;
	std::cout << "Beggining calculations...." << std::endl;
	int x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16;
	bool bValue[16] = { true,true,true,true,true,true,true,true,true,true,true,true,true,true,true,true };
	bool hasSet = false;

	//Loop for x1
	for (x1 = 5; x1 < 15; x1++)
	{
		for (; hasSet == false; x1++)
		{
			if (bValue[x1 - 1] == true)
			{
				bValue[x1 - 1] = false;
				hasSet = true;
			}
		}
		hasSet = false;
		std::cout << "At x1" << std::endl;
		//Loop for x2
		for (x2 = 5; x2 < 15; x2++)
		{
			for (; hasSet == false; x2++)
			{
				if (bValue[x2 - 1] == true)
				{
					bValue[x2 - 1] = false;
					hasSet = true;
				}
			}
			hasSet = false;
			std::cout << "At x2" << std::endl;
			//Loop for x3
			for (x3 = 2; x3 < 15; x3++)
			{
				for (; hasSet == false; x3++)
				{
					if (bValue[x3 - 1] == true)
					{
						bValue[x3 - 1] = false;
						hasSet = true;
					}
				}
				hasSet = false;
				std::cout << "At x3" << std::endl;
				//Loop for x4
				for (x4 = 5; x4 < 15; x4++)
				{
					for (; hasSet == false; x4++)
					{
						if (bValue[x4 - 1] == true)
						{
							bValue[x4 - 1] = false;
							hasSet = true;
						}
					}
					hasSet = false;
					std::cout << "At x4" << std::endl;
					//Loop for x5
					for (x5 = 3; x5 < 15; x5++)
					{
						for (; hasSet == false; x5++)
						{
							if (bValue[x5 - 1] == true)
							{
								bValue[x5 - 1] = false;
								hasSet = true;
							}
						}
						std::cout << "At x5" << std::endl;
						//Loop for x6
						for (x6 = 1; x6 < 15; x6++)
						{
							for (; hasSet && x6 < 15; x6++)
							{
								if (bValue[x6 - 1] == true)
								{
									bValue[x6 - 1] = false;
									hasSet = true;
								}
							}
							hasSet = false;
							std::cout << "At x6" << std::endl;
							//Loop for x7
							for (x7 = 1; x7 < 7; x7++)
							{
								for (; hasSet == false; x7++)
								{
									if (bValue[x7 - 1] == true)
									{
										bValue[x7 - 1] = false;
										hasSet = true;
									}
								}
								hasSet = false;
								std::cout << "At x7" << std::endl;
								//Loop for x8
								for (x8 = 5; x8 < 15; x8++)
								{
									for (; hasSet == false; x8++)
									{
										if (bValue[x8 - 1] == true)
										{
											bValue[x8 - 1] = false;
											hasSet = true;
										}
									}
									hasSet = false;
									std::cout << "At x8" << std::endl;
									//Loop for x9
									for (x9 = 2; x9 < 15; x9++)
									{

										for (; hasSet == false; x9++)
										{
											if (bValue[x9 - 1] == true)
											{
												bValue[x9 - 1] = false;
												hasSet = true;
											}
										}
										hasSet = false;
										std::cout << "At x9" << std::endl;
										//Loop for x10
										for (x10 = 1; x10 < 7; x10++)
										{
											for (; hasSet == false; x10++)
											{
												if (bValue[x10 - 1] == true)
												{
													bValue[x10 - 1] = false;
													hasSet = true;
												}
											}
											hasSet = false;
											std::cout << "At x10" << std::endl;
											//Loop for x11
											for (x11 = 4; x11 < 15; x11++)
											{
												for (; hasSet == false; x11++)
												{
													if (bValue[x11 - 1] == true)
													{
														bValue[x11 - 1] = false;
														hasSet = true;
													}
												}
												hasSet = false;
												std::cout << "At x11" << std::endl;
												//Loop for x12
												for (x12 = 1; x12 < 15; x12++)
												{
													for (; hasSet == false; x12++)
													{
														if (bValue[x12 - 1] == true)
														{
															bValue[x12 - 1] = false;
															hasSet = true;
														}
													}
													hasSet = false;
													std::cout << "At x12" << std::endl;
													//Loop for x13
													for (x13 = 1; x13 < 15; x13++)
													{
														for (; hasSet == false; x13++)
														{
															if (bValue[x13 - 1] == true)
															{
																bValue[x13 - 1] = false;
																hasSet = true;
															}
														}
														hasSet = false;
														std::cout << "At x13" << std::endl;
														//Loop for x14
														for (x14 = 1; x14 < 15; x14++)
														{
															for (; hasSet == false; x14++)
															{
																if (bValue[x14 - 1] == true)
																{
																	bValue[x14 - 1] = false;
																	hasSet = true;
																}
															}
															hasSet = false;
															std::cout << "At x14" << std::endl;
															//Loop for x15
															for (x15 = 1; x15 < 13; x15++)
															{
																for (; hasSet == false; x15++)
																{
																	if (bValue[x15 - 1] == true)
																	{
																		bValue[x15 - 1] = false;
																		hasSet = true;
																	}
																}
																hasSet = false;
																std::cout << "At x15" << std::endl;
																//Loop for x16
																for (x16 = 1; x16 < 15; x16++)
																{
																	for (; hasSet == false; x16++)
																	{
																		if (bValue[x16 - 1] == true)
																		{
																			bValue[x16 - 1] = false;
																			hasSet = true;
																		}
																	}
																	hasSet = false;
																	std::cout << "Almost done" << std::endl;
																	if (checkEq(x1, x2, x3, x4, x5, x6, x7, x8, x9, x10, x11, x12, x13, x14, x15, x16))
																	{
																		break;
																	}


																	bValue[x16 - 1] = true;
																}

																bValue[x15 - 1] = true;
															}

															bValue[x14 - 1] = true;
														}

														bValue[x13 - 1] = true;
													}

													bValue[x12 - 1] = true;
												}

												bValue[x11 - 1] = true;
											}


											bValue[x10 - 1] = true;
										}

										bValue[x9 - 1] = true;
									}

									bValue[x8 - 1] = true;
								}

								bValue[x7 - 1] = true;
							}


							bValue[x6 - 1] = true;
						}

						bValue[x5 - 1] = true;
					}

					bValue[x4 - 1] = true;
				}

				bValue[x3 - 1] = true;
			}

			bValue[x2 - 1] = true;
		}

		bValue[x1 - 1] = true;
	}


	std::cout << "------------------------------------Here are the test results:-------------------------------------" << std::endl;
	
	std::cout << "x1 is " << x1 << std::endl;
	std::cout << "x2 is " << x2 << std::endl;
	std::cout << "x3 is " << x3 << std::endl;
	std::cout << "x4 is " << x4 << std::endl;
	std::cout << "x5 is " << x5 << std::endl;
	std::cout << "x6 is " << x6 << std::endl;
	std::cout << "x7 is " << x7 << std::endl;
	std::cout << "x8 is " << x8 << std::endl;
	std::cout << "x9 is " << x9 << std::endl;
	std::cout << "x10 is " << x10 << std::endl;
	std::cout << "x11 is " << x11 << std::endl;
	std::cout << "x12 is " << x12 << std::endl;
	std::cout << "x13 is " << x13 << std::endl;
	std::cout << "x14 is " << x14 << std::endl;
	std::cout << "x15 is " << x15 << std::endl;
	std::cout << "x16 is " << x16 << std::endl;

	int x;
	std::cin >> x;
}