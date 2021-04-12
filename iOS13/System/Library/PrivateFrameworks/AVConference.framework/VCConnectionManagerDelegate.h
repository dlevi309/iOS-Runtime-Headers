/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCConnectionManagerDelegate <NSObject>
@optional
-(void)resetParticipantGenerationCounter;
-(void)discardConnection:(id)arg1;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1;
-(void)optOutAllStreamsForConnection:(id)arg1;

@required
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2;
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;

@end

