/*
* Generated on Thursday, January 14, 2021 at 2:20:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIView.h>

@class NSArray, _UIFocusGroupMap;

@interface _UIFocusLinearMovementDebugView : UIView {

	NSArray* _items;
	_UIFocusGroupMap* _focusGroupMap;
	BOOL _colorCoding;

}
-(id)init;
-(void)drawRect:(CGRect)arg1 ;
-(id)_drawableItems;
-(id)_itemFramesFromItems:(id)arg1 ;
-(id)_lineSegmentsFromFrames:(id)arg1 ;
-(id)initWithItems:(id)arg1 focusGroupMap:(id)arg2 ;
@end

