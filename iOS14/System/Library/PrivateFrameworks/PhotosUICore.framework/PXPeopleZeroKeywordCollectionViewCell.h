/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXSearchZeroKeywordCollectionViewCell.h>

@class UIView;

@interface PXPeopleZeroKeywordCollectionViewCell : PXSearchZeroKeywordCollectionViewCell {

	UIView* _peopleContentView;

}

@property (nonatomic,retain) UIView * peopleContentView;              //@synthesize peopleContentView=_peopleContentView - In the implementation block
+(id)reuseIdentifier;
-(void)setThumbnailSize:(CGSize)arg1 ;
-(void)prepareForReuse;
-(void)layoutSubviews;
-(void)setPeopleContentView:(UIView *)arg1 ;
-(UIView *)peopleContentView;
-(void)setPeople:(id)arg1 withThumbnailSize:(CGSize)arg2 ;
@end

