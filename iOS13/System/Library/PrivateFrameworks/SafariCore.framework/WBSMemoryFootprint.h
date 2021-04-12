/*
* Generated on Monday, March 1, 2021 at 2:32:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)dictionaryRepresentation;
-(id)initWithError:(id*)arg1 ;
-(NSArray *)zones;
-(unsigned long long)residentSize;
-(unsigned long long)dirtySize;
-(WBSMemoryFootprintMallocZone *)defaultMallocZone;
@end

