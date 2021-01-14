/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <PassKitUI/PKDashboardCollectionViewCell.h>

@class UILabel, UIImageView, NSString, UIImage;

@interface PKSearchSuggestionCollectionViewCell : PKDashboardCollectionViewCell {

	UILabel* _labelSuggestion;
	UIImageView* _imageViewIcon;
	BOOL _isTemplateLayout;
	NSString* _suggestion;
	UIImage* _icon;

}

@property (nonatomic,retain) NSString * suggestion;              //@synthesize suggestion=_suggestion - In the implementation block
@property (nonatomic,retain) UIImage * icon;                     //@synthesize icon=_icon - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(UIImage *)icon;
-(NSString *)suggestion;
-(void)setIcon:(UIImage *)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)resetFonts;
-(void)setSuggestion:(NSString *)arg1 ;
-(CGSize)_layoutWithBounds:(CGRect)arg1 ;
-(void)traitCollectionDidChange:(id)arg1 ;
@end

