/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setAutoscrollContentOffset:(CGPoint)arg1;
-(CGPoint)autoscrollContentOffset;

@end

