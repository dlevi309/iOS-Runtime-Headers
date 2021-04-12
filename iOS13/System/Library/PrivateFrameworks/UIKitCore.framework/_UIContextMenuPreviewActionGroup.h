/*
* Generated on Monday, March 1, 2021 at 2:30:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/_UIActionGroup.h>

@class UIViewController;

@interface _UIContextMenuPreviewActionGroup : _UIActionGroup {

	UIViewController* _previewViewController;
	/*^block*/id _previewHandler;

}

@property (nonatomic,retain) UIViewController * previewViewController;              //@synthesize previewViewController=_previewViewController - In the implementation block
@property (nonatomic,copy) id previewHandler;                                       //@synthesize previewHandler=_previewHandler - In the implementation block
+(id)groupWithChildren:(id)arg1 previewViewController:(id)arg2 previewHandler:(/*^block*/id)arg3 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(void)setPreviewHandler:(id)arg1 ;
-(UIViewController *)previewViewController;
-(id)previewHandler;
@end

