/*
* Generated on Thursday, January 14, 2021 at 2:25:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MailServices.framework/MailServices
*/

#import <MailServices/MSXPCService.h>

@class NSHashTable;

@interface MSAutosave : MSXPCService {

	NSHashTable* _activeAutosaveSessions;

}

@property (nonatomic,retain) NSHashTable * activeAutosaveSessions;              //@synthesize activeAutosaveSessions=_activeAutosaveSessions - In the implementation block
+(id)log;
+(id)autosave;
-(id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(id)init;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)_getRemoteAutosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)setActiveAutosaveSessions:(NSHashTable *)arg1 ;
-(NSHashTable *)activeAutosaveSessions;
-(void)autosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)getIdleAutosaves:(/*^block*/id)arg1 ;
-(void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)_handleInterruptedConnection;
-(id)_timeout;
@end

