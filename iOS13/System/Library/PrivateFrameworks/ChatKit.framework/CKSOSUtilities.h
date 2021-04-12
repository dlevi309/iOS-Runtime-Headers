/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled,nonatomic,readonly) BOOL MMSEnabled; 
+(BOOL)isMMSEnabled;
+(id)sharedUtilities;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 ;
-(BOOL)isMMSEnabled;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(BOOL)isMMSEnabledForPhoneNumber:(id)arg1 simID:(id)arg2 ;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(void)_sendMessageAndObserveNotification:(id)arg1 ;
-(id)_sendMessageAndReturnGUIDs:(id)arg1 ;
-(id)_uniqueFilePathForFilename:(id)arg1 ;
-(id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(BOOL)arg3 ;
@end

