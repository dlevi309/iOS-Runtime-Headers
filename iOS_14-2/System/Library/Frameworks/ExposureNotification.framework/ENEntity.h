/*
* Generated on Thursday, January 14, 2021 at 2:25:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ExposureNotification.framework/ExposureNotification
*/

#import <ExposureNotification/ExposureNotification-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, ENRegion;

@interface ENEntity : NSObject <NSSecureCoding, NSCopying> {

	NSString* _bundleIdentifier;
	ENRegion* _region;

}

@property (nonatomic,copy,readonly) NSString * bundleIdentifier;              //@synthesize bundleIdentifier=_bundleIdentifier - In the implementation block
@property (nonatomic,copy,readonly) ENRegion * region;                        //@synthesize region=_region - In the implementation block
+(BOOL)supportsSecureCoding;
-(ENRegion *)region;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)bundleIdentifier;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithBundleID:(id)arg1 region:(id)arg2 ;
@end

