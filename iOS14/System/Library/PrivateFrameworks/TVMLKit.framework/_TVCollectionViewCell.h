/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

