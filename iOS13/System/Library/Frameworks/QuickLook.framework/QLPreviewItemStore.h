/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QuickLook-Structs.h>
#import <libobjc.A.dylib/QLPreviewItemProvider.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@protocol QLPreviewItemProvider, QLPreviewItemStoreDelegate;
@class NSPointerArray, QLDataSource;

@interface QLPreviewItemStore : NSObject <QLPreviewItemProvider, QLPreviewControllerDataSource> {

	NSPointerArray* _cache;
	id<QLPreviewItemProvider> _itemProvider;
	QLDataSource* _internalItemProvider;
	BOOL _isArchive;
	id<QLPreviewItemStoreDelegate> _delegate;
	NSRange _possibleRange;

}

@property (assign,nonatomic,__weak) id<QLPreviewItemProvider> itemProvider;              //@synthesize itemProvider=_itemProvider - In the implementation block
@property (readonly) unsigned long long numberOfItems; 
@property (readonly) NSRange possibleRange;                                              //@synthesize possibleRange=_possibleRange - In the implementation block
@property (__weak) id<QLPreviewItemStoreDelegate> delegate;                              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) BOOL isArchive;                                                     //@synthesize isArchive=_isArchive - In the implementation block
-(id)init;
-(void)dealloc;
-(void)clearCache;
-(id<QLPreviewItemStoreDelegate>)delegate;
-(void)setDelegate:(id<QLPreviewItemStoreDelegate>)arg1 ;
-(id<QLPreviewItemProvider>)itemProvider;
-(void)setItemProvider:(id<QLPreviewItemProvider>)arg1 ;
-(void)_commonInit;
-(unsigned long long)numberOfItems;
-(void)clearItems;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(BOOL)isArchive;
-(id)initWithPreviewItems:(id)arg1 ;
-(NSRange)possibleRange;
-(void)previewItemAtIndex:(unsigned long long)arg1 withCompletionHandler:(/*^block*/id)arg2 ;
-(id)initWithItemsOfDirectoryAtURL:(id)arg1 ;
-(void)reloadWithNumberOfPreviewItems:(unsigned long long)arg1 ;
-(long long)indexOfPreviewItem:(id)arg1 ;
@end

