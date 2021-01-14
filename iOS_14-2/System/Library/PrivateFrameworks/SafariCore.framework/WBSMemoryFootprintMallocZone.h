/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface WBSMemoryFootprintMallocZone : NSObject <NSSecureCoding> {

	unsigned long long _addr;
	malloc_statistics_t _statistics;
	NSString* _name;

}

@property (nonatomic,readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (nonatomic,readonly) unsigned long long sizeInUse; 
@property (nonatomic,readonly) unsigned long long sizeAllocated; 
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(unsigned long long)sizeInUse;
-(id)initWithMallocZone:(malloc_zone_t*)arg1 ;
-(unsigned long long)sizeAllocated;
-(id)initWithCoder:(id)arg1 ;
@end

