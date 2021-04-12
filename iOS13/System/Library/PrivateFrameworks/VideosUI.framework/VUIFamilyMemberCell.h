/*
* Generated on Monday, March 1, 2021 at 2:35:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIListCollectionViewCell.h>
#import <libobjc.A.dylib/VUIFamilyMemberDelegate.h>

@class VUIFamilyMember, VUILabel, TVImageLayout, _TVMonogramView, _TVImageView, VUIImageView, VUISeparatorView, NSString;

@interface VUIFamilyMemberCell : VUIListCollectionViewCell <VUIFamilyMemberDelegate> {

	VUIFamilyMember* _familyMember;
	VUILabel* _nameLabel;
	TVImageLayout* _monogramImageLayout;
	_TVMonogramView* _monogramView;
	_TVImageView* _familyMemberImageView;
	VUIImageView* _chevronImageView;
	VUISeparatorView* _topSeparatorView;

}

@property (nonatomic,retain) _TVImageView * familyMemberImageView;              //@synthesize familyMemberImageView=_familyMemberImageView - In the implementation block
@property (nonatomic,readonly) CGSize monogramSize; 
@property (nonatomic,retain) VUIImageView * chevronImageView;                   //@synthesize chevronImageView=_chevronImageView - In the implementation block
@property (nonatomic,retain) VUISeparatorView * topSeparatorView;               //@synthesize topSeparatorView=_topSeparatorView - In the implementation block
@property (nonatomic,retain) VUIFamilyMember * familyMember;                    //@synthesize familyMember=_familyMember - In the implementation block
@property (nonatomic,retain) VUILabel * nameLabel;                              //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) TVImageLayout * monogramImageLayout;               //@synthesize monogramImageLayout=_monogramImageLayout - In the implementation block
@property (nonatomic,retain) _TVMonogramView * monogramView;                    //@synthesize monogramView=_monogramView - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_monogramViewForFamilyMemberCell:(id)arg1 ;
+(double)monogramHeight;
+(void)configureVUIFamilyMemberCell:(id)arg1 withFamilyMember:(id)arg2 metricsOnly:(BOOL)arg3 ;
-(void)prepareForReuse;
-(id)initWithFrame:(CGRect)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setNameLabel:(VUILabel *)arg1 ;
-(VUILabel *)nameLabel;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(VUISeparatorView *)topSeparatorView;
-(VUIImageView *)chevronImageView;
-(void)setChevronImageView:(VUIImageView *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(_TVMonogramView *)monogramView;
-(void)setMonogramView:(_TVMonogramView *)arg1 ;
-(TVImageLayout *)monogramImageLayout;
-(void)setMonogramImageLayout:(TVImageLayout *)arg1 ;
-(void)setFamilyMemberImageView:(_TVImageView *)arg1 ;
-(CGSize)_iOS_layoutSubviewsWithSize:(CGSize)arg1 computationOnly:(BOOL)arg2 ;
-(void)familyMember:(id)arg1 photoRequestDidCompleteWithImage:(id)arg2 ;
-(CGSize)monogramSize;
-(_TVImageView *)familyMemberImageView;
@end

