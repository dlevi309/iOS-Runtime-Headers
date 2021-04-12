/*
* Generated on Monday, March 1, 2021 at 2:35:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@protocol RBStroke <NSObject>
@property (nonatomic,readonly) int strokeType; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@required
-(CGRect)boundingRect;
-(float)borderWidth;
-(int)strokeType;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2;

@end

