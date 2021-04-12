/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@protocol VCConnectionManagerDelegate <VCLinkProbingHandlerDelegate>
@optional
-(void)handleRATChanged:(id)arg1;
-(void)discardConnection:(id)arg1;
-(void)updateParticipantGenerationCounter:(unsigned char)arg1;
-(void)resetParticipantGenerationCounter;
-(void)optOutAllStreamsForConnection:(id)arg1;

@required
-(void)connectionCallback:(id)arg1 isInitialConnection:(BOOL)arg2;
-(void)didEnableDuplication:(BOOL)arg1 activeConnection:(id)arg2;
-(void)primaryConnectionChanged:(id)arg1 oldPrimaryConnection:(id)arg2 activeConnection:(id)arg3;

@end

