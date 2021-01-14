/*
* Generated on Thursday, January 14, 2021 at 2:24:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UIView.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKPhysicalCardArtworkView : UIView {

	UIImageView* _artworkImageView;
	UILabel* _nameLabel;
	UIImage* _artworkImage;
	NSString* _nameOnCard;

}

@property (nonatomic,retain) UIImage * artworkImage;              //@synthesize artworkImage=_artworkImage - In the implementation block
@property (nonatomic,copy) NSString * nameOnCard;                 //@synthesize nameOnCard=_nameOnCard - In the implementation block
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)setNameOnCard:(NSString *)arg1 ;
-(NSString *)nameOnCard;
-(void)setArtworkImage:(UIImage *)arg1 ;
-(UIImage *)artworkImage;
@end

