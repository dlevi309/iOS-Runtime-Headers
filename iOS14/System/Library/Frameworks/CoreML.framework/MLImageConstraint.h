/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreML/CoreML-Structs.h>
#import <libobjc.A.dylib/MLFeatureValueConstraint.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class MLImageSizeConstraint;

@interface MLImageConstraint : NSObject <MLFeatureValueConstraint, NSCopying, NSSecureCoding> {

	long long _pixelsHigh;
	long long _pixelsWide;
	MLImageSizeConstraint* _sizeConstraint;
	unsigned long long _pixelType;

}

@property (readonly) unsigned long long imageHeight; 
@property (readonly) unsigned long long imageWidth; 
@property (readonly) unsigned long long pixelType;                                  //@synthesize pixelType=_pixelType - In the implementation block
@property (readonly) unsigned osType; 
@property (nonatomic,readonly) long long pixelsHigh;                                //@synthesize pixelsHigh=_pixelsHigh - In the implementation block
@property (nonatomic,readonly) long long pixelsWide;                                //@synthesize pixelsWide=_pixelsWide - In the implementation block
@property (nonatomic,readonly) unsigned pixelFormatType; 
@property (nonatomic,readonly) MLImageSizeConstraint * sizeConstraint;              //@synthesize sizeConstraint=_sizeConstraint - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)_stringForOSType:(unsigned)arg1 ;
+(BOOL)osType:(unsigned)arg1 isAcceptedForPixelType:(unsigned long long)arg2 ;
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
+(id)constraintWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 ;
+(unsigned long long)imagePixelTypeFromOSType:(unsigned)arg1 ;
-(unsigned)osType;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)isAllowedValue:(id)arg1 error:(id*)arg2 ;
-(unsigned long long)imageWidth;
-(id)initWithCoder:(id)arg1 ;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(unsigned)pixelFormatType;
-(MLImageSizeConstraint *)sizeConstraint;
-(unsigned long long)imageHeight;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)pixelType;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 pixelType:(unsigned long long)arg3 sizeConstraint:(id)arg4 ;
-(id)_stringForAllowedOSTypes;
@end

