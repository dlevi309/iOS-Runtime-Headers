/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(long long)cellState;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setSelected:(BOOL)arg1 ;
-(SKUIDownloadsCellView *)cellView;
-(void)setCellState:(long long)arg1 ;
-(void)_reloadEditState;
@end

