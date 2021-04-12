/*
* Generated on Monday, March 1, 2021 at 2:30:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSGroupSession, NSString;

@interface IDSGroupSession : NSObject {

	_IDSGroupSession* _internal;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
-(void)dealloc;
-(void)invalidate;
-(id)_internal;
-(unsigned)state;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(NSString *)destination;
-(NSString *)sessionID;
-(void)setPreferences:(id)arg1 ;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(unsigned)sessionEndedReason;
-(id)_internal_sessionWithValidityCheck;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinWithOptions:(id)arg1 ;
-(void)leaveGroupSession;
-(void)requestActiveParticipants;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3 ;
@end

