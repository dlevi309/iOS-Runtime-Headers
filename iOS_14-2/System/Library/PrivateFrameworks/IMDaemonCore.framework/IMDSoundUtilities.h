/*
* Generated on Thursday, January 14, 2021 at 2:27:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

