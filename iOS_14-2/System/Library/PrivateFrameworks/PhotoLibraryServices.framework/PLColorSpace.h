/*
* Generated on Thursday, January 14, 2021 at 2:22:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLColorSpace : NSObject {

	NSString* _colorSpaceName;

}

@property (nonatomic,copy) NSString * colorSpaceName;              //@synthesize colorSpaceName=_colorSpaceName - In the implementation block
+(id)colorSpaceFromName:(id)arg1 ;
+(id)commonColorSpace_unspecified;
+(id)commonColorSpace_displaySpace;
+(id)commonColorSpace_sRGB;
-(id)initWithName:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)colorSpaceName;
-(BOOL)isEqual:(id)arg1 ;
-(void)setColorSpaceName:(NSString *)arg1 ;
@end

