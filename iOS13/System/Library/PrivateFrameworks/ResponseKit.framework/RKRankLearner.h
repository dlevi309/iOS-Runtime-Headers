/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@interface RKRankLearner : NSObject
-(id)init;
-(id)getDBManager:(id)arg1 ;
-(id)updateFeaturesForResponse:(id)arg1 selectCounts:(id)arg2 inputMethodCounts:(id)arg3 sourceCounts:(id)arg4 currentTime:(id)arg5 languageCode:(id)arg6 ;
-(id)rankResponses:(id)arg1 ;
-(id)getDBManager:(id)arg1 withCustomPath:(id)arg2 ;
-(BOOL)insertRankingInfo:(id)arg1 forLanguageID:(id)arg2 ;
-(id)getRankedResponses:(id)arg1 forRecipientID:(id)arg2 withLanguageID:(id)arg3 ;
-(void)flushRankingData:(id)arg1 ;
@end

