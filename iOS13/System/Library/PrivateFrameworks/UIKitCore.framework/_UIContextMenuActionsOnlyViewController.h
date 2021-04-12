/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UITargetedPreview;

@interface _UIContextMenuActionsOnlyViewController : UIViewController {

	UITargetedPreview* _sourcePreview;

}

@property (nonatomic,retain) UITargetedPreview * sourcePreview;              //@synthesize sourcePreview=_sourcePreview - In the implementation block
-(CGSize)preferredContentSize;
-(void)viewDidLoad;
-(BOOL)_canShowWhileLocked;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
-(UITargetedPreview *)sourcePreview;
-(id)initWithTargetedPreview:(id)arg1 ;
@end

