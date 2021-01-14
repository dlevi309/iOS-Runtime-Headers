/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NRDeviceDiff, NRPBDeviceDiffType;

@interface NRDeviceDiffType : NSObject <NSCopying, NSSecureCoding> {

	NRDeviceDiff* _diff;
	unsigned long long _changeType;

}

@property (nonatomic,readonly) NRDeviceDiff * diff;                        //@synthesize diff=_diff - In the implementation block
@property (nonatomic,readonly) unsigned long long changeType;              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,readonly) NRPBDeviceDiffType * protobuf; 
+(BOOL)supportsSecureCoding;
-(unsigned long long)changeType;
-(NRDeviceDiff *)diff;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NRPBDeviceDiffType *)protobuf;
-(id)initWithDiff:(id)arg1 andChangeType:(unsigned long long)arg2 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

