/*
* Generated on Monday, March 1, 2021 at 2:36:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UICoordinateSpace <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(CGRect*)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;
-(CGRect*)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;

@end

