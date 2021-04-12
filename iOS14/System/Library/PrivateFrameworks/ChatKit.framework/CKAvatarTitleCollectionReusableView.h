/*
* Generated on Thursday, January 14, 2021 at 2:21:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ChatKit.framework/ChatKit
*/

#import <ChatKit/ChatKit-Structs.h>
#import <UIKitCore/UICollectionReusableView.h>

@class CKLabel, UIImageView, NSMutableArray;

@interface CKAvatarTitleCollectionReusableView : UICollectionReusableView {

	BOOL _chevronHidden;
	BOOL _avatarPickerActive;
	CKLabel* _titleLabel;
	long long _style;
	long long _avatarTitleAccessoryImageType;
	long long _statusIndicatorType;
	UIImageView* _chevronImageView;
	UIImageView* _statusIndicatorImageView;
	NSMutableArray* _pendingTitles;

}

@property (nonatomic,retain) CKLabel * titleLabel;                                             //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UIImageView * chevronImageView;                                   //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) UIImageView * statusIndicatorImageView;                           //@synthesize statusIndicatorImageView=_statusIndicatorImageView - In the implementation block
@property (nonatomic,retain) NSMutableArray * pendingTitles;                                   //@synthesize pendingTitles=_pendingTitles - In the implementation block
@property (assign,nonatomic) long long style;                                                  //@synthesize style=_style - In the implementation block
@property (assign,nonatomic) long long avatarTitleAccessoryImageType;                          //@synthesize avatarTitleAccessoryImageType=_avatarTitleAccessoryImageType - In the implementation block
@property (assign,getter=isAvatarPickerActive,nonatomic) BOOL avatarPickerActive;              //@synthesize avatarPickerActive=_avatarPickerActive - In the implementation block
@property (assign,nonatomic) long long statusIndicatorType;                                    //@synthesize statusIndicatorType=_statusIndicatorType - In the implementation block
@property (assign,getter=isChevronHidden,nonatomic) BOOL chevronHidden;                        //@synthesize chevronHidden=_chevronHidden - In the implementation block
+(id)supplementaryViewKind;
+(id)reuseIdentifier;
-(CKLabel *)titleLabel;
-(void)setTitleLabel:(CKLabel *)arg1 ;
-(BOOL)isLTR;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setAvatarPickerActive:(BOOL)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setAvatarTitleAccessoryImageType:(long long)arg1 ;
-(void)setStatusIndicatorType:(long long)arg1 ;
-(void)setStyle:(long long)arg1 ;
-(UIImageView *)chevronImageView;
-(long long)style;
-(NSMutableArray *)pendingTitles;
-(void)setChevronImageView:(UIImageView *)arg1 ;
-(BOOL)isAvatarPickerActive;
-(void)_rotateChevronImageView;
-(UIImageView *)statusIndicatorImageView;
-(void)setStatusIndicatorImageView:(UIImageView *)arg1 ;
-(void)setPendingTitles:(NSMutableArray *)arg1 ;
-(void)_animateFromQueue;
-(BOOL)isChevronHidden;
-(void)setChevronHidden:(BOOL)arg1 ;
-(void)setTitle:(id)arg1 animated:(BOOL)arg2 ;
-(void)configureWithTitle:(id)arg1 ;
-(long long)avatarTitleAccessoryImageType;
-(long long)statusIndicatorType;
@end

