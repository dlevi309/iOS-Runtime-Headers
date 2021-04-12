/*
* Generated on Thursday, January 14, 2021 at 2:22:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/


#import <PhotosUI/PhotosUI-Structs.h>
@class NSString, PUPhotoDecoration;

@interface PUAlbumListCellContentViewHelperConfiguration : NSObject {

	BOOL _allowsEmailInSubtitle;
	BOOL _showsDeleteButtonOnCellContentView;
	BOOL _hasRoundedCorners;
	BOOL _shouldUseTableView;
	long long _cellContentViewLayout;
	unsigned long long _stackViewStyle;
	unsigned long long _folderStackViewStyle;
	long long _imageContentMode;
	NSString* _albumSubtitleFormat;
	NSString* _nameOfEmptyAlbumPlaceholderImage;
	NSString* _nameOfEmptySharedAlbumPlaceholderImage;
	NSString* _nameOfAddSharedAlbumPlaceholderImage;
	NSString* _nameOfHiddenAlbumPlaceholderImage;
	NSString* _nameOfRecentlyDeletedAlbumPlaceholderImage;
	PUPhotoDecoration* _photoDecoration;
	double _gridMargin;
	double _gridItemSpacing;
	double _posterSquareCornerRadius;
	double _posterSubitemCornerRadius;
	double _dynamicTitleLeading;
	double _dynamicSubtitleleading;
	double _dynamicTopLeading;
	CGSize _stackSize;
	CGSize _pixelSize;
	UIOffset _stackOffset;
	UIOffset _stackPerspectiveOffset;
	UIEdgeInsets _stackPerspectiveInsets;

}

@property (assign,nonatomic) BOOL allowsEmailInSubtitle;                                       //@synthesize allowsEmailInSubtitle=_allowsEmailInSubtitle - In the implementation block
@property (assign,nonatomic) BOOL showsDeleteButtonOnCellContentView;                          //@synthesize showsDeleteButtonOnCellContentView=_showsDeleteButtonOnCellContentView - In the implementation block
@property (assign,nonatomic) BOOL hasRoundedCorners;                                           //@synthesize hasRoundedCorners=_hasRoundedCorners - In the implementation block
@property (assign,nonatomic) BOOL shouldUseTableView;                                          //@synthesize shouldUseTableView=_shouldUseTableView - In the implementation block
@property (assign,nonatomic) long long cellContentViewLayout;                                  //@synthesize cellContentViewLayout=_cellContentViewLayout - In the implementation block
@property (assign,nonatomic) unsigned long long stackViewStyle;                                //@synthesize stackViewStyle=_stackViewStyle - In the implementation block
@property (assign,nonatomic) unsigned long long folderStackViewStyle;                          //@synthesize folderStackViewStyle=_folderStackViewStyle - In the implementation block
@property (assign,nonatomic) long long imageContentMode;                                       //@synthesize imageContentMode=_imageContentMode - In the implementation block
@property (nonatomic,copy) NSString * albumSubtitleFormat;                                     //@synthesize albumSubtitleFormat=_albumSubtitleFormat - In the implementation block
@property (nonatomic,copy) NSString * nameOfEmptyAlbumPlaceholderImage;                        //@synthesize nameOfEmptyAlbumPlaceholderImage=_nameOfEmptyAlbumPlaceholderImage - In the implementation block
@property (nonatomic,copy) NSString * nameOfEmptySharedAlbumPlaceholderImage;                  //@synthesize nameOfEmptySharedAlbumPlaceholderImage=_nameOfEmptySharedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,copy) NSString * nameOfAddSharedAlbumPlaceholderImage;                    //@synthesize nameOfAddSharedAlbumPlaceholderImage=_nameOfAddSharedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,copy) NSString * nameOfHiddenAlbumPlaceholderImage;                       //@synthesize nameOfHiddenAlbumPlaceholderImage=_nameOfHiddenAlbumPlaceholderImage - In the implementation block
@property (nonatomic,copy) NSString * nameOfRecentlyDeletedAlbumPlaceholderImage;              //@synthesize nameOfRecentlyDeletedAlbumPlaceholderImage=_nameOfRecentlyDeletedAlbumPlaceholderImage - In the implementation block
@property (nonatomic,retain) PUPhotoDecoration * photoDecoration;                              //@synthesize photoDecoration=_photoDecoration - In the implementation block
@property (assign,nonatomic) CGSize stackSize;                                                 //@synthesize stackSize=_stackSize - In the implementation block
@property (assign,nonatomic) CGSize pixelSize;                                                 //@synthesize pixelSize=_pixelSize - In the implementation block
@property (assign,nonatomic) UIOffset stackOffset;                                             //@synthesize stackOffset=_stackOffset - In the implementation block
@property (assign,nonatomic) UIOffset stackPerspectiveOffset;                                  //@synthesize stackPerspectiveOffset=_stackPerspectiveOffset - In the implementation block
@property (assign,nonatomic) UIEdgeInsets stackPerspectiveInsets;                              //@synthesize stackPerspectiveInsets=_stackPerspectiveInsets - In the implementation block
@property (assign,nonatomic) double gridMargin;                                                //@synthesize gridMargin=_gridMargin - In the implementation block
@property (assign,nonatomic) double gridItemSpacing;                                           //@synthesize gridItemSpacing=_gridItemSpacing - In the implementation block
@property (assign,nonatomic) double posterSquareCornerRadius;                                  //@synthesize posterSquareCornerRadius=_posterSquareCornerRadius - In the implementation block
@property (assign,nonatomic) double posterSubitemCornerRadius;                                 //@synthesize posterSubitemCornerRadius=_posterSubitemCornerRadius - In the implementation block
@property (assign,nonatomic) double dynamicTitleLeading;                                       //@synthesize dynamicTitleLeading=_dynamicTitleLeading - In the implementation block
@property (assign,nonatomic) double dynamicSubtitleleading;                                    //@synthesize dynamicSubtitleleading=_dynamicSubtitleleading - In the implementation block
@property (assign,nonatomic) double dynamicTopLeading;                                         //@synthesize dynamicTopLeading=_dynamicTopLeading - In the implementation block
+(id)defaultConfiguration;
-(void)setGridMargin:(double)arg1 ;
-(CGSize)stackSize;
-(BOOL)hasRoundedCorners;
-(UIEdgeInsets)stackPerspectiveInsets;
-(double)posterSquareCornerRadius;
-(double)gridMargin;
-(void)setStackPerspectiveInsets:(UIEdgeInsets)arg1 ;
-(UIOffset)stackPerspectiveOffset;
-(UIOffset)stackOffset;
-(void)setStackPerspectiveOffset:(UIOffset)arg1 ;
-(PUPhotoDecoration *)photoDecoration;
-(void)setNameOfAddSharedAlbumPlaceholderImage:(NSString *)arg1 ;
-(void)setPhotoDecoration:(PUPhotoDecoration *)arg1 ;
-(double)dynamicTitleLeading;
-(void)setGridItemSpacing:(double)arg1 ;
-(void)setNameOfEmptyAlbumPlaceholderImage:(NSString *)arg1 ;
-(void)setAlbumSubtitleFormat:(NSString *)arg1 ;
-(void)setDynamicSubtitleleading:(double)arg1 ;
-(void)setDynamicTopLeading:(double)arg1 ;
-(void)setImageContentMode:(long long)arg1 ;
-(long long)imageContentMode;
-(NSString *)nameOfAddSharedAlbumPlaceholderImage;
-(void)setPosterSquareCornerRadius:(double)arg1 ;
-(BOOL)showsDeleteButtonOnCellContentView;
-(NSString *)nameOfHiddenAlbumPlaceholderImage;
-(void)setPixelSize:(CGSize)arg1 ;
-(NSString *)albumSubtitleFormat;
-(double)posterSubitemCornerRadius;
-(double)gridItemSpacing;
-(void)setAllowsEmailInSubtitle:(BOOL)arg1 ;
-(NSString *)nameOfRecentlyDeletedAlbumPlaceholderImage;
-(void)setDynamicTitleLeading:(double)arg1 ;
-(void)setStackViewStyle:(unsigned long long)arg1 ;
-(void)setShouldUseTableView:(BOOL)arg1 ;
-(void)setNameOfRecentlyDeletedAlbumPlaceholderImage:(NSString *)arg1 ;
-(unsigned long long)folderStackViewStyle;
-(void)setShowsDeleteButtonOnCellContentView:(BOOL)arg1 ;
-(double)dynamicTopLeading;
-(void)setCellContentViewLayout:(long long)arg1 ;
-(double)dynamicSubtitleleading;
-(void)setFolderStackViewStyle:(unsigned long long)arg1 ;
-(BOOL)shouldUseTableView;
-(void)setStackSize:(CGSize)arg1 ;
-(void)configureWithSpec:(id)arg1 ;
-(BOOL)allowsEmailInSubtitle;
-(void)setHasRoundedCorners:(BOOL)arg1 ;
-(NSString *)nameOfEmptyAlbumPlaceholderImage;
-(void)setStackOffset:(UIOffset)arg1 ;
-(unsigned long long)stackViewStyle;
-(CGSize)pixelSize;
-(void)setPosterSubitemCornerRadius:(double)arg1 ;
-(void)setNameOfHiddenAlbumPlaceholderImage:(NSString *)arg1 ;
-(NSString *)nameOfEmptySharedAlbumPlaceholderImage;
-(void)setNameOfEmptySharedAlbumPlaceholderImage:(NSString *)arg1 ;
-(long long)cellContentViewLayout;
@end

