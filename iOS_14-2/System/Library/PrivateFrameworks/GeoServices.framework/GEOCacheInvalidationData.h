/*
* Generated on Thursday, January 14, 2021 at 2:21:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSArray *)versionDomains;
-(double)timestamp;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)_isKey:(id)arg1 subsetOf:(id)arg2 ;
-(double)ttl;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithTimestamp:(double)arg1 ttl:(double)arg2 version:(unsigned)arg3 domains:(id)arg4 ;
-(BOOL)isInvalidatedByServiceVersion:(unsigned)arg1 domains:(id)arg2 ;
-(unsigned)version;
@end

