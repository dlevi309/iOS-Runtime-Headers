/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemFetcher.h>

@class FPSandboxingURLWrapper, NSFileCoordinator, NSMutableArray, NSNumber, QLURLHandler, NSURL;

@interface QLUbiquitousItemFetcher : QLItemFetcher {

	FPSandboxingURLWrapper* _sandboxingWrapper;
	NSFileCoordinator* _fileCoordinator;
	NSMutableArray* _updateBlocks;
	id _progressSubscriber;
	NSNumber* _sizeTotalUnitCount;
	QLURLHandler* _zipPackageUrlHandler;
	BOOL _shouldZipPackageIfNeeded;
	BOOL _isAccessingURL;

}

@property (nonatomic,readonly) NSURL * fileURL; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(NSURL *)fileURL;
-(id)itemSize;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)initWithZippingPackageIfNeeded:(BOOL)arg1 ;
-(void)_removeUpdateBlockIfNeeded:(/*^block*/id)arg1 ;
-(id)_createURLForPackageIfNeeded;
-(void)subscribeToPreviewItemProgress;
-(void)_deleteTempraryZipPackageFileIfNeeded;
-(id)initWithSandboxingURLWrapper:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(id)initWithURL:(id)arg1 shouldZipPackageIfNeeded:(BOOL)arg2 ;
-(BOOL)canBeCanceled;
-(void)cancelFetch;
@end

