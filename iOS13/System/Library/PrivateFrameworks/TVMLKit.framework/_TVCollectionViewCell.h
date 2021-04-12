/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <TVMLKit/TVContainerCollectionViewCell.h>
#import <TVMLKit/TVAuxiliaryViewSelecting.h>

@protocol TVAuxiliaryViewSelecting;
@class UIView, NSString;

@interface _TVCollectionViewCell : TVContainerCollectionViewCell <TVAuxiliaryViewSelecting> {

	UIView*<TVAuxiliaryViewSelecting> _selectingView;

}

@property (assign,nonatomic,__weak) UIView*<TVAuxiliaryViewSelecting> selectingView;              //@synthesize selectingView=_selectingView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)layoutSubviews;
-(UIEdgeInsets)selectionMarginsForSize:(CGSize)arg1 ;
-(UIView*<TVAuxiliaryViewSelecting>)selectingView;
-(void)setSelectingView:(UIView*<TVAuxiliaryViewSelecting>)arg1 ;
@end

