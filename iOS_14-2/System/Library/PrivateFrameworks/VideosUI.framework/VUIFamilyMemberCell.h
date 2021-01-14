/*
* Generated on Thursday, January 14, 2021 at 2:24:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithFrame:(CGRect)arg1 ;
-(void)prepareForReuse;
-(VUIFamilyMember *)familyMember;
-(void)setFamilyMember:(VUIFamilyMember *)arg1 ;
-(void)setTopSeparatorView:(VUISeparatorView *)arg1 ;
-(void)layoutSubviews;
-(VUISeparatorView *)topSeparatorView;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(VUILabel *)nameLabel;
-(VUIImageView *)chevronImageView;
-(void)setNameLabel:(VUILabel *)arg1 ;
-(void)setChevronImageView:(VUIImageView *)arg1 ;
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

