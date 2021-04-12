/*
* Generated on Monday, March 1, 2021 at 2:30:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)traitCollectionDidChange:(id)arg1;
-(void)layoutSubviews;
-(void)drawRect:(CGRect)arg1;
-(void)setExpanded:(BOOL)arg1;
-(BOOL)expanded;
-(void)highlightedIndexUpdated;
-(void)entriesUpdated;
-(void)displayEntriesUpdated;
-(void)sizeUpdated;
-(void)deflectionUpdated;
-(void)deflectionReset:(BOOL)arg1;
-(BOOL)updateSectionForTouch:(id)arg1 withEvent:(id)arg2;
-(void)highlightStyleUpdated;
-(void)indexColorUpdated;
-(long long)_accessibility_indexForEntryAtPoint:(CGPoint)arg1;

@required
-(BOOL)overlay;
-(BOOL)canBecomeFocused;
-(CGSize*)sizeThatFits:(CGSize)arg1;
-(id)initWithView:(id)arg1;
-(UIIndexBarView *)indexBarView;
-(double)minLineHeight;
-(id)displayEntryFromEntry:(id)arg1;
-(void)setIndexBarView:(id)arg1;

@end

