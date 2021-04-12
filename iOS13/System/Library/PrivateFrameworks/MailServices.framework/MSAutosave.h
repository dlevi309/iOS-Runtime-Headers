/*
* Generated on Monday, March 1, 2021 at 2:32:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)_timeout;
-(void)_handleInterruptedConnection;
-(BOOL)hasAutosavedMessageWithIdentifier:(id)arg1 ;
-(void)autosaveMessageData:(id)arg1 replacingIdentifier:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)autosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeAutosavedMessageWithIdentifier:(id)arg1 ;
-(id)autosavedMessageDataWithIdentifier:(id)arg1 error:(id*)arg2 ;
-(void)getIdleAutosaves:(/*^block*/id)arg1 ;
-(id)initWithRemoteObjectInterface:(id)arg1 ;
-(NSHashTable *)activeAutosaveSessions;
-(void)_getRemoteAutosaveSessionForIdentifier:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)newConnectionForInterface:(id)arg1 ;
-(void)setActiveAutosaveSessions:(NSHashTable *)arg1 ;
@end

