/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)itemSize;
-(void)encodeWithCoder:(id)arg1 ;
-(NSItemProvider *)itemProvider;
-(void)updatedURLWithProgress:(double)arg1 ;
-(void)getURLWithDownloadTracker:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(BOOL)canBeCanceled;
-(void)setItemProvider:(NSItemProvider *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isLongFetchOperation;
-(void)fetchContentWithAllowedOutputClasses:(id)arg1 inQueue:(id)arg2 updateBlock:(/*^block*/id)arg3 completionBlock:(/*^block*/id)arg4 ;
-(void)_updateCompletionBlockWithAllowedOutputClasses:(id)arg1 URL:(id)arg2 ;
-(id)lastContent;
-(id)initWithContentType:(id)arg1 fileSize:(id)arg2 ;
-(id<QLPreviewItemURLProvider>)urlProvider;
-(void)setLastContent:(id)arg1 ;
-(void)setUrlProvider:(id<QLPreviewItemURLProvider>)arg1 ;
-(id)fetchedContent;
-(id)newItemProvider;
-(id)shareableItem;
-(void)dealloc;
@end

