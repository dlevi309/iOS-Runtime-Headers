/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class SKUIDownloadsCellView, UIImageView;

@interface SKUIDownloadsCollectionViewCell : UICollectionViewCell {

	SKUIDownloadsCellView* _cellView;
	UIImageView* _editIndicator;
	long long _cellState;

}

@property (nonatomic,readonly) SKUIDownloadsCellView * cellView;              //@synthesize cellView=_cellView - In the implementation block
@property (assign,nonatomic) long long cellState;                             //@synthesize cellState=_cellState - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setSelected:(BOOL)arg1 ;
-(SKUIDownloadsCellView *)cellView;
-(void)layoutSubviews;
-(long long)cellState;
-(void)setCellState:(long long)arg1 ;
-(void)_reloadEditState;
@end

