/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIViewController.h>

@class UITargetedPreview;

@interface _UIContextMenuActionsOnlyViewController : UIViewController {

	UITargetedPreview* _sourcePreview;

}

@property (nonatomic,retain) UITargetedPreview * sourcePreview;              //@synthesize sourcePreview=_sourcePreview - In the implementation block
-(id)initWithTargetedPreview:(id)arg1 ;
-(CGSize)preferredContentSize;
-(BOOL)_canShowWhileLocked;
-(void)viewDidLoad;
-(UITargetedPreview *)sourcePreview;
-(void)setSourcePreview:(UITargetedPreview *)arg1 ;
@end

