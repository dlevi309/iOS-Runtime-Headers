/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPDragItem.h>

@interface TSWPURLDragItem : TSWPDragItem {

	CGPoint _canvasDragPoint;
	NSRange _range;

}

@property (nonatomic,readonly) CGPoint canvasDragPoint;              //@synthesize canvasDragPoint=_canvasDragPoint - In the implementation block
@property (nonatomic,readonly) NSRange range;                        //@synthesize range=_range - In the implementation block
-(NSRange)range;
-(id)initWithDragPreview:(id)arg1 canvasRect:(CGRect)arg2 canvasDragPoint:(CGPoint)arg3 range:(NSRange)arg4 ;
-(id)retargetedDragPreviewForDefaultTargetedDragPreview:(id)arg1 icc:(id)arg2 canvasView:(id)arg3 boundsRect:(CGRect)arg4 ;
-(CGPoint)canvasDragPoint;
@end

