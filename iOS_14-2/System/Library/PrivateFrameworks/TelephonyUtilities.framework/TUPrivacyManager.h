/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TelephonyUtilities.framework/TelephonyUtilities
*/


@class NSArray;

@interface TUPrivacyManager : NSObject

@property (nonatomic,copy,readonly) NSArray * privacyRules; 
+(id)sharedPrivacyManager;
-(id)init;
-(BOOL)isIncomingCommunicationBlockedForBusinessID:(id)arg1 ;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forEmailAddress:(id)arg2 ;
-(NSArray *)privacyRules;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forBusinessID:(id)arg2 ;
-(BOOL)isIncomingCommunicationBlockedForPhoneNumber:(id)arg1 ;
-(id)allBlacklistRules;
-(BOOL)isIncomingCommunicationBlockedForEmailAddress:(id)arg1 ;
-(void)removeRule:(id)arg1 ;
-(void)addRule:(id)arg1 ;
-(void)dealloc;
-(void)setBlockIncomingCommunication:(BOOL)arg1 forPhoneNumber:(id)arg2 ;
-(void)_handleBlockListChanged:(id)arg1 ;
@end

