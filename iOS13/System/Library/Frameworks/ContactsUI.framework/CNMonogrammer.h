/*
* Generated on Monday, March 1, 2021 at 2:30:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class UIImage, NSString, UIColor, UIFont, NSArray;

@interface CNMonogrammer : NSObject {

	UIImage* _silhouetteMonogram;
	UIImage* _questionMarkMonogram;
	UIImage* _knockoutMaskMonogram;
	double _innerBorderWidth;
	NSString* _silhouetteImageName;
	long long _monogrammerStyle;
	CNMonogrammer* _subMonogrammer;
	UIColor* _tintColor;
	double _scale;
	BOOL _textKnockout;
	UIFont* _font;
	double _diameter;
	UIColor* _backgroundColor;
	UIColor* _textColor;

}

@property (assign,nonatomic) double diameter;                               //@synthesize diameter=_diameter - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                     //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                           //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) BOOL textKnockout;                             //@synthesize textKnockout=_textKnockout - In the implementation block
@property (nonatomic,readonly) UIImage * silhouetteMonogram; 
@property (nonatomic,readonly) UIImage * questionMarkMonogram; 
@property (nonatomic,readonly) UIImage * knockoutMaskMonogram; 
@property (nonatomic,retain) UIFont * font;                                 //@synthesize font=_font - In the implementation block
@property (nonatomic,readonly) NSArray * keysToFetch; 
+(id)_initialsForContact:(id)arg1 ;
+(id)descriptorForRequiredKeysIncludingImage:(BOOL)arg1 ;
+(long long)monogramTypeForContact:(id)arg1 ;
+(id)requiredKeyDescriptor;
-(id)init;
-(void)dealloc;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(UIFont *)font;
-(UIColor *)textColor;
-(id)initWithStyle:(long long)arg1 diameter:(double)arg2 ;
-(id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(NSArray *)keysToFetch;
-(double)diameter;
-(void)setDiameter:(double)arg1 ;
-(void)monogramsAsFlatImages;
-(void)monogramsWithTint:(id)arg1 ;
-(void)monogramsForStark;
-(void)setTextKnockout:(BOOL)arg1 ;
-(double)innerBorderWidth;
-(id)silhouetteImageName;
-(id)monogramForContact:(id)arg1 isContactImage:(BOOL*)arg2 ;
-(id)monogramForContact:(id)arg1 ;
-(id)monogramForContacts:(id)arg1 ;
-(UIImage *)silhouetteMonogram;
-(UIImage *)questionMarkMonogram;
-(UIImage *)knockoutMaskMonogram;
-(void)_clearMonogramCache;
-(id)_initialsForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_copyMonogramWithImageData:(id)arg1 ;
-(id)_copyMonogramWithInitials:(id)arg1 ;
-(id)_copyMonogramWithSilhouette;
-(id)_copyMonogramWithKnockoutMask;
-(BOOL)textKnockout;
@end

