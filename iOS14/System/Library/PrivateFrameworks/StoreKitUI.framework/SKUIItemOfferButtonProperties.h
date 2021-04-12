/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIColor, CAFilter, NSAttributedString, UIImage;

@interface SKUIItemOfferButtonProperties : NSObject {

	BOOL _hasBorderView;
	BOOL _borderCornerRadiusMatchesHalfBoundingDimension;
	BOOL _hasTitleLabel;
	BOOL _universal;
	BOOL _progressIndeterminate;
	BOOL _cancelRecognizer;
	BOOL _restores;
	UIColor* _borderBackgroundColor;
	UIColor* _borderColor;
	CAFilter* _borderCompositingFilter;
	double _borderWidth;
	double _borderCornerRadius;
	NSAttributedString* _attributedText;
	UIColor* _textColor;
	long long _confirmationTitleStyle;
	long long _titleStyle;
	UIImage* _image;
	UIImage* _borderedImage;
	long long _progressType;
	double _progress;
	double _alpha;

}

@property (assign,nonatomic) BOOL hasBorderView;                                               //@synthesize hasBorderView=_hasBorderView - In the implementation block
@property (nonatomic,retain) UIColor * borderBackgroundColor;                                  //@synthesize borderBackgroundColor=_borderBackgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                            //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,retain) CAFilter * borderCompositingFilter;                               //@synthesize borderCompositingFilter=_borderCompositingFilter - In the implementation block
@property (assign,nonatomic) double borderWidth;                                               //@synthesize borderWidth=_borderWidth - In the implementation block
@property (assign,nonatomic) double borderCornerRadius;                                        //@synthesize borderCornerRadius=_borderCornerRadius - In the implementation block
@property (assign,nonatomic) BOOL borderCornerRadiusMatchesHalfBoundingDimension;              //@synthesize borderCornerRadiusMatchesHalfBoundingDimension=_borderCornerRadiusMatchesHalfBoundingDimension - In the implementation block
@property (assign,nonatomic) BOOL hasTitleLabel;                                               //@synthesize hasTitleLabel=_hasTitleLabel - In the implementation block
@property (nonatomic,copy) NSAttributedString * attributedText;                                //@synthesize attributedText=_attributedText - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                              //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL universal;                                                   //@synthesize universal=_universal - In the implementation block
@property (assign,nonatomic) long long confirmationTitleStyle;                                 //@synthesize confirmationTitleStyle=_confirmationTitleStyle - In the implementation block
@property (assign,nonatomic) long long titleStyle;                                             //@synthesize titleStyle=_titleStyle - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                  //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) UIImage * borderedImage;                                          //@synthesize borderedImage=_borderedImage - In the implementation block
@property (assign,nonatomic) long long progressType;                                           //@synthesize progressType=_progressType - In the implementation block
@property (assign,nonatomic) BOOL progressIndeterminate;                                       //@synthesize progressIndeterminate=_progressIndeterminate - In the implementation block
@property (assign,nonatomic) double progress;                                                  //@synthesize progress=_progress - In the implementation block
@property (assign,nonatomic) BOOL cancelRecognizer;                                            //@synthesize cancelRecognizer=_cancelRecognizer - In the implementation block
@property (assign,nonatomic) double alpha;                                                     //@synthesize alpha=_alpha - In the implementation block
@property (assign,nonatomic) BOOL restores;                                                    //@synthesize restores=_restores - In the implementation block
-(NSAttributedString *)attributedText;
-(UIColor *)textColor;
-(void)setImage:(UIImage *)arg1 ;
-(void)setAttributedText:(NSAttributedString *)arg1 ;
-(double)progress;
-(UIColor *)borderColor;
-(double)alpha;
-(UIImage *)image;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(double)borderWidth;
-(long long)titleStyle;
-(void)setTitleStyle:(long long)arg1 ;
-(void)setAlpha:(double)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(BOOL)restores;
-(void)setBorderWidth:(double)arg1 ;
-(double)borderCornerRadius;
-(void)setBorderCornerRadius:(double)arg1 ;
-(void)setUniversal:(BOOL)arg1 ;
-(BOOL)hasBorderView;
-(void)setHasBorderView:(BOOL)arg1 ;
-(UIColor *)borderBackgroundColor;
-(void)setBorderBackgroundColor:(UIColor *)arg1 ;
-(CAFilter *)borderCompositingFilter;
-(void)setBorderCompositingFilter:(CAFilter *)arg1 ;
-(BOOL)borderCornerRadiusMatchesHalfBoundingDimension;
-(void)setBorderCornerRadiusMatchesHalfBoundingDimension:(BOOL)arg1 ;
-(BOOL)hasTitleLabel;
-(void)setHasTitleLabel:(BOOL)arg1 ;
-(BOOL)universal;
-(long long)confirmationTitleStyle;
-(void)setConfirmationTitleStyle:(long long)arg1 ;
-(UIImage *)borderedImage;
-(void)setBorderedImage:(UIImage *)arg1 ;
-(long long)progressType;
-(void)setProgressType:(long long)arg1 ;
-(BOOL)progressIndeterminate;
-(void)setProgressIndeterminate:(BOOL)arg1 ;
-(BOOL)cancelRecognizer;
-(void)setCancelRecognizer:(BOOL)arg1 ;
-(void)setRestores:(BOOL)arg1 ;
@end
