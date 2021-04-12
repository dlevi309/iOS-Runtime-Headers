/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRDiffBase.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NSDictionary, NRPBDeviceCollectionDiff;

@interface NRDeviceCollectionDiff : NRDiffBase <NSFastEnumeration> {

	NSDictionary* _diffDeviceDiffs;

}

@property (nonatomic,readonly) NSDictionary * diffDeviceDiffs;                   //@synthesize diffDeviceDiffs=_diffDeviceDiffs - In the implementation block
@property (nonatomic,readonly) NRPBDeviceCollectionDiff * protobuf; 
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(unsigned long long)count;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(NRPBDeviceCollectionDiff *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(void)_createIndex;
-(id)initWithDeviceCollectionDiffDeviceDiffs:(id)arg1 ;
-(id)diffCollectionDiffForPairingID:(id)arg1 ;
-(id)allPairingIDs;
-(NSDictionary *)diffDeviceDiffs;
@end

