/*
* Generated on Monday, March 1, 2021 at 2:32:29 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MusicLibrary.framework/MusicLibrary
*/

#import <MusicLibrary/_ML3BaseMusicLibraryResourcesManager.h>
#import <libobjc.A.dylib/_ML3MultiUserDaemonAccountChangeOperationDelegate.h>

@protocol OS_dispatch_queue, ML3AccountInformationProviding, MLMediaLibraryAccountChangeObserver;
@class NSString, NSObject, NSOperationQueue;

@interface _ML3MultiUserDaemonMusicLibraryResourcesManager : _ML3BaseMusicLibraryResourcesManager <_ML3MultiUserDaemonAccountChangeOperationDelegate> {

	NSString* _currentActiveAccountDSID;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _calloutQueue;
	NSOperationQueue* _accountChangeOperationQueue;
	id<ML3AccountInformationProviding> _accountInfo;
	id<MLMediaLibraryAccountChangeObserver> _accountChangeObserver;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;                                          //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> calloutQueue;                                         //@synthesize calloutQueue=_calloutQueue - In the implementation block
@property (nonatomic,retain) NSOperationQueue * accountChangeOperationQueue;                                    //@synthesize accountChangeOperationQueue=_accountChangeOperationQueue - In the implementation block
@property (nonatomic,retain) id<ML3AccountInformationProviding> accountInfo;                                    //@synthesize accountInfo=_accountInfo - In the implementation block
@property (assign,nonatomic,__weak) id<MLMediaLibraryAccountChangeObserver> accountChangeObserver;              //@synthesize accountChangeObserver=_accountChangeObserver - In the implementation block
@property (nonatomic,copy) NSString * currentActiveAccountDSID;                                                 //@synthesize currentActiveAccountDSID=_currentActiveAccountDSID - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(id<MLMediaLibraryAccountChangeObserver>)accountChangeObserver;
-(void)setAccountChangeObserver:(id<MLMediaLibraryAccountChangeObserver>)arg1 ;
-(void)setCalloutQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(NSObject*<OS_dispatch_queue>)calloutQueue;
-(void)setAccountInfo:(id<ML3AccountInformationProviding>)arg1 ;
-(id<ML3AccountInformationProviding>)accountInfo;
-(void)_setupNotifications;
-(void)_tearDownNotifications;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_accountStoreDidChangeNotification:(id)arg1 ;
-(id)libraryContainerPath;
-(NSOperationQueue *)accountChangeOperationQueue;
-(void)setAccountChangeOperationQueue:(NSOperationQueue *)arg1 ;
-(id)initWithAccountInfo:(id)arg1 accountChangeObserver:(id)arg2 ;
-(NSString *)currentActiveAccountDSID;
-(id)_libraryContainerPathForDSID:(id)arg1 ;
-(void)_processAccountChangeNotification;
-(void)setCurrentActiveAccountDSID:(NSString *)arg1 ;
-(BOOL)shouldExecuteAccountChangeOperation:(id)arg1 reason:(id*)arg2 ;
-(id)databasePathForDSID:(id)arg1 ;
-(void)accountChangeOperationWillStartPerformingDatabasePathChange:(id)arg1 newDatabasePath:(id)arg2 ;
-(void)_notifyClients:(id)arg1 ;
@end

