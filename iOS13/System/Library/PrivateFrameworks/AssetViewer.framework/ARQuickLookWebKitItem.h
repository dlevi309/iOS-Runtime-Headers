/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AssetViewer.framework/AssetViewer
*/

#import <QuickLook/QLItem.h>
#import <libobjc.A.dylib/QLPreviewItemPrivateCustomExtensionHandling.h>

@protocol ARQuickLookWebKitItemDelegate;
@class NSDictionary, ARQuickLookPreviewItem, NSString;

@interface ARQuickLookWebKitItem : QLItem <QLPreviewItemPrivateCustomExtensionHandling> {

	id<ARQuickLookWebKitItemDelegate> _delegate;
	NSDictionary* _additionalParameters;
	ARQuickLookPreviewItem* _previewItem;

}

@property (nonatomic,retain) ARQuickLookPreviewItem * previewItem;                           //@synthesize previewItem=_previewItem - In the implementation block
@property (assign,nonatomic,__weak) id<ARQuickLookWebKitItemDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy) NSDictionary * additionalParameters;                              //@synthesize additionalParameters=_additionalParameters - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id<ARQuickLookWebKitItemDelegate>)delegate;
-(void)setDelegate:(id<ARQuickLookWebKitItemDelegate>)arg1 ;
-(id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5 ;
-(void)setAdditionalParameters:(NSDictionary *)arg1 ;
-(void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(ARQuickLookPreviewItem *)previewItem;
-(void)setPreviewItem:(ARQuickLookPreviewItem *)arg1 ;
-(id)previewOptions;
-(NSDictionary *)additionalParameters;
-(id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4 ;
@end

