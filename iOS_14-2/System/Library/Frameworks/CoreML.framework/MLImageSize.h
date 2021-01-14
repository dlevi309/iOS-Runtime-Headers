/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@interface MLImageSize : NSObject <NSSecureCoding> {

	long long _pixelsWide;
	long long _pixelsHigh;

}

@property (readonly) long long pixelsWide;              //@synthesize pixelsWide=_pixelsWide - In the implementation block
@property (readonly) long long pixelsHigh;              //@synthesize pixelsHigh=_pixelsHigh - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 ;
-(BOOL)isEqualToImageSize:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

