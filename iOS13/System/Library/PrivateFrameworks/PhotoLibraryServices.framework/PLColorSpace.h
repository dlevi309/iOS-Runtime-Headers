/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
*/


@class NSString;

@interface PLColorSpace : NSObject {

	NSString* _colorSpaceName;

}

@property (nonatomic,copy) NSString * colorSpaceName;              //@synthesize colorSpaceName=_colorSpaceName - In the implementation block
+(id)commonColorSpace_sRGB;
+(id)colorSpaceFromName:(id)arg1 ;
+(id)commonColorSpace_unspecified;
+(id)commonColorSpace_displaySpace;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithName:(id)arg1 ;
-(NSString *)colorSpaceName;
-(void)setColorSpaceName:(NSString *)arg1 ;
@end

