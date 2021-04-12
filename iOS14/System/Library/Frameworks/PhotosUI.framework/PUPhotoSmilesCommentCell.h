/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UILabel, NSOrderedSet, UIView;

@interface PUPhotoSmilesCommentCell : UITableViewCell {

	BOOL _isVideo;
	BOOL _usesCompactSeparators;
	UILabel* _smileContentLabel;
	NSOrderedSet* _userLikes;
	UIView* _styledSeparatorView;

}

@property (nonatomic,retain,readonly) UILabel * smileContentLabel;               //@synthesize smileContentLabel=_smileContentLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;              //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
@property (nonatomic,copy) NSOrderedSet * userLikes;                             //@synthesize userLikes=_userLikes - In the implementation block
@property (assign,nonatomic) BOOL isVideo;                                       //@synthesize isVideo=_isVideo - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                         //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
+(id)_attributedStringForComments:(id)arg1 color:(id)arg2 isVideo:(BOOL)arg3 ;
+(id)_smileStringForComments:(id)arg1 ;
+(double)heightOfSmileCellWithComments:(id)arg1 forWidth:(double)arg2 isVideo:(BOOL)arg3 forInterfaceOrientation:(long long)arg4 ;
-(NSOrderedSet *)userLikes;
-(void)prepareForReuse;
-(UILabel *)smileContentLabel;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(void)layoutSubviews;
-(BOOL)isVideo;
-(void)setIsVideo:(BOOL)arg1 ;
-(void)_updateContent;
-(void)setUserLikes:(NSOrderedSet *)arg1 ;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

