/*
* Generated on Thursday, January 14, 2021 at 2:21:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/IDS.framework/IDS
*/


@class _IDSGroupSession, NSString;

@interface IDSGroupSession : NSObject {

	_IDSGroupSession* _internal;

}

@property (nonatomic,readonly) NSString * sessionID; 
@property (nonatomic,readonly) NSString * destination; 
@property (nonatomic,readonly) unsigned sessionEndedReason; 
+(void)requestNWConnectionforIDSGroupSessionUnicastParameter:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(NSString *)sessionID;
-(id)_internal;
-(void)setPreferences:(id)arg1 ;
-(void)setDelegate:(id)arg1 queue:(id)arg2 ;
-(id)initWithAccount:(id)arg1 options:(id)arg2 ;
-(unsigned)state;
-(void)invalidate;
-(unsigned)sessionEndedReason;
-(void)setParticipantInfo:(id)arg1 ;
-(void)joinWithOptions:(id)arg1 ;
-(void)updateMembers:(id)arg1 withContext:(id)arg2 triggeredLocally:(BOOL)arg3 ;
-(id)_internal_sessionWithValidityCheck;
-(void)updateParticipantData:(id)arg1 withContext:(id)arg2 ;
-(void)leaveGroupSession;
-(void)requestActiveParticipants;
-(id)initWithAccount:(id)arg1 destinations:(id)arg2 options:(id)arg3 ;
-(id)unicastParameterForParticipantID:(unsigned long long)arg1 dataMode:(long long)arg2 connectionIndex:(unsigned long long)arg3 ;
-(NSString *)destination;
-(void)dealloc;
@end

