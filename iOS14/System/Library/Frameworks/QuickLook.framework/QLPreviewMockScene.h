/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <libobjc.A.dylib/QLPreviewControllerConforming.h>

@protocol QLPreviewControllerConformingDataSource, QLPreviewControllerConformingDelegate;
@class NSString;

@interface QLPreviewMockScene : NSObject <QLPreviewControllerConforming> {

	long long currentPreviewItemIndex;
	id<QLPreviewControllerConformingDataSource> dataSource;
	id<QLPreviewControllerConformingDelegate> delegate;

}

@property (assign,nonatomic,__weak) id<QLPreviewControllerConformingDataSource> dataSource; 
@property (assign,nonatomic,__weak) id<QLPreviewControllerConformingDelegate> delegate; 
@property (assign) long long currentPreviewItemIndex; 
@property (readonly) id<QLPreviewItem> currentPreviewItem; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)requestPreviewMockSceneActivation;
+(BOOL)canPreviewItem:(id)arg1 ;
-(id)init;
-(id<QLPreviewControllerConformingDelegate>)delegate;
-(id<QLPreviewControllerConformingDataSource>)dataSource;
-(void)setDelegate:(id<QLPreviewControllerConformingDelegate>)arg1 ;
-(long long)currentPreviewItemIndex;
-(void)setDataSource:(id<QLPreviewControllerConformingDataSource>)arg1 ;
-(void)reloadData;
-(void)setCurrentPreviewItemIndex:(long long)arg1 ;
-(void)refreshCurrentPreviewItem;
-(id<QLPreviewItem>)currentPreviewItem;
-(void)presentPreview;
-(void)dismissPreview;
@end

