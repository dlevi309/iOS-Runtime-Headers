/*
* Generated on Monday, March 1, 2021 at 2:32:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/HealthKit.framework/HealthKit
*/

#import <HealthKit/HealthKit-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSData, NSURL, NSDate;

@interface HKFHIRResource : NSObject <NSSecureCoding, NSCopying> {

	NSString* _resourceType;
	NSString* _identifier;
	NSData* _data;
	NSURL* _sourceURL;
	NSDate* _lastUpdatedDate;

}

@property (copy,readonly) NSString * sourceString; 
@property (copy,readonly) NSDate * lastUpdatedDate; 
@property (copy,readonly) NSString * resourceType; 
@property (copy,readonly) NSString * identifier; 
@property (copy,readonly) NSData * data; 
@property (copy,readonly) NSURL * sourceURL; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSData *)data;
-(NSString *)identifier;
-(NSURL *)sourceURL;
-(NSString *)resourceType;
-(NSDate *)lastUpdatedDate;
-(id)initWithResourceType:(id)arg1 identifier:(id)arg2 data:(id)arg3 sourceURL:(id)arg4 lastUpdatedDate:(id)arg5 ;
-(NSString *)sourceString;
@end

