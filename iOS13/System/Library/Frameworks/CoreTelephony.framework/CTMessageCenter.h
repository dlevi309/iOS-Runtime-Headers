/*
* Generated on Monday, March 1, 2021 at 2:30:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreTelephony.framework/CoreTelephony
*/


#import <CoreTelephony/CoreTelephony-Structs.h>
@interface CTMessageCenter : NSObject
+(id)sharedMessageCenter;
-(id)init;
-(void)dealloc;
-(BOOL)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withID:(unsigned)arg5 ;
-(id)encodeMessage:(id)arg1 ;
-(void)sendMessageAsSmsToShortCodeRecipients:(id)arg1 andReplaceData:(id*)arg2 ;
-(SCD_Struct_CT3)sendMMSFromData:(id)arg1 messageId:(unsigned)arg2 subSlot:(long long)arg3 ;
-(SCD_Struct_CT3)send:(id)arg1 withMoreToFollow:(BOOL)arg2 ;
-(SCD_Struct_CT3)sendSMS:(id)arg1 withMoreToFollow:(BOOL)arg2 trackingID:(unsigned*)arg3 ;
-(SCD_Struct_CT3)sendMMS:(id)arg1 ;
-(id)incomingMessageWithId:(unsigned)arg1 isDeferred:(BOOL)arg2 ;
-(void)addMessageOfType:(int)arg1 toArray:(id)arg2 withIdsFromArray:(id)arg3 ;
-(BOOL)isMmsConfiguredForSub:(id)arg1 ;
-(BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 trackingID:(unsigned*)arg4 ;
-(BOOL)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 withMoreToFollow:(BOOL)arg5 withID:(unsigned)arg6 ;
-(BOOL)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 trackingID:(unsigned*)arg5 ;
-(BOOL)getCharacterCountForSub:(id)arg1 count:(long long*)arg2 andMessageSplitThreshold:(long long*)arg3 forSmsText:(id)arg4 ;
-(SCD_Struct_CT3)send:(id)arg1 ;
-(int)incomingMessageCount;
-(id)allIncomingMessages;
-(void)acknowledgeIncomingMessageWithId:(unsigned)arg1 ;
-(void)acknowledgeOutgoingMessageWithId:(unsigned)arg1 ;
-(id)incomingMessageWithId:(unsigned)arg1 ;
-(id)deferredMessageWithId:(unsigned)arg1 ;
-(id)statusOfOutgoingMessages;
-(id)decodeMessage:(id)arg1 ;
-(SCD_Struct_CT3)isDeliveryReportsEnabled:(BOOL*)arg1 ;
-(void)setDeliveryReportsEnabled:(BOOL)arg1 ;
-(BOOL)isMmsEnabled;
-(BOOL)isMmsEnabledForSub:(id)arg1 ;
-(BOOL)isMmsConfigured;
-(BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 ;
-(BOOL)sendSMSWithText:(id)arg1 text:(id)arg2 serviceCenter:(id)arg3 toAddress:(id)arg4 ;
-(BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withID:(unsigned)arg4 ;
-(BOOL)sendSMSWithText:(id)arg1 serviceCenter:(id)arg2 toAddress:(id)arg3 withMoreToFollow:(BOOL)arg4 withID:(unsigned)arg5 ;
-(BOOL)getCharacterCount:(long long*)arg1 andMessageSplitThreshold:(long long*)arg2 forSmsText:(id)arg3 ;
-(BOOL)simulateSmsReceived:(id)arg1 ;
-(BOOL)simulateDeferredMessage;
-(BOOL)sendBinarySMS:(id)arg1 trackingID:(unsigned*)arg2 ;
@end

