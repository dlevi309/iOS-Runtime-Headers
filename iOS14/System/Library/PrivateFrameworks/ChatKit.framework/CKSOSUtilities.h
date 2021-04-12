/*
* Generated on Thursday, January 14, 2021 at 2:21:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/


@interface CKSOSUtilities : NSObject

@property (getter=isMMSEnabled,nonatomic,readonly) BOOL MMSEnabled; 
+(id)sharedUtilities;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
+(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(void)sendMessage:(id)arg1 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 ;
-(void)_sendMessageAndObserveNotification:(id)arg1 ;
-(void)sendMessage:(id)arg1 location:(id)arg2 recipients:(id)arg3 failureHandler:(/*^block*/id)arg4 ;
-(id)_sendMessageAndReturnGUIDs:(id)arg1 ;
-(id)_uniqueFilePathForFilename:(id)arg1 ;
-(id)sendComposition:(id)arg1 toConversation:(id)arg2 useStandalone:(BOOL)arg3 ;
-(BOOL)isMobileKeyBagDisabledOrDeviceUnlockedSinceBoot;
-(BOOL)isMMSEnabled;
@end

