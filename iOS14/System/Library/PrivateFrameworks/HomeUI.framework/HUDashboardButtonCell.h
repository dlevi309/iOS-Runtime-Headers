/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <HomeUI/HomeUI-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>
#import <libobjc.A.dylib/HUGridCellProtocol.h>

@class HFItem, HUGridCellLayoutOptions, HFWallpaperSlice, UILabel, UIView, NSString;

@interface HUDashboardButtonCell : UICollectionViewCell <HUGridCellProtocol> {

	BOOL _cellContentsHidden;
	HFItem* _item;
	HUGridCellLayoutOptions* _layoutOptions;
	HFWallpaperSlice* _blurredWallpaperSlice;
	HFWallpaperSlice* _darkModeBlurredWallpaperSlice;
	UILabel* _label;
	UIView* _blurView;
	CGRect _normalizedWallpaperRect;

}

@property (nonatomic,readonly) UILabel * label;                                                              //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * blurView;                                                            //@synthesize blurView=_blurView - In the implementation block
@property (nonatomic,retain) NSString * text; 
@property (assign,nonatomic) CGRect normalizedWallpaperRect;                                                 //@synthesize normalizedWallpaperRect=_normalizedWallpaperRect - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * blurredWallpaperSlice;                                       //@synthesize blurredWallpaperSlice=_blurredWallpaperSlice - In the implementation block
@property (nonatomic,retain) HFWallpaperSlice * darkModeBlurredWallpaperSlice;                               //@synthesize darkModeBlurredWallpaperSlice=_darkModeBlurredWallpaperSlice - In the implementation block
@property (assign,getter=areCellContentsHidden,nonatomic) BOOL cellContentsHidden;                           //@synthesize cellContentsHidden=_cellContentsHidden - In the implementation block
@property (nonatomic,retain) HUGridCellLayoutOptions * layoutOptions;                                        //@synthesize layoutOptions=_layoutOptions - In the implementation block
@property (assign,getter=isRearranging,nonatomic) BOOL rearranging; 
@property (assign,getter=isPointerInteractionEnabled,nonatomic) BOOL pointerInteractionEnabled; 
@property (assign,nonatomic) double pointerRegionMargin; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,retain) HFItem * item;                                                                  //@synthesize item=_item - In the implementation block
@property (assign,nonatomic,__weak) id<HUResizableCellDelegate> resizingDelegate; 
+(Class)layoutOptionsClass;
-(UIView *)blurView;
-(id)initWithFrame:(CGRect)arg1 ;
-(HFWallpaperSlice *)darkModeBlurredWallpaperSlice;
-(HFItem *)item;
-(void)updateUIWithAnimation:(BOOL)arg1 ;
-(HFWallpaperSlice *)blurredWallpaperSlice;
-(void)setBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)setText:(NSString *)arg1 ;
-(void)prepareForReuse;
-(void)setItem:(HFItem *)arg1 ;
-(void)layoutSubviews;
-(void)applyLayoutAttributes:(id)arg1 ;
-(NSString *)text;
-(HUGridCellLayoutOptions *)layoutOptions;
-(void)setDarkModeBlurredWallpaperSlice:(HFWallpaperSlice *)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(UILabel *)label;
-(void)setLayoutOptions:(HUGridCellLayoutOptions *)arg1 ;
-(void)setHighlighted:(BOOL)arg1 ;
-(BOOL)areCellContentsHidden;
-(void)setCellContentsHidden:(BOOL)arg1 ;
-(CGRect)normalizedWallpaperRect;
-(void)setNormalizedWallpaperRect:(CGRect)arg1 ;
-(void)_updateBlurredWallpaperDisplay;
-(void)_updateBlurredWallpaperContentsRect;
-(void)_updateBlurredWallpaperContentsScale;
@end

