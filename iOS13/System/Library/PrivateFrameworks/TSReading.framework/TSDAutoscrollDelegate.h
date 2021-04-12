/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

@class TSDInteractiveCanvasController, TSDAutoscroll;


@protocol TSDAutoscrollDelegate
@property (nonatomic,readonly) TSDInteractiveCanvasController * icc; 
@property (nonatomic,retain) TSDAutoscroll * autoscroll; 
@property (assign,nonatomic) CGPoint autoscrollPoint; 
@optional
-(double)unscaledStartAutoscrollThreshold;
-(int)allowedAutoscrollDirections;
-(unsigned long long)maximumAutoscrollDeltaForCount:(unsigned long long)arg1;
-(BOOL)autoscrollWithDirection:(int)arg1 proposedContentOffset:(CGPoint)arg2 completionBlock:(/*^block*/id)arg3;

@required
-(void)autoscrollWillNotStart;
-(TSDAutoscroll *)autoscroll;
-(void)setAutoscroll:(id)arg1;
-(TSDInteractiveCanvasController *)icc;
-(void)updateAfterAutoscroll:(id)arg1;
-(CGPoint)autoscrollPoint;
-(void)setAutoscrollPoint:(CGPoint)arg1;

@end

