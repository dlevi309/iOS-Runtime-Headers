/*
* Generated on Monday, March 1, 2021 at 2:30:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray;

@interface GEOCacheInvalidationData : NSObject <NSSecureCoding> {

	double _timestamp;
	double _ttl;
	unsigned _version;
	NSArray* _versionDomains;

}

@property (nonatomic,readonly) double timestamp;                      //@synthesize timestamp=_timestamp - In the implementation block
@property (nonatomic,readonly) double ttl;                            //@synthesize ttl=_ttl - In the implementation block
@property (nonatomic,readonly) unsigned version;                      //@synthesize version=_version - In the implementation block
@property (nonatomic,readonly) NSArray * versionDomains;              //@synthesize versionDomains=_versionDomains - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned)version;
-(double)timestamp;
-(double)ttl;
-(NSArray *)versionDomains;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned)arg3 domains:(id)arg4 ;
-(BOOL)isInvalidatedByServiceVersion:(unsigned)arg1 domains:(id)arg2 ;
@end

