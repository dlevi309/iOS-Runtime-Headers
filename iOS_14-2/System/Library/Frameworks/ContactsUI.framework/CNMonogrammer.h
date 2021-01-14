/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(long long)monogramTypeForContact:(id)arg1 ;
+(id)_initialsForContact:(id)arg1 ;
+(id)requiredKeyDescriptor;
+(id)descriptorForRequiredKeysIncludingImage:(BOOL)arg1 ;
-(NSArray *)keysToFetch;
-(UIColor *)textColor;
-(id)init;
-(id)_copyMonogramWithInitials:(id)arg1 ;
-(void)setFont:(UIFont *)arg1 ;
-(double)innerBorderWidth;
-(void)monogramsForStark;
-(id)_copyMonogramWithImageData:(id)arg1 ;
-(id)_initialsForFirstName:(id)arg1 lastName:(id)arg2 ;
-(id)_copyMonogramWithKnockoutMask;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIImage *)questionMarkMonogram;
-(id)monogramForContacts:(id)arg1 ;
-(UIColor *)backgroundColor;
-(void)monogramsAsFlatImages;
-(void)setTextColor:(UIColor *)arg1 ;
-(id)monogramForContact:(id)arg1 isContactImage:(BOOL*)arg2 ;
-(id)initWithStyle:(long long)arg1 diameter:(double)arg2 ;
-(void)setTextKnockout:(BOOL)arg1 ;
-(double)diameter;
-(id)_copyMonogramWithSilhouette;
-(void)_clearMonogramCache;
-(UIImage *)knockoutMaskMonogram;
-(void)monogramsWithTint:(id)arg1 ;
-(id)monogramForContact:(id)arg1 ;
-(id)monogramForPersonWithFirstName:(id)arg1 lastName:(id)arg2 ;
-(void)setDiameter:(double)arg1 ;
-(BOOL)textKnockout;
-(id)silhouetteImageName;
-(UIImage *)silhouetteMonogram;
-(void)dealloc;
-(UIFont *)font;
@end

