/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IMDaemonCore.framework/IMDaemonCore
*/


@interface IMDSoundUtilities : NSObject
+(long long)_soundTypeForMessage:(id)arg1 ;
+(void)_playSoundType:(long long)arg1 ;
+(long long)_smsSoundsToPlay;
+(BOOL)_isSMSMessage:(id)arg1 ;
+(BOOL)_wasDowngraded:(id)arg1 ;
+(BOOL)_isSuppressedForGUID:(id)arg1 ;
+(void)_stopSuppressingForGUID:(id)arg1 ;
+(BOOL)_isAssociatedMessage:(id)arg1 ;
+(BOOL)_isAcknowledgmentMessage:(id)arg1 ;
+(BOOL)_isAutoPlay:(id)arg1 ;
+(void)_playSMSSound;
+(void)_playAcknowledgmentSentSound;
+(void)playMessageSentSoundIfNeeded:(id)arg1 ;
+(unsigned)_installSystemSound:(id)arg1 ;
@end

