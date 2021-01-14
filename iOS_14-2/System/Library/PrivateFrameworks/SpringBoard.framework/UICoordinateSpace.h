/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@protocol UICoordinateSpace <NSObject>
@property (nonatomic,readonly) CGRect bounds; 
@required
-(CGRect)bounds;
-(CGRect*)convertRect:(CGRect)arg1 toCoordinateSpace:(id)arg2;
-(CGRect*)convertRect:(CGRect)arg1 fromCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 toCoordinateSpace:(id)arg2;
-(CGPoint*)convertPoint:(CGPoint)arg1 fromCoordinateSpace:(id)arg2;

@end

