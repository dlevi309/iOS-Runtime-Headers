/*
* Generated on Thursday, January 14, 2021 at 2:24:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setError:(NSError *)arg1 ;
-(NSError *)error;
-(id)errorView;
-(void)setPreviewItem:(QLItem *)arg1 ;
-(void)_updateLabelsWithCurrentErrorIfNeeded;
-(QLItem *)previewItem;
-(void)loadView;
-(void)loadPreviewControllerWithContents:(id)arg1 context:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(BOOL)canPinchToDismiss;
-(BOOL)canEnterFullScreen;
-(BOOL)canSwipeToDismiss;
@end

