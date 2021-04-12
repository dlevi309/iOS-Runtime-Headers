/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceCollectionDiff;

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffDeviceDiffs;

}

@property (nonatomic,readonly) NRPBDeviceCollectionDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)allPairingIDs;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(unsigned long long)count;
-(id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1 ;
-(id)description;
-(NRPBDeviceCollectionDiff *)protobuf;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithProtobuf:(id)arg1 ;
-(id)diffCollectionDiffForPairingID:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

