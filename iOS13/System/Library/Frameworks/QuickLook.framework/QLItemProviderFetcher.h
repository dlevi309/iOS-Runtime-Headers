/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemFetcher.h>
#import <libobjc.A.dylib/QLPreviewItemURLProviderDownloadTracker.h>
#import <libobjc.A.dylib/QLPreviewItemURLProvider.h>

@protocol QLPreviewItemURLProvider;
@class NSItemProvider, NSString, NSNumber;

@interface QLItemProviderFetcher : QLItemFetcher <QLPreviewItemURLProviderDownloadTracker, QLPreviewItemURLProvider> {

	NSItemProvider* _itemProvider;
	NSString* _contentType;
	NSNumber* _fileSize;
	id<QLPreviewItemURLProvider> _urlProvider;
	/*^block*/id _updateBlock;
	/*^block*/id _completionBlock;
	long long _fileExtensionHandle;
	id _lastContent;

}

@property (nonatomic,retain) id lastContent;                              //@synthesize lastContent=_lastContent - In the implementation block
@property (retain) NSItemProvider * itemProvider;                         //@synthesize itemProvider=_itemProvider - In the implementation block
@property (retain) id<QLPreviewItemURLProvider> urlProvider;              //@synthesize urlProvider=_urlProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(void)dealloc;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)itemSize;
-(id)shareableItem;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(BOOL)canBeCanceled;
-(void)updatedURLWithProgress:(double)arg1 ;
-(void)getURLWithDownloadTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setUrlProvider:(id<QLPreviewItemURLProvider>)arg1 ;
-(void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg1 URL:(id)arg2 ;
-(id)lastContent;
-(id)initWithContentType:(id)arg1 fileSize:(id)arg2 ;
-(id<QLPreviewItemURLProvider>)urlProvider;
-(void)setLastContent:(id)arg1 ;
@end

