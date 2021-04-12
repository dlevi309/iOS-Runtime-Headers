/*
* Generated on Thursday, January 14, 2021 at 2:22:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <PhotosUI/PhotosUI-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class UIView, UIActivityIndicatorView;

@interface PUImportOneUpCellBadgeView : UICollectionReusableView {

	BOOL _selectable;
	BOOL _inUpdateBlock;
	BOOL _needsBadgeUpdate;
	long long _badgeType;
	UIView* _badgeContainerView;
	UIView* _badgeView;
	UIActivityIndicatorView* _spinner;

}

@property (nonatomic,retain) UIView * badgeContainerView;                    //@synthesize badgeContainerView=_badgeContainerView - In the implementation block
@property (nonatomic,retain) UIView * badgeView;                             //@synthesize badgeView=_badgeView - In the implementation block
@property (nonatomic,retain) UIActivityIndicatorView * spinner;              //@synthesize spinner=_spinner - In the implementation block
@property (assign,nonatomic) BOOL inUpdateBlock;                             //@synthesize inUpdateBlock=_inUpdateBlock - In the implementation block
@property (assign,nonatomic) BOOL needsBadgeUpdate;                          //@synthesize needsBadgeUpdate=_needsBadgeUpdate - In the implementation block
@property (assign,nonatomic) long long badgeType;                            //@synthesize badgeType=_badgeType - In the implementation block
@property (assign,nonatomic) BOOL selectable;                                //@synthesize selectable=_selectable - In the implementation block
-(UIView *)badgeView;
-(CGSize)intrinsicContentSize;
-(id)initWithFrame:(CGRect)arg1 ;
-(UIActivityIndicatorView *)spinner;
-(void)setBadgeView:(UIView *)arg1 ;
-(UIView *)badgeContainerView;
-(void)prepareForReuse;
-(long long)badgeType;
-(void)layoutSubviews;
-(void)setSelectable:(BOOL)arg1 ;
-(void)setBadgeType:(long long)arg1 ;
-(void)updateBadgeUIIfNeeded;
-(void)setBadgeContainerView:(UIView *)arg1 ;
-(BOOL)needsBadgeUpdate;
-(void)setNeedsBadgeUpdate:(BOOL)arg1 ;
-(void)setNeedsBadgeUpdate;
-(void)performBadgeUpdates:(/*^block*/id)arg1 ;
-(void)_createSpinnerIfNecessary;
-(BOOL)inUpdateBlock;
-(void)setInUpdateBlock:(BOOL)arg1 ;
-(BOOL)selectable;
-(void)setSpinner:(UIActivityIndicatorView *)arg1 ;
@end

