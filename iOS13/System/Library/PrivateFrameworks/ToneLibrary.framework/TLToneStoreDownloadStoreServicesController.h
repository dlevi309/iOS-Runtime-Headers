/*
* Generated on Monday, March 1, 2021 at 2:32:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ToneLibrary.framework/ToneLibrary
*/

#import <libobjc.A.dylib/SSDownloadManagerObserver.h>
#import <libobjc.A.dylib/SSPurchaseManagerDelegate.h>
#import <libobjc.A.dylib/TLToneStoreDownloadController.h>

@protocol OS_dispatch_queue;
@class NSString, NSObject, NSHashTable, NSMutableDictionary, SSDownloadManager, SSPurchaseManager;

@interface TLToneStoreDownloadStoreServicesController : NSObject <SSDownloadManagerObserver, SSPurchaseManagerDelegate, TLToneStoreDownloadController> {

	NSObject*<OS_dispatch_queue> _accessQueue;
	NSString* _accessQueueLabel;
	NSHashTable* _observers;
	NSString* _storeAccountName;
	NSMutableDictionary* _toneStoreDownloadsByStoreDownloadPersistentIdentifiers;
	SSDownloadManager* _storeDownloadManager;
	SSPurchaseManager* _storePurchaseManager;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * storeAccountName; 
-(id)init;
-(void)dealloc;
-(void)addObserver:(id)arg1 ;
-(void)removeObserver:(id)arg1 ;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(NSString *)storeAccountName;
-(void)_updateStoreAccountName;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_handleToneManagerContentsDidChangeNotification:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1 ;
-(void)_openToneStoreWithStoreItemKind:(id)arg1 ;
-(void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3 ;
-(void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;
@end

