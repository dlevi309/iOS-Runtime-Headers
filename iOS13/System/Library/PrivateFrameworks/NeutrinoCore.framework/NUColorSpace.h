/*
* Generated on Monday, March 1, 2021 at 2:35:04 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NeutrinoCore.framework/NeutrinoCore
*/


#import <NeutrinoCore/NeutrinoCore-Structs.h>
@class NSString;

@interface NUColorSpace : NSObject {

	CGColorSpaceRef _CGColorSpace;

}

@property (nonatomic,readonly) CGColorSpaceRef CGColorSpace;              //@synthesize CGColorSpace=_CGColorSpace - In the implementation block
@property (nonatomic,readonly) NSString * name; 
+(id)workingColorSpace;
+(id)_loadICCProfileDataWithIdentifier:(id)arg1 ;
+(id)sRGBColorSpace;
+(id)sRGBLinearColorSpace;
+(id)adobeRGBColorSpace;
+(id)genericRGBColorSpace;
+(id)genericRGBLinearColorSpace;
+(id)genericGrayColorSpace;
+(id)displayP3ColorSpace;
+(id)displayP3LinearColorSpace;
+(id)linearWideGamutColorSpace;
+(CGColorSpaceRef)_newLinearWideGamutColorSpace;
+(id)colorSpaceFromVideoColorProperties:(id)arg1 ;
+(id)colorSpaceFromColorPrimaries:(id)arg1 transferFunction:(id)arg2 yccMatrix:(id)arg3 ;
-(id)init;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(void)nu_updateDigest:(id)arg1 ;
-(id)initWithCGColorSpace:(CGColorSpaceRef)arg1 ;
-(id)initWithICCProfileData:(id)arg1 ;
-(CGColorSpaceRef)CGColorSpace;
@end

