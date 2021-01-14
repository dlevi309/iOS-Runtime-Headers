/*
* Generated on Thursday, January 14, 2021 at 2:21:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class HKFHIRVersion, NSString, NSData, NSURL, NSDate;

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying> {

	HKFHIRVersion* _FHIRVersion;
	NSString* _resourceType;
	NSString* _identifier;
	NSData* _data;
	NSURL* _sourceURL;
	NSDate* _lastUpdatedDate;

}

@property (copy,readonly) NSString * sourceString; 
@property (copy,readonly) NSDate * lastUpdatedDate; 
@property (copy,readonly) HKFHIRVersion * FHIRVersion; 
@property (copy,readonly) NSString * resourceType; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSURL * sourceURL; 
+(BOOL)supportsSecureCoding;
-(NSURL *)sourceURL;
-(id)init;
-(NSString *)resourceType;
-(NSDate *)lastUpdatedDate;
-(void)encodeWithCoder:(id)arg1 ;
-(NSData *)data;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(HKFHIRVersion *)FHIRVersion;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)sourceString;
-(id)initWithResourceType:(id)arg1 identifier:(id)arg2 FHIRVersion:(id)arg3 data:(id)arg4 sourceURL:(id)arg5 lastUpdatedDate:(id)arg6 ;
@end

