/*
* Generated on Monday, March 1, 2021 at 2:31:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <QuickLook/QLPreviewController.h>
#import <libobjc.A.dylib/QLPreviewControllerDataSource.h>

@class NSArray;

@interface CKQLPreviewController : QLPreviewController <QLPreviewControllerDataSource> {

	BOOL _controllerWasDismissed;
	BOOL _suppressRefetchingCurrentHighQualityImage;
	NSArray* _previewItems;

}

@property (assign,nonatomic) BOOL controllerWasDismissed;                                 //@synthesize controllerWasDismissed=_controllerWasDismissed - In the implementation block
@property (assign,nonatomic) BOOL suppressRefetchingCurrentHighQualityImage;              //@synthesize suppressRefetchingCurrentHighQualityImage=_suppressRefetchingCurrentHighQualityImage - In the implementation block
@property (nonatomic,copy) NSArray * previewItems;                                        //@synthesize previewItems=_previewItems - In the implementation block
-(id)init;
-(void)setDataSource:(id)arg1 ;
-(void)loadView;
-(void)dismissViewControllerAnimated:(BOOL)arg1 completion:(/*^block*/id)arg2 ;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)viewDidAppear:(BOOL)arg1 ;
-(long long)preferredStatusBarStyle;
-(id)previewActions;
-(long long)numberOfPreviewItemsInPreviewController:(id)arg1 ;
-(id)previewController:(id)arg1 previewItemAtIndex:(long long)arg2 ;
-(id)currentPreviewItem;
-(void)setPreviewItems:(NSArray *)arg1 ;
-(BOOL)controllerWasDismissed;
-(void)setControllerWasDismissed:(BOOL)arg1 ;
-(NSArray *)previewItems;
-(BOOL)suppressRefetchingCurrentHighQualityImage;
-(void)setSuppressRefetchingCurrentHighQualityImage:(BOOL)arg1 ;
@end

