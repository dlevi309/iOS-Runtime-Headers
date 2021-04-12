/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIScrollView;


@protocol UIScrollAccessory
@property (assign,nonatomic,__weak) UIScrollView * scrollView; 
@property (assign,nonatomic) long long edge; 
@property (nonatomic,readonly) BOOL overlay; 
@required
-(BOOL)overlay;
-(void)update;
-(UIScrollView *)scrollView;
-(void)setScrollView:(id)arg1;
-(void)setEdge:(long long)arg1;
-(long long)edge;

@end

