/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ResponseKit.framework/ResponseKit
*/


@protocol OS_dispatch_queue;
@class RKResponseCollection, NSObject, NSArray, RKRankLearner;

@interface RKMessageResponseManager : NSObject {

	RKResponseCollection* _collection;
	NSObject*<OS_dispatch_queue> _dispatchQueue;
	NSArray* _preferredLanguages;
	RKRankLearner* _rankLearner;

}

@property (retain) RKResponseCollection * collection;                       //@synthesize collection=_collection - In the implementation block
@property (retain) NSObject*<OS_dispatch_queue> dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
@property (nonatomic,retain) NSArray * preferredLanguages;                  //@synthesize preferredLanguages=_preferredLanguages - In the implementation block
@property (retain) RKRankLearner * rankLearner;                             //@synthesize rankLearner=_rankLearner - In the implementation block
+(id)sharedManager;
-(id)init;
-(NSArray *)preferredLanguages;
-(RKResponseCollection *)collection;
-(void)setPreferredLanguages:(NSArray *)arg1 ;
-(NSObject*<OS_dispatch_queue>)dispatchQueue;
-(void)setDispatchQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forContext:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(void)setCollection:(RKResponseCollection *)arg1 ;
-(void)flushDynamicData;
-(id)initWithDynamicDataURL:(id)arg1 displayStringsProvider:(id)arg2 ;
-(void)resetRegisteredResponses;
-(id)initWithDynamicDataURL:(id)arg1 ;
-(id)responsesForMessageImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id)arg6 options:(unsigned long long)arg7 ;
-(id)responsesForMessageWithLanguageDetectionImp:(id)arg1 maximumResponses:(unsigned long long)arg2 forRecipientID:(id)arg3 forConversationHistory:(id)arg4 forContext:(id)arg5 withLanguage:(id*)arg6 inputModes:(id)arg7 options:(unsigned long long)arg8 ;
-(BOOL)usePersonalizedRanking;
-(id)getRankLearner;
-(RKRankLearner *)rankLearner;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withEffectiveDate:(id)arg4 withLanguage:(id)arg5 ;
-(id)categoryForMessageWithoutQueue:(id)arg1 langID:(id)arg2 ;
-(id)initWithDynamicDataURL:(id)arg1 withBundleURL:(id)arg2 ;
-(id)initWithAssetPlistURL:(id)arg1 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 recipientID:(id)arg3 forConversationHistory:(id)arg4 withLanguage:(id)arg5 options:(unsigned long long)arg6 ;
-(void)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 options:(unsigned long long)arg5 ;
-(id)responsesForMessage:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 withLanguage:(id)arg4 inputModes:(id)arg5 options:(unsigned long long)arg6 ;
-(id)responsesForMessageWithLanguageDetection:(id)arg1 maximumResponses:(unsigned long long)arg2 forConversationHistory:(id)arg3 forContext:(id)arg4 withLanguage:(id*)arg5 options:(unsigned long long)arg6 ;
-(id)categoryForMessage:(id)arg1 langID:(id)arg2 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 forContext:(id)arg3 withLanguage:(id)arg4 ;
-(void)registerResponse:(id)arg1 forMessage:(id)arg2 metadata:(id)arg3 withLanguage:(id)arg4 ;
-(void)prunePersonalizedUserDatabase:(id)arg1 ;
-(BOOL)isQuestion:(id)arg1 withLanguage:(id)arg2 ;
-(void)setRankLearner:(RKRankLearner *)arg1 ;
@end

