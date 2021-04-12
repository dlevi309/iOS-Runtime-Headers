/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
*/

#import <ClockKit/ClockKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class UIColor, UIImage, CLKImageProvider, NSString, NSDictionary;

@interface CLKFullColorImageProvider : NSObject <NSSecureCoding, NSCopying> {

	UIColor* _tintColor;
	BOOL _applyScalingAndCircularMasking;
	BOOL _finalized;
	BOOL _prefersFilterOverTransition;
	BOOL _tritium_inactiveFullColorImageProvider;
	UIImage* _image;
	CLKImageProvider* _tintedImageProvider;
	NSString* _accessibilityLabel;
	Class _ImageViewClass;
	NSDictionary* _metadata;
	long long _monochromeFilterType;

}

@property (assign,nonatomic) BOOL prefersFilterOverTransition;                                                                                  //@synthesize prefersFilterOverTransition=_prefersFilterOverTransition - In the implementation block
@property (nonatomic,readonly) Class ImageViewClass;                                                                                            //@synthesize ImageViewClass=_ImageViewClass - In the implementation block
@property (getter=tritium_isTritiumInactiveFullColorImageProvider,nonatomic,readonly) BOOL tritium_inactiveFullColorImageProvider;              //@synthesize tritium_inactiveFullColorImageProvider=_tritium_inactiveFullColorImageProvider - In the implementation block
@property (nonatomic,copy) NSDictionary * metadata;                                                                                             //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,retain) UIColor * tintColor;                                                                                               //@synthesize tintColor=_tintColor - In the implementation block
@property (assign,nonatomic) long long monochromeFilterType;                                                                                    //@synthesize monochromeFilterType=_monochromeFilterType - In the implementation block
@property (nonatomic,retain) UIImage * image;                                                                                                   //@synthesize image=_image - In the implementation block
@property (nonatomic,retain) CLKImageProvider * tintedImageProvider;                                                                            //@synthesize tintedImageProvider=_tintedImageProvider - In the implementation block
@property (nonatomic,retain) NSString * accessibilityLabel;                                                                                     //@synthesize accessibilityLabel=_accessibilityLabel - In the implementation block
+(id)new;
+(BOOL)supportsSecureCoding;
+(id)fullColorImageProviderWithImageViewClass:(Class)arg1 ;
+(id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
+(id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 ;
+(id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
+(id)providerWithFullColorImage:(id)arg1 ;
+(id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 ;
+(id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
-(BOOL)validate;
-(NSString *)accessibilityLabel;
-(id)initPrivate;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setImage:(UIImage *)arg1 ;
-(void)setTintColor:(UIColor *)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(UIImage *)image;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSDictionary *)metadata;
-(id)copyWithZone:(NSZone*)arg1 ;
-(UIColor *)tintColor;
-(BOOL)isEqual:(id)arg1 ;
-(Class)ImageViewClass;
-(long long)monochromeFilterType;
-(BOOL)prefersFilterOverTransition;
-(void)setPrefersFilterOverTransition:(BOOL)arg1 ;
-(CLKImageProvider *)tintedImageProvider;
-(void)setMonochromeFilterType:(long long)arg1 ;
-(void)finalizeWithMaxSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(id)initWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
-(id)initWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
-(void)_resizeImagesIfNecessaryWithMaxSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(id)initWithFullColorImage:(id)arg1 ;
-(id)initWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 ;
-(id)initWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 ;
-(id)initWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
-(void)setTintedImageProvider:(CLKImageProvider *)arg1 ;
-(BOOL)tritium_isTritiumInactiveFullColorImageProvider;
@end

