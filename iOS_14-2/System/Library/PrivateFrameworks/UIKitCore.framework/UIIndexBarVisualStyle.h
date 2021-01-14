/*
* Generated on Thursday, January 14, 2021 at 2:20:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

@class UIIndexBarView;


@protocol UIIndexBarVisualStyle <NSObject>
@property (assign,nonatomic,__weak) UIIndexBarView * indexBarView; 
@property (nonatomic,readonly) BOOL canBecomeFocused; 
@property (nonatomic,readonly) BOOL overlay; 
@property (nonatomic,readonly) double minLineHeight; 
@property (assign,nonatomic) BOOL expanded; 
@optional
-(void)setExpanded:(BOOL)arg1;
-(void)indexColorUpdated;
-(BOOL)expanded;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
-(void)drawRect:(CGRect)arg1;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)layoutSubviews;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1;
-(void)traitCollectionDidChange:(id)arg1;
-(void)highlightedIndexUpdated;
-(void)entriesUpdated;
-(void)deflectionUpdated;
-(void)deflectionReset:(BOOL)arg1;
-(void)highlightStyleUpdated;

@required
-(BOOL)canBecomeFocused;
-(double)minLineHeight;
-(BOOL)overlay;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(UIIndexBarView *)indexBarView;
-(id)initWithView:(id)arg1;
-(void)setIndexBarView:(id)arg1;
-(id)displayEntryFromEntry:(id)arg1;

@end

