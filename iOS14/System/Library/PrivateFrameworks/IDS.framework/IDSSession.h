/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


#import <IDS/IDS-Structs.h>
@class _IDSSession, NSString;

@interface IDSSession : NSObject {

	_IDSSession* _internal;
	NSString* _uniqueID;
	os_unfair_lock_s _uniqueIDLock;

}

@property (nonatomic,retain) NSString * uniqueID;                        //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) int socket; 
@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (assign,nonatomic) BOOL isAudioEnabled; 
@property (assign,nonatomic) BOOL isMuted; 
@property (assign,nonatomic) long long invitationTimeOut; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
-(void)setUniqueID:(NSString *)arg1 ;
-(NSString *)sessionID;
-(id)_internal;
-(NSString *)uniqueID;
-(int)socket;
-(void)setPreferences:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)description;
-(unsigned)state;
-(void)setIsMuted:(BOOL)arg1 ;
-(unsigned)sessionEndedReason;
-(BOOL)isMuted;
-(void)endSession;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(unsigned long long)initialLinkType;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned)arg1 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)cancelInvitation;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)acceptInvitation;
-(void)declineInvitation;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 ;
-(void)sendAllocationRequest:(id)arg1 ;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(void)reconnectSession;
-(unsigned long long)MTUForAddressFamily:(unsigned long long)arg1 ;
-(BOOL)shouldUseSocketForTransport;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 ;
-(void)sendInvitation;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 ;
-(void)sendInvitationWithData:(id)arg1 ;
-(id)_streamPreferences;
-(void)setStreamPreferences:(id)arg1 ;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)setInvitationTimeOut:(long long)arg1 ;
-(long long)invitationTimeOut;
-(NSString *)destination;
-(void)dealloc;
@end

