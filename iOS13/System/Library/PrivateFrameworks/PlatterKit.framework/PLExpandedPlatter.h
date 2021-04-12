/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PlatterKit.framework/PlatterKit
*/

@class UIScrollView, NSArray, UIControl;


@protocol PLExpandedPlatter <PLPlatter>
@property (nonatomic,readonly) UIScrollView * scrollView; 
@property (assign,nonatomic) CGSize customContentSize; 
@property (nonatomic,retain) NSArray * interfaceActions; 
@property (assign,getter=isActionsHidden,nonatomic) BOOL actionsHidden; 
@property (nonatomic,readonly) UIControl * dismissControl; 
@property (nonatomic,readonly) UIEdgeInsets dismissControlInsets; 
@property (assign,nonatomic) long long dismissControlPosition; 
@property (assign,nonatomic) BOOL clipsVisibleContentToBounds; 
@property (assign,nonatomic) double contentBottomInset; 
@required
-(double)contentBottomInset;
-(UIScrollView *)scrollView;
-(CGRect*)scrollViewFrame;
-(void)setInterfaceActions:(id)arg1;
-(NSArray *)interfaceActions;
-(UIEdgeInsets)dismissControlInsets;
-(CGSize*)sizeExcludingActions;
-(CGSize*)contentSizeExcludingActions;
-(CGSize*)actionsSizeThatFits:(CGSize)arg1;
-(CGRect*)frameForPlatterFrame:(CGRect)arg1;
-(CGRect*)platterFrameForFrame:(CGRect)arg1;
-(UIEdgeInsets*)minimumScrollViewContentInsets;
-(CGSize)customContentSize;
-(void)setCustomContentSize:(CGSize)arg1;
-(BOOL)isActionsHidden;
-(void)setActionsHidden:(BOOL)arg1;
-(UIControl *)dismissControl;
-(long long)dismissControlPosition;
-(void)setDismissControlPosition:(long long)arg1;
-(BOOL)clipsVisibleContentToBounds;
-(void)setClipsVisibleContentToBounds:(BOOL)arg1;
-(void)setContentBottomInset:(double)arg1;

@end

