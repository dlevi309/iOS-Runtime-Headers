/*
* Generated on Thursday, January 14, 2021 at 2:20:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


#import <UIKitCore/UIKitCore-Structs.h>
@class UIImage, _UIFocusMapSnapshot, _UIFocusMapSearchInfo;

@interface _UIFocusMapSnapshotDebugInfo : NSObject {

	UIImage* _image;
	_UIFocusMapSnapshot* _snapshot;
	_UIFocusMapSearchInfo* _focusMapSearchInfo;
	CGPoint _imageAnchorPoint;

}

@property (nonatomic,readonly) _UIFocusMapSnapshot * snapshot;                                 //@synthesize snapshot=_snapshot - In the implementation block
@property (nonatomic,__weak,readonly) _UIFocusMapSearchInfo * focusMapSearchInfo;              //@synthesize focusMapSearchInfo=_focusMapSearchInfo - In the implementation block
@property (nonatomic,readonly) UIImage * image;                                                //@synthesize image=_image - In the implementation block
@property (nonatomic,readonly) CGPoint imageAnchorPoint;                                       //@synthesize imageAnchorPoint=_imageAnchorPoint - In the implementation block
+(id)_summaryImageForDebugInfoArray:(id)arg1 forFocusMovementWithInfo:(id)arg2 scaleFactor:(double)arg3 ;
-(_UIFocusMapSnapshot *)snapshot;
-(UIImage *)image;
-(id)_drawImage;
-(CGRect)_rectContainingAllFocusRegions;
-(CGPoint)imageAnchorPoint;
-(id)initWithSnapshot:(id)arg1 focusMapSearchInfo:(id)arg2 ;
-(_UIFocusMapSearchInfo *)focusMapSearchInfo;
@end

