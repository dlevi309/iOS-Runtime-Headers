/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)copyWithZone:(NSZone*)arg1 ;
-(CGImageRef)thumbnailImage;
-(void)setThumbnailImage:(CGImageRef)arg1 ;
-(CGImageRef)logoImage;
-(void)setLogoImage:(CGImageRef)arg1 ;
-(void)setDigitalCardImage:(CGImageRef)arg1 ;
-(void)setPlasticCardImage:(CGImageRef)arg1 ;
-(CGImageRef)digitalCardImage;
-(CGImageRef)plasticCardImage;
@end

