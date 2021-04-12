/*
* Generated on Thursday, January 14, 2021 at 2:22:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <UIKitCore/UICollectionViewCell.h>

@class NSArray, PXRoundedCornerOverlayView;

@interface PXPeopleStripCollectionViewCell : UICollectionViewCell {

	NSArray* _people;
	NSArray* _groupAvatarViews;
	PXRoundedCornerOverlayView* _roundCornerOverlay;

}

@property (nonatomic,retain) NSArray * groupAvatarViews;                                   //@synthesize groupAvatarViews=_groupAvatarViews - In the implementation block
@property (nonatomic,retain) PXRoundedCornerOverlayView * roundCornerOverlay;              //@synthesize roundCornerOverlay=_roundCornerOverlay - In the implementation block
@property (nonatomic,retain) NSArray * people;                                             //@synthesize people=_people - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setPeople:(NSArray *)arg1 ;
-(PXRoundedCornerOverlayView *)roundCornerOverlay;
-(void)setRoundCornerOverlay:(PXRoundedCornerOverlayView *)arg1 ;
-(void)prepareForReuse;
-(NSArray *)people;
-(void)layoutSubviews;
-(void)setGroupAvatarViews:(NSArray *)arg1 ;
-(void)_layoutAvatarViewsInFrame:(CGRect)arg1 ;
-(NSArray *)groupAvatarViews;
@end

