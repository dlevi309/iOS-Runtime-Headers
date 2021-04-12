/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NRDevicePropertyDiff, NRPBDevicePropertyDiffType;

@interface NRDevicePropertyDiffType : NSObject <NSCopying, NSSecureCoding> {

	NRDevicePropertyDiff* _diff;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) NRDevicePropertyDiff * diff;                        //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;                      //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) NRPBDevicePropertyDiffType * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)changeType;
-(NRPBDevicePropertyDiffType *)protobuf;
-(NRDevicePropertyDiff *)diff;
-(id)initWithProtobuf:(id)arg1 ;
-(id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2 ;
@end

