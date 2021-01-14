/*
* Generated on Thursday, January 14, 2021 at 2:22:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <HomeKit/HomeKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface HMCameraActivityZone : NSObject <NSCopying, NSSecureCoding> {

	NSArray* _points;

}

@property (copy,readonly) NSArray * points;              //@synthesize points=_points - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithPoints:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSArray *)points;
-(BOOL)isEqual:(id)arg1 ;
@end

