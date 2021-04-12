/*
* Generated on Monday, March 1, 2021 at 2:30:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITextGestureCluster.h>

@class UIPreviewItemController;

@interface UITextGestureClusterPreview : UITextGestureCluster {

	UIPreviewItemController* _previewItemController;
	BOOL _detachOnDealloc;

}
-(void)dealloc;
-(id)initWithView:(id)arg1 ;
-(void)detach;
-(BOOL)doesControlDelegate;
-(void)_resetForLink;
-(BOOL)shouldClusterAllowSelectionGestures:(BOOL)arg1 atPoint:(CGPoint)arg2 toBegin:(BOOL)arg3 ;
@end

