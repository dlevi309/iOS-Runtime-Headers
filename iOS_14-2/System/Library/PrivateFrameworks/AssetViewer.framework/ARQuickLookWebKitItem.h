/*
* Generated on Thursday, January 14, 2021 at 2:27:16 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithPreviewItemProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 fileSize:(id)arg4 previewItem:(id)arg5 ;
-(void)setDelegate:(id<ARQuickLookWebKitItemDelegate>)arg1 ;
-(void)setPreviewItem:(ARQuickLookPreviewItem *)arg1 ;
-(ARQuickLookPreviewItem *)previewItem;
-(id)previewOptions;
-(void)handleMessageFromCustomExtension:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)setAdditionalParameters:(NSDictionary *)arg1 ;
-(NSDictionary *)additionalParameters;
-(id)initWithDataProvider:(id)arg1 contentType:(id)arg2 previewTitle:(id)arg3 previewItem:(id)arg4 ;
@end

