/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@class UITargetedDragPreview;

@interface TSWPDragItem : NSObject {

	UITargetedDragPreview* _targetedDragPreview;
	CGRect _canvasRect;

}

@property (nonatomic,retain,readonly) UITargetedDragPreview * targetedDragPreview;              //@synthesize targetedDragPreview=_targetedDragPreview - In the implementation block
@property (nonatomic,readonly) CGRect canvasRect;                                               //@synthesize canvasRect=_canvasRect - In the implementation block
-(void)dealloc;
-(id)initWithDragPreview:(id)arg1 canvasRect:(CGRect)arg2 ;
-(UITargetedDragPreview *)targetedDragPreview;
-(CGRect)canvasRect;
-(id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(CGRect)arg4 ;
@end

