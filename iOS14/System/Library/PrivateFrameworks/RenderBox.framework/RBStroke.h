/*
* Generated on Thursday, January 14, 2021 at 2:24:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RenderBox.framework/RenderBox
*/


@protocol RBStroke <NSObject>
@property (nonatomic,readonly) int strokeType; 
@property (nonatomic,readonly) CGRect boundingRect; 
@property (nonatomic,readonly) float borderWidth; 
@required
-(int)strokeType;
-(CGRect)boundingRect;
-(float)borderWidth;
-(void)applyFunction:(/*function pointer*/void*)arg1 info:(void*)arg2;

@end

