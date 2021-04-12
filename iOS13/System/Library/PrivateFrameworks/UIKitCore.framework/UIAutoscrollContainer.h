/*
* Generated on Monday, March 1, 2021 at 2:30:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@protocol UIAutoscrollContainer
@property (assign,nonatomic) CGPoint autoscrollContentOffset; 
@property (assign,nonatomic) BOOL shouldAutoscroll; 
@optional
-(BOOL)shouldAutoscroll;
-(void)setShouldAutoscroll:(BOOL)arg1;

@required
-(CGRect*)contentFrameForView:(id)arg1;
-(CGPoint)autoscrollContentOffset;
-(void)setAutoscrollContentOffset:(CGPoint)arg1;

@end

