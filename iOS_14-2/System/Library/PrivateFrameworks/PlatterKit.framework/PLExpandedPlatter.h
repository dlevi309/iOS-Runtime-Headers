/*
* Generated on Thursday, January 14, 2021 at 2:28:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setInterfaceActions:(id)arg1;
-(NSArray *)interfaceActions;
-(double)contentBottomInset;
-(UIScrollView *)scrollView;
-(void)setCustomContentSize:(CGSize)arg1;
-(CGSize)customContentSize;
-(BOOL)clipsVisibleContentToBounds;
-(CGSize*)sizeExcludingActions;
-(CGSize*)contentSizeExcludingActions;
-(CGSize*)actionsSizeThatFits:(CGSize)arg1;
-(CGRect*)frameForPlatterFrame:(CGRect)arg1;
-(CGRect*)platterFrameForFrame:(CGRect)arg1;
-(CGRect*)scrollViewFrame;
-(UIEdgeInsets*)minimumScrollViewContentInsets;
-(BOOL)isActionsHidden;
-(void)setActionsHidden:(BOOL)arg1;
-(UIControl *)dismissControl;
-(UIEdgeInsets)dismissControlInsets;
-(long long)dismissControlPosition;
-(void)setDismissControlPosition:(long long)arg1;
-(void)setClipsVisibleContentToBounds:(BOOL)arg1;
-(void)setContentBottomInset:(double)arg1;

@end

