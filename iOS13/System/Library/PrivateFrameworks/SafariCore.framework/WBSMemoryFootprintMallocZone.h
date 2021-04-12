/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)name;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithMallocZone:(malloc_zone_t*)arg1 ;
-(unsigned long long)sizeInUse;
-(unsigned long long)sizeAllocated;
@end

