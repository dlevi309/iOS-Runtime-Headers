/*
* Generated on Thursday, January 14, 2021 at 2:23:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Vision.framework/Vision
*/

#import <Vision/Vision-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface VNSizeRange : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _minimumDimension;
	unsigned long long _maximumDimension;
	unsigned long long _idealDimension;

}

@property (nonatomic,readonly) unsigned long long minimumDimension;              //@synthesize minimumDimension=_minimumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long maximumDimension;              //@synthesize maximumDimension=_maximumDimension - In the implementation block
@property (nonatomic,readonly) unsigned long long idealDimension;                //@synthesize idealDimension=_idealDimension - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)idealDimension;
-(id)initWithMinimumDimension:(unsigned long long)arg1 maximumDimension:(unsigned long long)arg2 idealDimension:(unsigned long long)arg3 ;
-(BOOL)isAllowedDimension:(unsigned long long)arg1 ;
-(unsigned long long)minimumDimension;
-(unsigned long long)maximumDimension;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

