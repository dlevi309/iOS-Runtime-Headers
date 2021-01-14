/*
* Generated on Thursday, January 14, 2021 at 2:22:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMSharedUtilities.framework/IMSharedUtilities
*/


@class CNGeminiManager;

@interface IMSenderIdentityManager : NSObject {

	CNGeminiManager* _geminiManager;

}

@property (nonatomic,retain) CNGeminiManager * geminiManager;              //@synthesize geminiManager=_geminiManager - In the implementation block
+(id)sharedInstance;
+(BOOL)isTUSenderIdentity:(id)arg1 equalToSubscriptionContext:(id)arg2 ;
-(id)init;
-(id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(id)contactPreferredSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
@end

