/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InputContext.framework/InputContext
*/


@protocol _ICPredictionManaging <NSObject>
@required
-(void)provideFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(void)hibernate;
-(void)warmUp;
-(void)predictedItemSelected:(id)arg1;
-(void)propogateMetrics:(id)arg1 data:(id)arg2;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 timeoutInMilliseconds:(int)arg5 resultLimit:(int)arg6 error:(id*)arg7;
-(id)searchWithTriggers:(id)arg1 application:(id)arg2 recipient:(id)arg3 localeIdentifier:(id)arg4 isResponseDenyListed:(BOOL)arg5 shouldDisableAutoCaps:(BOOL)arg6 timeoutInMilliseconds:(int)arg7 resultLimit:(int)arg8 error:(id*)arg9;
-(void)reset;
-(void)providePredictionFeedbackForString:(id)arg1 type:(unsigned char)arg2 style:(unsigned char)arg3;
-(id)searchForMeCardRegions;
-(id)searchForMeCardEmailAddresses;
-(id)lastCachedResultWithInitialCharacters:(id)arg1;

@end

