/*
* Generated on Monday, March 1, 2021 at 2:34:16 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@protocol _ICPredictionManaging <NSObject>
@required
-(void)reset;
-(void)warmUp;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
-(id)lastCachedResultWithInitialCharacters:(id)arg1;
-(void)predictedItemSelected:(id)arg1;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(void)hibernate;

@end

