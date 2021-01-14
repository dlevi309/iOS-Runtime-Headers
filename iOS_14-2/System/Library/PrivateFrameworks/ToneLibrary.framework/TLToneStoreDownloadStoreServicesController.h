/*
* Generated on Thursday, January 14, 2021 at 2:25:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)addObserver:(id)arg1 ;
-(void)purchaseManager:(id)arg1 didFinishPurchasesWithResponses:(id)arg2 ;
-(id)init;
-(void)downloadManager:(id)arg1 downloadStatesDidChange:(id)arg2 ;
-(void)removeObserver:(id)arg1 ;
-(void)_assertRunningOnAccessQueue;
-(NSString *)storeAccountName;
-(void)dealloc;
-(void)_updateStoreAccountName;
-(void)_performBlockOnAccessQueue:(/*^block*/id)arg1 ;
-(void)_handleAccountStoreDidChangeNotification:(id)arg1 ;
-(void)_handleToneManagerContentsDidChangeNotification:(id)arg1 ;
-(void)_notifyObserversOfUpdatedStoreAccountName:(id)arg1 ;
-(void)_openToneStoreWithStoreItemKind:(id)arg1 ;
-(void)_notifyObserversOfStartedToneStoreDownloads:(id)arg1 progressedToneStoreDownload:(id)arg2 finishedToneStoreDownloads:(id)arg3 ;
-(void)_notifyObserversOfCheckingForDownloadsFinishedWithoutNeedToIssueAnyDownload;
-(void)openAlertToneStore;
-(void)openRingtoneStore;
-(void)redownloadAllTones;
@end

