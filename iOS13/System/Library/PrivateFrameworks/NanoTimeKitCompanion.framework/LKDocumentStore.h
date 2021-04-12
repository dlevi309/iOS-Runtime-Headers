/*
* Generated on Monday, March 1, 2021 at 2:35:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoTimeKitCompanion.framework/NanoTimeKitCompanion
*/

#import <libobjc.A.dylib/DirectoryWatcherDelegate.h>

@protocol LKDocumentStoreDelegate;
@class NSString, DirectoryWatcher, NSArray, NSDictionary;

@interface LKDocumentStore : NSObject <DirectoryWatcherDelegate> {

	NSString* _dataPath;
	DirectoryWatcher* _inboxWatcher;
	DirectoryWatcher* _documentsWatcher;
	NSArray* _documents;
	id<LKDocumentStoreDelegate> _delegate;

}

@property (nonatomic,readonly) NSDictionary * capabilities; 
@property (assign,nonatomic,__weak) id<LKDocumentStoreDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)_hasWriteAccess;
+(id)sharedDocumentStore;
-(id)init;
-(void)dealloc;
-(id<LKDocumentStoreDelegate>)delegate;
-(void)setDelegate:(id<LKDocumentStoreDelegate>)arg1 ;
-(NSDictionary *)capabilities;
-(id)documentsPath;
-(void)_loadDocumentsFromIndexFileAndNotifyChanges:(BOOL)arg1 ;
-(void)writeDocumentsToIndexFile:(id)arg1 ;
-(id)capabilitiesPath;
-(void)processInbox;
-(id)inboxPath;
-(id)documentDataPath;
-(id)pathForDocumentDirectory:(id)arg1 create:(BOOL)arg2 ;
-(id)addDocumentFromInboxURL:(id)arg1 ;
-(id)documentWithName:(id)arg1 ;
-(void)updateDocument:(id)arg1 ;
-(id)documentIndexPath;
-(void)_didAddDocument:(id)arg1 ;
-(void)_didModifyDocument:(id)arg1 ;
-(void)_loadDocumentsFromIndex;
-(void)directoryDidChange:(id)arg1 ;
-(id)dictionaryDocuments;
-(BOOL)writeDocumentData:(id)arg1 toFile:(id)arg2 ;
-(id)documentDataFromFile:(id)arg1 ;
-(id)pathForDocument:(id)arg1 ;
-(void)_didRemoveDocument:(id)arg1 ;
@end

