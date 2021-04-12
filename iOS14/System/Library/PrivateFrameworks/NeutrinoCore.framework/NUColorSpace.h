/*
* Generated on Thursday, January 14, 2021 at 2:25:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSString, NSDictionary;

@interface NUColorSpace : NSObject {

	CGColorSpaceRef _CGColorSpace;
	NSString* _descriptionName;

}

@property (nonatomic,readonly) CGColorSpaceRef CGColorSpace;                         //@synthesize CGColorSpace=_CGColorSpace - In the implementation block
@property (nonatomic,readonly) NSString * name; 
@property (nonatomic,readonly) NSString * descriptionName;                           //@synthesize descriptionName=_descriptionName - In the implementation block
@property (nonatomic,readonly) NSDictionary * cvPixelBufferAttachments; 
+(id)workingColorSpace;
+(id)itur2100HLGColorSpace;
+(id)displayP3ColorSpace;
+(id)rec709ColorSpace;
+(id)_loadICCProfileDataWithIdentifier:(id)arg1 ;
+(id)sRGBColorSpace;
+(id)sRGBLinearColorSpace;
+(id)adobeRGBColorSpace;
+(id)genericRGBColorSpace;
+(id)genericRGBLinearColorSpace;
+(id)genericGrayColorSpace;
+(id)displayP3LinearColorSpace;
+(id)linearWideGamutColorSpace;
+(CGColorSpaceRef)_newLinearWideGamutColorSpace;
+(id)colorSpaceFromVideoColorProperties:(id)arg1 ;
+(id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3 ;
-(id)init;
-(NSString *)descriptionName;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isHDR;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)nu_updateDigest:(id)arg1 ;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 descriptionName:(id)arg2 ;
-(id)initWithICCProfileData:(id)arg1 descriptionName:(id)arg2 ;
-(BOOL)isWideGamut;
-(NSDictionary *)cvPixelBufferAttachments;
-(void)applyAttachmentsToCVPixelBuffer:(CVBufferRef)arg1 ;
-(CGColorSpaceRef)CGColorSpace;
@end

