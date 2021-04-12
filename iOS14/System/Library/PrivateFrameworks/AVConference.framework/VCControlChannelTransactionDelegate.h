/*
* Generated on Thursday, January 14, 2021 at 2:25:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCControlChannelTransactionDelegate <NSObject>
@property (readonly) BOOL isEncryptionEnabled; 
@required
-(BOOL)isEncryptionEnabled;
-(BOOL)isParticipantActive:(unsigned long long)arg1;
-(void)addToSentStats:(int)arg1;
-(id)lastUsedMKIBytes;
-(void)scheduleAfter:(unsigned)arg1 block:(/*^block*/id)arg2;
-(void)addToReceivedStats:(int)arg1;

@end

