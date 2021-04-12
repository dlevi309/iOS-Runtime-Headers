/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceDiff;

@interface NRDeviceDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffPropertyDiffs;

}

@property (nonatomic,readonly) NRPBDeviceDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)allPropertyNames;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)description;
-(id)initWithDiffPropertyDiffs:(id)arg1 ;
-(NRPBDeviceDiff *)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)diffPropertyDiffForName:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

