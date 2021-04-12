/*
* Generated on Thursday, January 14, 2021 at 2:28:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/iWorkXPC.framework/XPCServices/iWorkFileFormat.xpc/Frameworks/TSPersistence.framework/TSPersistence
*/

#import <libobjc.A.dylib/NSFilePresenter.h>
#import <TSPersistence/TSPFileCoordinatorDelegate.h>

@protocol OS_dispatch_group;
@class NSURL, NSOperationQueue, NSSet, TSPObjectContext, NSRecursiveLock, TSPSupportSaveOperationState, NSObject, NSString;

@interface TSPSupportManager : NSObject <NSFilePresenter, TSPFileCoordinatorDelegate> {

	TSPObjectContext* _context;
	NSOperationQueue* _presentedItemQueue;
	NSRecursiveLock* _presentedSupportURLLock;
	NSURL* _presentedSupportURL;
	TSPSupportSaveOperationState* _saveOperationState;
	NSObject*<OS_dispatch_group> _pendingEndSaveGroup;

}

@property (copy) NSURL * presentedSupportURL; 
@property (copy,readonly) NSURL * presentedItemURL; 
@property (retain,readonly) NSOperationQueue * presentedItemOperationQueue; 
@property (copy,readonly) NSURL * primaryPresentedItemURL; 
@property (readonly) NSSet * observedPresentedItemUbiquityAttributes; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)defaultSupportDirectoryURL;
+(id)supportBundleURLForDocumentUUID:(id)arg1 delegate:(id)arg2 ;
+(void)garbageCollectDocumentSupportWithKnownDocumentUUIDs:(id)arg1 delegate:(id)arg2 ;
+(BOOL)isSupportAtURLValid:(id)arg1 documentUUID:(id)arg2 versionUUID:(id)arg3 documentProperties:(id*)arg4 ;
+(id)supportDirectoryURLWithDelegate:(id)arg1 isUnique:(BOOL*)arg2 ;
-(NSURL *)presentedItemURL;
-(NSOperationQueue *)presentedItemOperationQueue;
-(void)presentedItemDidMoveToURL:(id)arg1 ;
-(id)init;
-(id)initWithContext:(id)arg1 ;
-(void)removeFilePresenter;
-(void)performReadUsingAccessor:(/*^block*/id)arg1 ;
-(void)beginSaveWithDocumentUUID:(id)arg1 versionUUID:(id)arg2 originalURL:(id)arg3 updateType:(long long)arg4 ;
-(BOOL)writeSupportForDocumentUUID:(id)arg1 error:(id*)arg2 writer:(/*^block*/id)arg3 ;
-(BOOL)endSaveWithSuccess:(BOOL)arg1 packageWriter:(id)arg2 newURL:(id*)arg3 writtenPackage:(id*)arg4 ;
-(void)updatePresentedItemURL:(id)arg1 ;
-(BOOL)didUpdateDocumentUUIDWithOriginalDocumentProperties:(id)arg1 newDocumentProperties:(id)arg2 preserveOriginalDocumentSupport:(BOOL)arg3 preserveShareUUID:(BOOL)arg4 originalURL:(id)arg5 newURL:(id*)arg6 error:(id*)arg7 ;
-(id)supportURLWithDocumentUUID:(id)arg1 ;
-(void)setPresentedSupportURL:(NSURL *)arg1 ;
-(NSURL *)presentedSupportURL;
-(BOOL)copyOrMoveSupportAtURL:(id)arg1 originalDocumentProperties:(id)arg2 toURL:(id)arg3 isCopying:(BOOL)arg4 newDocumentProperties:(id)arg5 error:(id*)arg6 ;
@end

