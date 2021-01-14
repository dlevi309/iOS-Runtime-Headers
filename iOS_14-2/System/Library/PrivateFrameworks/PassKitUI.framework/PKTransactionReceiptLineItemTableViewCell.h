/*
* Generated on Thursday, January 14, 2021 at 2:24:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitUI.framework/PassKitUI
*/

#import <PassKitUI/PassKitUI-Structs.h>
#import <UIKitCore/UITableViewCell.h>

@class UIImageView, UILabel, UIImage, NSString;

@interface PKTransactionReceiptLineItemTableViewCell : UITableViewCell {

	UIImageView* _imageView;
	UILabel* _primaryLabel;
	UILabel* _secondaryLabel;
	UILabel* _tertiaryLabel;
	UILabel* _amountLabel;
	BOOL _hasTrailingLineSeparator;
	BOOL _suppressImage;
	UIImage* _image;
	NSString* _primaryText;
	NSString* _secondaryText;
	NSString* _tertiaryText;
	NSString* _amountText;

}

@property (nonatomic,retain) UIImage * image;                            //@synthesize image=_image - In the implementation block
@property (nonatomic,copy) NSString * primaryText;                       //@synthesize primaryText=_primaryText - In the implementation block
@property (nonatomic,copy) NSString * secondaryText;                     //@synthesize secondaryText=_secondaryText - In the implementation block
@property (nonatomic,copy) NSString * tertiaryText;                      //@synthesize tertiaryText=_tertiaryText - In the implementation block
@property (nonatomic,copy) NSString * amountText;                        //@synthesize amountText=_amountText - In the implementation block
@property (assign,nonatomic) BOOL hasTrailingLineSeparator;              //@synthesize hasTrailingLineSeparator=_hasTrailingLineSeparator - In the implementation block
@property (assign,nonatomic) BOOL suppressImage;                         //@synthesize suppressImage=_suppressImage - In the implementation block
-(void)setImage:(UIImage *)arg1 ;
-(void)prepareForReuse;
-(UIImage *)image;
-(void)layoutSubviews;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(NSString *)primaryText;
-(NSString *)tertiaryText;
-(void)setTertiaryText:(NSString *)arg1 ;
-(void)setPrimaryText:(NSString *)arg1 ;
-(void)setHasTrailingLineSeparator:(BOOL)arg1 ;
-(void)setSuppressImage:(BOOL)arg1 ;
-(BOOL)hasTrailingLineSeparator;
-(BOOL)suppressImage;
-(void)setAmountText:(NSString *)arg1 ;
-(NSString *)amountText;
-(void)setSecondaryText:(NSString *)arg1 ;
-(NSString *)secondaryText;
-(id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2 ;
@end

