/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class NSAttributedString, UILabel, UIView;

@interface PUPhotoOwnerCommentCell : UITableViewCell {

	BOOL _usesCompactSeparators;
	NSAttributedString* _ownerString;
	UILabel* _ownerContentLabel;
	UIView* _styledSeparatorView;

}

@property (nonatomic,copy) NSAttributedString * ownerString;                     //@synthesize ownerString=_ownerString - In the implementation block
@property (nonatomic,retain,readonly) UILabel * ownerContentLabel;               //@synthesize ownerContentLabel=_ownerContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
+(id)_ownerStringForAsset:(id)arg1 ;
+(double)heightOfOwnerCellWithAsset:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
-(void)prepareForReuse;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(void)setOwnerString:(NSAttributedString *)arg1 ;
-(UILabel *)ownerContentLabel;
-(void)layoutSubviews;
-(NSAttributedString *)ownerString;
-(void)updateContentFromAsset:(id)arg1 ;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

