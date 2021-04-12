/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(id)_internal;
-(unsigned)state;
-(NSString *)uniqueID;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)destination;
-(void)endSession;
-(NSString *)sessionID;
-(void)setPreferences:(id)arg1 ;
-(void)setUniqueID:(NSString *)arg1 ;
-(void)acceptInvitation;
-(int)socket;
-(void)cancelInvitation;
-(void)sendInvitationWithOptions:(id)arg1 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(unsigned)sessionEndedReason;
-(unsigned long long)initialLinkType;
-(void)sendInvitationWithData:(id)arg1 declineOnError:(BOOL)arg2 ;
-(void)cancelInvitationWithRemoteEndedReasonOverride:(unsigned)arg1 ;
-(void)cancelInvitationWithData:(id)arg1 ;
-(void)acceptInvitationWithData:(id)arg1 ;
-(void)declineInvitationWithData:(id)arg1 ;
-(void)declineInvitation;
-(void)endSessionWithData:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 ;
-(void)sendSessionMessage:(id)arg1 toDestinations:(id)arg2 ;
-(void)sendAllocationRequest:(id)arg1 ;
-(BOOL)sendData:(id)arg1 error:(id*)arg2 ;
-(void)reconnectSession;
-(BOOL)shouldUseSocketForTransport;
-(unsigned long long)MTUForAddressFamily:(unsigned long long)arg1 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 ;
-(id)_initWithAccount:(id)arg1 destinations:(id)arg2 transportType:(long long)arg3 uniqueID:(id)arg4 ;
-(void)sendInvitation;
-(void)sendInvitationWithData:(id)arg1 ;
-(void)setStreamPreferences:(id)arg1 ;
-(id)_streamPreferences;
-(void)setIsAudioEnabled:(BOOL)arg1 ;
-(BOOL)isAudioEnabled;
-(void)setIsMuted:(BOOL)arg1 ;
-(BOOL)isMuted;
-(void)setInvitationTimeOut:(long long)arg1 ;
-(long long)invitationTimeOut;
@end

