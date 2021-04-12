/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/QuickLook.framework/QuickLook
*/

#import <QuickLook/QLItemViewController.h>

@class NSError, QLItem;

@interface QLErrorItemViewController : QLItemViewController {

	NSError* _error;
	QLItem* _previewItem;

}

@property (retain) QLItem * previewItem;                   //@synthesize previewItem=_previewItem - In the implementation block
@property (nonatomic,retain) NSError * error;              //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(void)loadView;
-(BOOL)canSwipeToDismiss;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(QLItem *)previewItem;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(id)errorView;
-(void)_updateLabelsWithCurrentErrorIfNeeded;
@end

