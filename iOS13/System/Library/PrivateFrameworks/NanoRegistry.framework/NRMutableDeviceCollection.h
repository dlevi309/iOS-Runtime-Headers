/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NRPBMutableDeviceCollection, NSMutableDictionary, NRMutableDevice, NSUUID;

@interface NRMutableDeviceCollection : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NRPBMutableDeviceCollection* _protobuf;
	NSMutableDictionary* _deviceCollection;
	NSMutableDictionary* _childMap;

}

@property (nonatomic,readonly) NRMutableDevice * activeDevice; 
@property (nonatomic,retain) NSUUID * activeDeviceID; 
@property (getter=paired,nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,retain) NSMutableDictionary * deviceCollection;              //@synthesize deviceCollection=_deviceCollection - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * childMap;                      //@synthesize childMap=_childMap - In the implementation block
@property (nonatomic,retain) NRPBMutableDeviceCollection * protobuf;              //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)count;
-(void)invalidate;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)paired;
-(void)setProtobuf:(NRPBMutableDeviceCollection *)arg1 ;
-(NRPBMutableDeviceCollection *)protobuf;
-(id)initWithProtobuf:(id)arg1 ;
-(id)deviceForPairingID:(id)arg1 ;
-(NRMutableDevice *)activeDevice;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(NSUUID *)activeDeviceID;
-(void)setActiveDeviceID:(NSUUID *)arg1 ;
-(void)_createIndex;
-(NSMutableDictionary *)deviceCollection;
-(id)allPairingIDs;
-(void)setDevice:(id)arg1 forPairingID:(id)arg2 ;
-(void)removeDeviceForPairingID:(id)arg1 ;
-(void)setDeviceCollection:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)childMap;
-(void)setChildMap:(NSMutableDictionary *)arg1 ;
-(id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1 ;
@end

