/*
* Generated on Thursday, January 14, 2021 at 2:20:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UITableViewCell.h>
#import <UIKit/UICollectionViewTableAllRowAttributes.h>

@class UIColor, UIVisualEffect;

@interface UITableViewCollectionCell : UITableViewCell <UICollectionViewTableAllRowAttributes>

@property (nonatomic,copy) UIColor * backgroundColor; 
@property (assign,nonatomic) long long separatorStyle; 
@property (assign,nonatomic) UIEdgeInsets separatorInset; 
@property (assign,nonatomic) BOOL separatorInsetIsRelativeToCellEdges; 
@property (nonatomic,copy) UIColor * separatorColor; 
@property (nonatomic,retain) UIVisualEffect * separatorEffect; 
@property (assign,nonatomic) int sectionLocation; 
@property (assign,nonatomic) BOOL layoutMarginsFollowReadableWidth; 
@property (assign,nonatomic) BOOL insetsContentViewsToSafeArea; 
@property (assign,nonatomic) double defaultLeadingCellMarginWidth; 
@property (assign,nonatomic) double defaultTrailingCellMarginWidth; 
@property (assign,nonatomic) double indexBarExtentFromEdge; 
@property (assign,nonatomic) UIEdgeInsets backgroundInset; 
@property (assign,nonatomic) long long indentationLevel; 
@property (assign,nonatomic) BOOL drawsSeparatorAtTopOfSection; 
@property (assign,nonatomic) BOOL drawsSeparatorAtBottomOfSection; 
@property (assign,nonatomic) long long accessoryType; 
@property (assign,nonatomic) long long editingStyle; 
@property (assign,nonatomic) BOOL shouldIndentWhileEditing; 
@property (assign,nonatomic) BOOL showsReorderControl; 
-(double)indexBarExtentFromEdge;
-(BOOL)drawsSeparatorAtBottomOfSection;
-(void)setDefaultLeadingCellMarginWidth:(double)arg1 ;
-(void)setSeparatorEffect:(UIVisualEffect *)arg1 ;
-(void)setIndexBarExtentFromEdge:(double)arg1 ;
-(BOOL)separatorInsetIsRelativeToCellEdges;
-(UIVisualEffect *)separatorEffect;
-(void)setSeparatorInsetIsRelativeToCellEdges:(BOOL)arg1 ;
-(BOOL)insetsContentViewsToSafeArea;
-(void)setInsetsContentViewsToSafeArea:(BOOL)arg1 ;
-(double)defaultTrailingCellMarginWidth;
-(void)setDrawsSeparatorAtBottomOfSection:(BOOL)arg1 ;
-(void)setDrawsSeparatorAtTopOfSection:(BOOL)arg1 ;
-(double)defaultLeadingCellMarginWidth;
-(UIEdgeInsets)backgroundInset;
-(BOOL)drawsSeparatorAtTopOfSection;
-(void)setBackgroundInset:(UIEdgeInsets)arg1 ;
-(void)setDefaultTrailingCellMarginWidth:(double)arg1 ;
@end

