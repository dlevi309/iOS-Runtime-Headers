/*
* Generated on Thursday, January 14, 2021 at 2:25:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
*/

#import <libobjc.A.dylib/PSYSyncCoordinatorDelegate.h>
#import <libobjc.A.dylib/HDDiagnosticObject.h>

@protocol OS_dispatch_queue;
@class PSYSyncCoordinator, HDProfile, NSObject, NSHashTable, NSString;

@interface HDPairedSyncManager : NSObject <PSYSyncCoordinatorDelegate, HDDiagnosticObject> {

	PSYSyncCoordinator* _pairedSyncCoordinator;
	HDProfile* _profile;
	NSObject*<OS_dispatch_queue> _queue;
	NSHashTable* _unfinishedSyncSessions;

}

@property (nonatomic,retain) PSYSyncCoordinator * pairedSyncCoordinator;              //@synthesize pairedSyncCoordinator=_pairedSyncCoordinator - In the implementation block
@property (assign,nonatomic,__weak) HDProfile * profile;                              //@synthesize profile=_profile - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;                      //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSHashTable * unfinishedSyncSessions;                    //@synthesize unfinishedSyncSessions=_unfinishedSyncSessions - In the implementation block
@property (readonly) PSYSyncCoordinator * syncCoordinator; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)syncCoordinatorWithServiceName:(id)arg1 ;
-(void)setProfile:(HDProfile *)arg1 ;
-(PSYSyncCoordinator *)syncCoordinator;
-(id)_typeStringForSyncSession:(id)arg1 ;
-(void)syncCoordinator:(id)arg1 beginSyncSession:(id)arg2 ;
-(id)_syncRestrictionString;
-(PSYSyncCoordinator *)pairedSyncCoordinator;
-(id)diagnosticDescription;
-(void)setPairedSyncCoordinator:(PSYSyncCoordinator *)arg1 ;
-(HDProfile *)profile;
-(NSHashTable *)unfinishedSyncSessions;
-(void)_queue_didSendRestoreMessagesForSession:(id)arg1 error:(id)arg2 ;
-(void)_queue_didFinishRestoreForSession:(id)arg1 error:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)syncCoordinator:(id)arg1 didInvalidateSyncSession:(id)arg2 ;
-(BOOL)permitSynchronization;
-(void)_queue_pairedSyncDidStartWithSession:(id)arg1 ;
-(void)setUnfinishedSyncSessions:(NSHashTable *)arg1 ;
-(void)syncCoordinatorDidChangeSyncRestriction:(id)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(id)initWithProfile:(id)arg1 queue:(id)arg2 ;
-(void)dealloc;
@end

