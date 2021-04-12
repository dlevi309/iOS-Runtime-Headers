/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/


@protocol OS_dispatch_queue;
@class NSObject, NSURL, VSAccountStore, NSString, NSUndoManager;

@interface VSAccountChannelsCenter : NSObject {

	NSObject*<OS_dispatch_queue> _serialQueue;
	NSURL* _fileURL;
	VSAccountStore* _accountStore;
	NSString* _fileName;
	NSURL* _directoryURL;
	/*^block*/id _identityProviderFetchOperationBlock;

}

@property (nonatomic,retain) NSObject*<OS_dispatch_queue> serialQueue;              //@synthesize serialQueue=_serialQueue - In the implementation block
@property (nonatomic,copy) NSURL * fileURL;                                         //@synthesize fileURL=_fileURL - In the implementation block
@property (nonatomic,retain) VSAccountStore * accountStore;                         //@synthesize accountStore=_accountStore - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                     //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSURL * directoryURL;                                    //@synthesize directoryURL=_directoryURL - In the implementation block
@property (nonatomic,copy) id identityProviderFetchOperationBlock;                  //@synthesize identityProviderFetchOperationBlock=_identityProviderFetchOperationBlock - In the implementation block
@property (nonatomic,retain) NSUndoManager * undoManager; 
+(id)sharedCenter;
+(void)_startOperationAndWaitForCompletion:(id)arg1 ;
+(id)_accountChannelsWithProviderID:(id)arg1 ;
+(id)_defaultDirectoryURL;
+(id)_defaultFileName;
-(id)init;
-(NSURL *)fileURL;
-(void)setFileURL:(NSURL *)arg1 ;
-(NSObject*<OS_dispatch_queue>)serialQueue;
-(void)setUndoManager:(NSUndoManager *)arg1 ;
-(id)initWithAccountStore:(id)arg1 ;
-(void)setAccountStore:(VSAccountStore *)arg1 ;
-(VSAccountStore *)accountStore;
-(NSURL *)directoryURL;
-(void)setDirectoryURL:(NSURL *)arg1 ;
-(NSUndoManager *)undoManager;
-(NSString *)fileName;
-(void)setFileName:(NSString *)arg1 ;
-(void)setSerialQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)fetchAccountChannelsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)_saveAccountChannels:(id)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)_savedAccountChannels;
-(void)_enqueueSaveAccountChannelsAndWait:(id)arg1 ;
-(void)_enqueueRemoveSavedAccountChannelsAndWait;
-(id)identityProviderFetchOperationBlock;
-(id)_removeSavedAccountChannels;
-(void)_snapshotPreviousChannels;
-(id)_saveAccountChannels:(id)arg1 ;
-(id)_storeIdentityProviderForAccount:(id)arg1 ;
-(id)_savedAccountChannelsForIdentityProviderID:(id)arg1 storeIdentityProvider:(id)arg2 ;
-(void)_removeSavedAccountChannelsWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)setIdentityProviderFetchOperationBlock:(id)arg1 ;
@end

