/*
* Generated on Thursday, January 14, 2021 at 2:22:29 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
*/

#import <UIKitCore/UITableViewCell.h>

@class UITextView, UILabel, UIView, PLCloudSharedComment;

@interface PUPhotoCommentCell : UITableViewCell {

	BOOL _usesCompactSeparators;
	UITextView* _commentContentTextView;
	UILabel* _commentBylineLabel;
	UIView* _styledSeparatorView;
	PLCloudSharedComment* _comment;

}

@property (nonatomic,retain,readonly) UITextView * commentContentTextView;              //@synthesize commentContentTextView=_commentContentTextView - In the implementation block
@property (nonatomic,retain,readonly) UILabel * commentBylineLabel;                     //@synthesize commentBylineLabel=_commentBylineLabel - In the implementation block
@property (nonatomic,retain,readonly) UIView * styledSeparatorView;                     //@synthesize styledSeparatorView=_styledSeparatorView - In the implementation block
@property (nonatomic,copy) PLCloudSharedComment * comment;                              //@synthesize comment=_comment - In the implementation block
@property (assign,nonatomic) BOOL usesCompactSeparators;                                //@synthesize usesCompactSeparators=_usesCompactSeparators - In the implementation block
+(id)_synthesizedAttributedString:(id)arg1 withWordWrapping:(BOOL)arg2 ;
+(id)_attributionStringForComment:(id)arg1 ;
+(id)_commentStringForComment:(id)arg1 ;
+(Class)layerClass;
+(double)heightForComment:(id)arg1 forWidth:(double)arg2 forInterfaceOrientation:(long long)arg3 ;
-(PLCloudSharedComment *)comment;
-(void)setComment:(PLCloudSharedComment *)arg1 ;
-(void)delete:(id)arg1 ;
-(void)prepareForReuse;
-(BOOL)usesCompactSeparators;
-(UIView *)styledSeparatorView;
-(UITextView *)commentContentTextView;
-(UILabel *)commentBylineLabel;
-(void)layoutSubviews;
-(void)_updateContent;
-(void)setUsesCompactSeparators:(BOOL)arg1 ;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

