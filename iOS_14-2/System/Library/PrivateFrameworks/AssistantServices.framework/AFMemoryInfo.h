/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AssistantServices-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@interface AFMemoryInfo : NSObject <NSCopying, NSSecureCoding> {

	int _numberOfRegions;
	int _pageSizeInBytes;
	unsigned long long _virtualMemorySizeInBytes;
	unsigned long long _residentMemorySizeInBytes;
	unsigned long long _peakResidentMemorySizeInBytes;
	unsigned long long _physicalMemoryFootprintInBytes;

}

@property (nonatomic,readonly) unsigned long long virtualMemorySizeInBytes;                    //@synthesize virtualMemorySizeInBytes=_virtualMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) int numberOfRegions;                                            //@synthesize numberOfRegions=_numberOfRegions - In the implementation block
@property (nonatomic,readonly) int pageSizeInBytes;                                            //@synthesize pageSizeInBytes=_pageSizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long residentMemorySizeInBytes;                   //@synthesize residentMemorySizeInBytes=_residentMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long peakResidentMemorySizeInBytes;               //@synthesize peakResidentMemorySizeInBytes=_peakResidentMemorySizeInBytes - In the implementation block
@property (nonatomic,readonly) unsigned long long physicalMemoryFootprintInBytes;              //@synthesize physicalMemoryFootprintInBytes=_physicalMemoryFootprintInBytes - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)newWithBuilder:(/*^block*/id)arg1 ;
-(unsigned long long)physicalMemoryFootprintInBytes;
-(unsigned long long)residentMemorySizeInBytes;
-(unsigned long long)peakResidentMemorySizeInBytes;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(unsigned long long)virtualMemorySizeInBytes;
-(id)mutatedCopyWithMutator:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_descriptionWithIndent:(unsigned long long)arg1 ;
-(int)pageSizeInBytes;
-(int)numberOfRegions;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithVirtualMemorySizeInBytes:(unsigned long long)arg1 numberOfRegions:(int)arg2 pageSizeInBytes:(int)arg3 residentMemorySizeInBytes:(unsigned long long)arg4 peakResidentMemorySizeInBytes:(unsigned long long)arg5 physicalMemoryFootprintInBytes:(unsigned long long)arg6 ;
-(BOOL)isEqual:(id)arg1 ;
@end

