/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)bestSenderIdentityForHandleIDs:(id)arg1 ;
-(id)bestSenderIdentityForHandleID:(id)arg1 contact:(id)arg2 ;
-(id)bestSenderIdentityForGeminiHandle:(id)arg1 contact:(id)arg2 ;
-(CNGeminiManager *)geminiManager;
-(void)setGeminiManager:(CNGeminiManager *)arg1 ;
@end

