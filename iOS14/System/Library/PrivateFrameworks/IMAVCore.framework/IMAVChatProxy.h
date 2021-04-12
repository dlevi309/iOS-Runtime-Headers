/*
* Generated on Thursday, January 14, 2021 at 2:27:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IMAVCore.framework/IMAVCore
*/


#import <IMAVCore/IMAVCore-Structs.h>
@class NSDictionary, NSString, NSDate, NSArray, IMHandle, NSNumber;

@interface IMAVChatProxy : NSObject {

	NSDictionary* _info;

}

@property (nonatomic,readonly) NSString * GUID; 
@property (nonatomic,readonly) unsigned sessionID; 
@property (nonatomic,readonly) NSString * conferenceID; 
@property (nonatomic,readonly) unsigned state; 
@property (nonatomic,readonly) NSDate * dateConnected; 
@property (nonatomic,readonly) NSDate * dateEnded; 
@property (nonatomic,readonly) NSArray * remoteParticipants; 
@property (nonatomic,readonly) IMHandle * initiatorIMHandle; 
@property (nonatomic,readonly) IMHandle * otherIMHandle; 
@property (nonatomic,readonly) unsigned endedReason; 
@property (nonatomic,readonly) int endedError; 
@property (nonatomic,readonly) BOOL isCaller; 
@property (nonatomic,readonly) BOOL isVideo; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isStateFinal; 
@property (assign,nonatomic) BOOL isSendingAudio; 
@property (assign,nonatomic) BOOL isSendingVideo; 
@property (nonatomic,readonly) BOOL hasReceivedFirstFrame; 
@property (assign,setter=setMute:,nonatomic) BOOL isMute; 
@property (nonatomic,readonly) NSNumber * dataUploaded; 
@property (nonatomic,readonly) NSNumber * dataDownloaded; 
@property (assign,nonatomic) double invitationTimeoutTime; 
@property (assign,nonatomic) double connectionTimeoutTime; 
@property (assign,getter=isRelayed,nonatomic) BOOL relayed; 
-(id)account;
-(unsigned)sessionID;
-(void)setIsSendingAudio:(BOOL)arg1 ;
-(void)setMute:(BOOL)arg1 ;
-(BOOL)isActive;
-(NSDate *)dateEnded;
-(BOOL)isMute;
-(id)description;
-(BOOL)_isProxy;
-(BOOL)isVideo;
-(unsigned)state;
-(unsigned)endedReason;
-(NSDate *)dateConnected;
-(void)cancelInvitation;
-(void)endChat;
-(void)acceptInvitation;
-(void)declineInvitation;
-(id)methodSignatureForSelector:(SEL)arg1 ;
-(void)setIsSendingVideo:(BOOL)arg1 ;
-(BOOL)isSendingVideo;
-(NSString *)GUID;
-(BOOL)isSendingAudio;
-(void)forwardInvocation:(id)arg1 ;
-(NSString *)conferenceID;
-(BOOL)isCaller;
-(NSArray *)remoteParticipants;
-(BOOL)hasReceivedFirstFrame;
-(IMHandle *)otherIMHandle;
-(IMHandle *)initiatorIMHandle;
-(void)endChatWithReason:(unsigned)arg1 ;
-(void)inviteAll;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 excludingPushTokens:(id)arg3 ;
-(void)setInvitationTimeoutTime:(double)arg1 ;
-(void)setConnectionTimeoutTime:(double)arg1 ;
-(void)setRelayed:(BOOL)arg1 ;
-(void)setLocalAspectRatio:(CGSize)arg1 cameraOrientation:(unsigned)arg2 cameraType:(unsigned)arg3 ;
-(void)updateWithInfo:(id)arg1 ;
-(BOOL)_isCallUpgradeTo:(id)arg1 ;
-(void)invite:(id)arg1 additionalPeers:(id)arg2 ;
-(int)endedError;
-(NSNumber *)dataUploaded;
-(NSNumber *)dataDownloaded;
-(BOOL)isRelayed;
-(BOOL)isStateFinal;
-(double)invitationTimeoutTime;
-(double)connectionTimeoutTime;
-(void)finalUpdate;
@end

