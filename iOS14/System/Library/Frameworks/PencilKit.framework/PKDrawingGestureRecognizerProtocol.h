/*
* Generated on Thursday, January 14, 2021 at 2:24:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PencilKit.framework/PencilKit
*/

@class UITouch;


@protocol PKDrawingGestureRecognizerProtocol <NSObject>
@property (nonatomic,readonly) UITouch * drawingTouch; 
@property (nonatomic,readonly) BOOL isReplaying; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureRecognizerDelegate> delegate; 
@property (assign,nonatomic,__weak) id<PKDrawingGestureTarget> drawingTarget; 
@property (nonatomic,readonly) unsigned long long activeInputProperties; 
@required
-(void)end;
-(id<PKDrawingGestureRecognizerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(void)cancel;
-(id<PKDrawingGestureTarget>)drawingTarget;
-(void)setDrawingTarget:(id)arg1;
-(BOOL)isReplaying;
-(unsigned long long)activeInputProperties;
-(UITouch *)drawingTouch;

@end

