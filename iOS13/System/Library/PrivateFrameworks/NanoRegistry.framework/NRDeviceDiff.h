/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceDiff;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffPropertyDiffs;

}

@property (nonatomic,readonly) NSDictionary * diffPropertyDiffs;              //@synthesize diffPropertyDiffs=_diffPropertyDiffs - In the implementation block
@property (nonatomic,readonly) NRPBDeviceDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NRPBDeviceDiff *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)_createIndex;
-(id)initWithDiffPropertyDiffs:(id)arg1 ;
-(id)allPropertyNames;
-(id)diffPropertyDiffForName:(id)arg1 ;
-(NSDictionary *)diffPropertyDiffs;
@end

