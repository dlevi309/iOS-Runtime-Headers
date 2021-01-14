/*
* Generated on Thursday, January 14, 2021 at 2:22:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@protocol PXZoomablePhotosContentLayout <NSObject>
@property (assign,nonatomic) long long numberOfColumns; 
@property (assign,nonatomic) UIEdgeInsets padding; 
@property (assign,nonatomic) double interItemSpacing; 
@property (assign,nonatomic) double itemCaptionSpacing; 
@property (assign,nonatomic) BOOL enableBestCropRect; 
@property (assign,nonatomic) unsigned char mediaFlags; 
@property (nonatomic,readonly) long long visualItemShift; 
@property (nonatomic,readonly) double rowHeight; 
@property (assign,nonatomic) BOOL hideIncompleteLastRow; 
@property (assign,nonatomic) BOOL fillSafeAreaTopInset; 
@property (nonatomic,readonly) NSRange loadedItems; 
@property (nonatomic,readonly) CGRect loadedItemsRect; 
@property (nonatomic,readonly) BOOL supportsContentMode; 
@property (nonatomic,readonly) BOOL itemCaptionsVisible; 
@property (nonatomic,retain) id anchorObjectReference; 
@property (assign,nonatomic) CGPoint anchorViewportCenter; 
@property (assign,nonatomic) BOOL loadItemsOutsideAnchorViewport; 
@property (assign,nonatomic) BOOL enableEffects; 
@property (assign,nonatomic) double accessoryAlpha; 
@property (assign,nonatomic) long long contentMode; 
@optional
-(long long)contentMode;
-(void)setContentMode:(long long)arg1;

@required
-(void)setNumberOfColumns:(long long)arg1;
-(double)interItemSpacing;
-(void)setAnchorObjectReference:(id)arg1;
-(NSRange*)itemRangeInRect:(CGRect)arg1;
-(BOOL)supportsContentMode;
-(BOOL)enableBestCropRect;
-(unsigned char)mediaFlags;
-(BOOL)itemCaptionsVisible;
-(double)accessoryAlpha;
-(void)setAnchorViewportCenter:(CGPoint)arg1;
-(long long)visualItemShift;
-(void)setMediaFlags:(unsigned char)arg1;
-(double)itemCaptionSpacing;
-(void)setInterItemSpacing:(double)arg1;
-(BOOL)loadItemsOutsideAnchorViewport;
-(CGRect)loadedItemsRect;
-(CGRect*)frameForItem:(long long)arg1 usingInterItemSpacing:(double)arg2;
-(void)setEnableBestCropRect:(BOOL)arg1;
-(void)setHideIncompleteLastRow:(BOOL)arg1;
-(CGRect*)frameForItem:(long long)arg1;
-(void)setAccessoryAlpha:(double)arg1;
-(BOOL)shiftItem:(long long)arg1 toColumn:(long long)arg2 hideIncompleteRows:(BOOL)arg3;
-(long long)columnForItem:(long long)arg1;
-(id)anchorObjectReference;
-(void)setItemCaptionSpacing:(double)arg1;
-(NSRange)loadedItems;
-(BOOL)hideIncompleteLastRow;
-(CGPoint)anchorViewportCenter;
-(long long)itemClosestTo:(CGPoint)arg1;
-(long long)numberOfColumns;
-(BOOL)enableEffects;
-(double)rowHeight;
-(void)setEnableEffects:(BOOL)arg1;
-(UIEdgeInsets)padding;
-(BOOL)fillSafeAreaTopInset;
-(void)setPadding:(UIEdgeInsets)arg1;
-(void)setFillSafeAreaTopInset:(BOOL)arg1;
-(void)setLoadItemsOutsideAnchorViewport:(BOOL)arg1;

@end

