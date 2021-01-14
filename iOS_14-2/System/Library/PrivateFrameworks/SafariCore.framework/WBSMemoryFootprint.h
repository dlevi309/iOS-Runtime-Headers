/*
* Generated on Thursday, January 14, 2021 at 2:23:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariCore.framework/SafariCore
*/

#import <SafariCore/SafariCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, WBSMemoryFootprintMallocZone;

@interface WBSMemoryFootprint : NSObject <NSSecureCoding> {

	task_vm_info _vmInfo;
	NSArray* _zones;

}

@property (nonatomic,readonly) NSArray * zones;                                               //@synthesize zones=_zones - In the implementation block
@property (nonatomic,readonly) unsigned long long residentSize; 
@property (nonatomic,readonly) unsigned long long dirtySize; 
@property (nonatomic,readonly) WBSMemoryFootprintMallocZone * defaultMallocZone; 
+(id)new;
+(BOOL)supportsSecureCoding;
-(id)dictionaryRepresentation;
-(id)initWithError:(id*)arg1 ;
-(NSArray *)zones;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(WBSMemoryFootprintMallocZone *)defaultMallocZone;
-(id)initWithCoder:(id)arg1 ;
@end

