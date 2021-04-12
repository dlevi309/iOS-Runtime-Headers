/*
* Generated on Thursday, January 14, 2021 at 2:28:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
*/

@class OKWidgetView;


@protocol OKDynamicItemProxiedObject <NSObject>
@property (nonatomic,readonly) OKWidgetView * parentWidgetView; 
@property (assign,nonatomic) CGPoint center; 
@property (assign,nonatomic) CGRect bounds; 
@property (assign,nonatomic) CGAffineTransform dynamicsTransform; 
@required
-(CGRect)bounds;
-(CGPoint)center;
-(void)setBounds:(CGRect)arg1;
-(void)setCenter:(CGPoint)arg1;
-(OKWidgetView *)parentWidgetView;
-(CGAffineTransform)dynamicsTransform;
-(void)setDynamicsTransform:(CGAffineTransform)arg1;

@end

