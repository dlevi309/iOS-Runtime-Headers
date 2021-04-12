/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
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
+(BOOL)supportsSecureCoding;
+(id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
+(id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 applyScalingAndCircularMasking:(BOOL)arg3 ;
+(id)providerWithFullColorImage:(id)arg1 ;
+(id)providerWithFullColorImage:(id)arg1 monochromeFilterType:(long long)arg2 ;
+(id)providerWithFullColorImage:(id)arg1 tintedImageProvider:(id)arg2 ;
+(id)providerWithFullColorImage:(id)arg1 applyScalingAndCircularMasking:(BOOL)arg2 ;
+(id)fullColorImageProviderWithImageViewClass:(Class)arg1 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(UIImage *)image;
-(void)setImage:(UIImage *)arg1 ;
-(void)setMetadata:(NSDictionary *)arg1 ;
-(NSDictionary *)metadata;
-(NSString *)accessibilityLabel;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(UIColor *)tintColor;
-(void)setTintColor:(UIColor *)arg1 ;
-(void)validate;
-(void)finalizeWithMaxSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(id)initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2 ;
-(id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1 ;
-(CLKImageProvider *)tintedImageProvider;
-(Class)ImageViewClass;
-(void)_resizeImagesIfNecessaryWithMaxSize:(CGSize)arg1 cornerRadius:(double)arg2 ;
-(void)setPrefersFilterOverTransition:(BOOL)arg1 ;
-(BOOL)prefersFilterOverTransition;
-(void)setTintedImageProvider:(CLKImageProvider *)arg1 ;
-(BOOL)tritium_isTritiumInactiveFullColorImageProvider;
-(long long)monochromeFilterType;
-(void)setMonochromeFilterType:(long long)arg1 ;
@end

