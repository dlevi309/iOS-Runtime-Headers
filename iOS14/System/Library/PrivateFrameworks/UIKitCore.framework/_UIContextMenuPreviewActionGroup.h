/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setPreviewViewController:(UIViewController *)arg1 ;
-(void)setPreviewHandler:(id)arg1 ;
-(UIViewController *)previewViewController;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)previewHandler;
@end

