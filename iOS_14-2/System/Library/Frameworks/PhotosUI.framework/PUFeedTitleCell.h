/*
* Generated on Thursday, January 14, 2021 at 2:22:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <PhotosUI/PUFeedCell.h>

@class PXFeedSectionInfo, PXSharedAlbumHeaderView;

@interface PUFeedTitleCell : PUFeedCell {

	long long _collectionViewType;
	unsigned long long _tappableArea;
	PXFeedSectionInfo* _sectionInfo;
	PXSharedAlbumHeaderView* _headerView;
	UIEdgeInsets _contentInsets;

}

@property (nonatomic,readonly) PXSharedAlbumHeaderView * headerView;              //@synthesize headerView=_headerView - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInsets;                          //@synthesize contentInsets=_contentInsets - In the implementation block
@property (assign,nonatomic) long long collectionViewType;                        //@synthesize collectionViewType=_collectionViewType - In the implementation block
@property (assign,nonatomic) unsigned long long tappableArea;                     //@synthesize tappableArea=_tappableArea - In the implementation block
@property (nonatomic,retain) PXFeedSectionInfo * sectionInfo;                     //@synthesize sectionInfo=_sectionInfo - In the implementation block
-(void)setContentInsets:(UIEdgeInsets)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIEdgeInsets)contentInsets;
-(void)prepareForReuse;
-(void)_handleTap:(id)arg1 ;
-(void)layoutSubviews;
-(PXFeedSectionInfo *)sectionInfo;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setSectionInfo:(PXFeedSectionInfo *)arg1 ;
-(CGSize)_performLayoutInRect:(CGRect)arg1 updateSubviewFrames:(BOOL)arg2 ;
-(PXSharedAlbumHeaderView *)headerView;
-(unsigned long long)tappableArea;
-(void)setTappableArea:(unsigned long long)arg1 ;
-(void)setCollectionViewType:(long long)arg1 ;
-(void)_updateHeaderTextColorStyle;
-(long long)collectionViewType;
@end

