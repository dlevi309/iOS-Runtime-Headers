/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/


@protocol QLPreviewControllerConforming <NSObject>
@property (assign,nonatomic,__weak) id<QLPreviewControllerConformingDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<QLPreviewControllerConformingDelegate> delegate; 
@property (assign) long long currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@required
+(BOOL)canPreviewItem:(id)arg1;
-(id<QLPreviewControllerConformingDelegate>)delegate;
-(id<QLPreviewControllerConformingDataSource>)dataSource;
-(void)setDelegate:(id)arg1;
-(long long)currentPreviewItemIndex;
-(void)setDataSource:(id)arg1;
-(void)reloadData;
-(void)setCurrentPreviewItemIndex:(long long)arg1;
-(void)refreshCurrentPreviewItem;
-(id<QLPreviewItem>)currentPreviewItem;

@end

