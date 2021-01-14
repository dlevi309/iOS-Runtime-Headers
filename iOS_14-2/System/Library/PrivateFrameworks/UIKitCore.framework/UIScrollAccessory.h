/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScrollView;


@protocol UIScrollAccessory
@property (assign,nonatomic,__weak) UIScrollView * scrollView; 
@property (assign,nonatomic) long long edge; 
@property (nonatomic,readonly) BOOL overlay; 
@required
-(long long)edge;
-(void)setEdge:(long long)arg1;
-(void)update;
-(BOOL)overlay;
-(void)setScrollView:(id)arg1;
-(UIScrollView *)scrollView;

@end

