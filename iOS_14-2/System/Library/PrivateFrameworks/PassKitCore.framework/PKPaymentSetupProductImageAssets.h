/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface PKPaymentSetupProductImageAssets : NSObject <NSCopying> {

	CGImageRef _digitalCardImage;
	CGImageRef _plasticCardImage;
	CGImageRef _thumbnailImage;
	CGImageRef _logoImage;

}

@property (assign,nonatomic) CGImageRef digitalCardImage;              //@synthesize digitalCardImage=_digitalCardImage - In the implementation block
@property (assign,nonatomic) CGImageRef plasticCardImage;              //@synthesize plasticCardImage=_plasticCardImage - In the implementation block
@property (assign,nonatomic) CGImageRef thumbnailImage;                //@synthesize thumbnailImage=_thumbnailImage - In the implementation block
@property (assign,nonatomic) CGImageRef logoImage;                     //@synthesize logoImage=_logoImage - In the implementation block
-(void)setLogoImage:(CGImageRef)arg1 ;
-(CGImageRef)thumbnailImage;
-(CGImageRef)digitalCardImage;
-(void)setDigitalCardImage:(CGImageRef)arg1 ;
-(void)setPlasticCardImage:(CGImageRef)arg1 ;
-(CGImageRef)plasticCardImage;
-(CGImageRef)logoImage;
-(void)setThumbnailImage:(CGImageRef)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)dealloc;
@end

