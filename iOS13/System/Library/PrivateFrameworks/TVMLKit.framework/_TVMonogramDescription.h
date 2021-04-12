/*
* Generated on Monday, March 1, 2021 at 2:35:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVMLKit.framework/TVMLKit
*/

#import <TVMLKit/TVMLKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol IKNetworkRequestLoader;
@class NSString, NSURL, UIFont, UIColor;

@interface _TVMonogramDescription : NSObject <NSCopying> {

	BOOL _shouldFallBackToSilhouette;
	NSString* _firstName;
	NSString* _lastName;
	NSString* _text;
	NSURL* _imageURL;
	UIFont* _font;
	long long _scaleMode;
	UIColor* _backgroundColor;
	UIColor* _textColor;
	double _upscaleAdjustment;
	double _cornerRadius;
	UIColor* _fillColor;
	double _borderWidth;
	UIColor* _borderColor;
	id<IKNetworkRequestLoader> _requestLoader;
	CGSize _size;
	UIEdgeInsets _padding;

}

@property (nonatomic,copy,readonly) NSString * firstName;                                  //@synthesize firstName=_firstName - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastName;                                   //@synthesize lastName=_lastName - In the implementation block
@property (nonatomic,copy) NSString * text;                                                //@synthesize text=_text - In the implementation block
@property (nonatomic,copy,readonly) NSURL * imageURL;                                      //@synthesize imageURL=_imageURL - In the implementation block
@property (nonatomic,copy,readonly) UIFont * font;                                         //@synthesize font=_font - In the implementation block
@property (assign,nonatomic) CGSize size;                                                  //@synthesize size=_size - In the implementation block
@property (assign,nonatomic) UIEdgeInsets padding;                                         //@synthesize padding=_padding - In the implementation block
@property (assign,nonatomic) long long scaleMode;                                          //@synthesize scaleMode=_scaleMode - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                                    //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,retain) UIColor * textColor;                                          //@synthesize textColor=_textColor - In the implementation block
@property (assign,nonatomic) double upscaleAdjustment;                                     //@synthesize upscaleAdjustment=_upscaleAdjustment - In the implementation block
@property (assign,nonatomic) double cornerRadius;                                          //@synthesize cornerRadius=_cornerRadius - In the implementation block
@property (nonatomic,retain) UIColor * fillColor;                                          //@synthesize fillColor=_fillColor - In the implementation block
@property (assign,nonatomic) BOOL shouldFallBackToSilhouette;                              //@synthesize shouldFallBackToSilhouette=_shouldFallBackToSilhouette - In the implementation block
@property (assign,nonatomic) double borderWidth;                                           //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,retain) UIColor * borderColor;                                        //@synthesize borderColor=_borderColor - In the implementation block
@property (assign,nonatomic,__weak) id<IKNetworkRequestLoader> requestLoader;              //@synthesize requestLoader=_requestLoader - In the implementation block
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(NSString *)text;
-(void)setText:(NSString *)arg1 ;
-(void)setPadding:(UIEdgeInsets)arg1 ;
-(UIColor *)backgroundColor;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(void)setBorderColor:(UIColor *)arg1 ;
-(void)setTextColor:(UIColor *)arg1 ;
-(void)setCornerRadius:(double)arg1 ;
-(UIFont *)font;
-(UIColor *)fillColor;
-(double)cornerRadius;
-(double)borderWidth;
-(void)setBorderWidth:(double)arg1 ;
-(UIColor *)textColor;
-(UIEdgeInsets)padding;
-(void)setFillColor:(UIColor *)arg1 ;
-(UIColor *)borderColor;
-(NSURL *)imageURL;
-(NSString *)firstName;
-(NSString *)lastName;
-(long long)scaleMode;
-(void)setScaleMode:(long long)arg1 ;
-(id)copyWithType:(unsigned long long)arg1 ;
-(id<IKNetworkRequestLoader>)requestLoader;
-(double)upscaleAdjustment;
-(void)setUpscaleAdjustment:(double)arg1 ;
-(id)initWithFirstName:(id)arg1 lastName:(id)arg2 imageURL:(id)arg3 font:(id)arg4 ;
-(unsigned long long)preferedMonogramType;
-(void)setShouldFallBackToSilhouette:(BOOL)arg1 ;
-(BOOL)shouldFallBackToSilhouette;
-(void)setRequestLoader:(id<IKNetworkRequestLoader>)arg1 ;
@end

