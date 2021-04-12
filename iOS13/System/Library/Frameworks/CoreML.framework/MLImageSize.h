/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)pixelsWide;
-(long long)pixelsHigh;
-(id)initWithPixelsWide:(long long)arg1 pixelsHigh:(long long)arg2 ;
-(BOOL)isEqualToImageSize:(id)arg1 ;
@end

