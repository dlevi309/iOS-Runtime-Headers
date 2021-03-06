/*
* Generated on Thursday, January 14, 2021 at 2:28:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SchoolTime.framework/SchoolTime
*/

#import <SchoolTime/SchoolTime-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol OS_dispatch_queue;
@class NRDevice, IDSDevice, SCLTransportController, SCLSchoolModeServer, SCLUnlockHistoryPersistentStore, NSURL, NSObject;

@interface SCLSchoolModeCoordinatorConfiguration : NSObject <NSCopying> {

	BOOL _sendsRemoteScheduleSettings;
	BOOL _sendsRemoteHistoryItems;
	BOOL _manuallyManagedOnly;
	NRDevice* _NRDevice;
	IDSDevice* _idsDevice;
	SCLTransportController* _transportController;
	SCLSchoolModeServer* _server;
	SCLUnlockHistoryPersistentStore* _historyStore;
	NSURL* _directoryURL;
	NSObject*<OS_dispatch_queue> _targetQueue;

}

@property (nonatomic,retain) NRDevice * NRDevice;                                                //@synthesize NRDevice=_NRDevice - In the implementation block
@property (nonatomic,retain) IDSDevice * idsDevice;                                              //@synthesize idsDevice=_idsDevice - In the implementation block
@property (nonatomic,retain) SCLTransportController * transportController;                       //@synthesize transportController=_transportController - In the implementation block
@property (nonatomic,retain) SCLSchoolModeServer * server;                                       //@synthesize server=_server - In the implementation block
@property (nonatomic,retain) SCLUnlockHistoryPersistentStore * historyStore;                     //@synthesize historyStore=_historyStore - In the implementation block
@property (nonatomic,retain) NSURL * directoryURL;                                               //@synthesize directoryURL=_directoryURL - In the implementation block
@property (assign,nonatomic) BOOL sendsRemoteScheduleSettings;                                   //@synthesize sendsRemoteScheduleSettings=_sendsRemoteScheduleSettings - In the implementation block
@property (assign,nonatomic) BOOL sendsRemoteHistoryItems;                                       //@synthesize sendsRemoteHistoryItems=_sendsRemoteHistoryItems - In the implementation block
@property (assign,getter=isManuallyManagedOnly,nonatomic) BOOL manuallyManagedOnly;              //@synthesize manuallyManagedOnly=_manuallyManagedOnly - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> targetQueue;                           //@synthesize targetQueue=_targetQueue - In the implementation block
-(void)setTargetQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)targetQueue;
-(void)setServer:(SCLSchoolModeServer *)arg1 ;
-(IDSDevice *)idsDevice;
-(void)setIdsDevice:(IDSDevice *)arg1 ;
-(SCLSchoolModeServer *)server;
-(NSURL *)directoryURL;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NRDevice *)NRDevice;
-(SCLTransportController *)transportController;
-(BOOL)sendsRemoteScheduleSettings;
-(SCLUnlockHistoryPersistentStore *)historyStore;
-(BOOL)sendsRemoteHistoryItems;
-(void)setNRDevice:(NRDevice *)arg1 ;
-(void)setTransportController:(SCLTransportController *)arg1 ;
-(void)setHistoryStore:(SCLUnlockHistoryPersistentStore *)arg1 ;
-(void)setSendsRemoteHistoryItems:(BOOL)arg1 ;
-(void)setSendsRemoteScheduleSettings:(BOOL)arg1 ;
-(BOOL)isManuallyManagedOnly;
-(void)setManuallyManagedOnly:(BOOL)arg1 ;
@end

