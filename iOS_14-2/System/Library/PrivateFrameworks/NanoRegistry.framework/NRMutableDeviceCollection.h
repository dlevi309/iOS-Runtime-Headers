/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
@property (getter=allAltAccount,nonatomic,readonly) BOOL isAllAltAccount; 
@property (nonatomic,retain) NRPBMutableDeviceCollection * protobuf;                   //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)deviceForPairingID:(id)arg1 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)_createIndex;
-(id)allPairingIDs;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(BOOL)paired;
-(id)init;
-(void)setProtobuf:(NRPBMutableDeviceCollection *)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSUUID *)activeDeviceID;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setActiveDeviceID:(NSUUID *)arg1 ;
-(unsigned long long)count;
-(id)description;
-(NRMutableDevice *)activeDevice;
-(NRPBMutableDeviceCollection *)protobuf;
-(void)removeDeviceForPairingID:(id)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setDevice:(id)arg1 forPairingID:(id)arg2 ;
-(void)invalidate;
-(id)initWithProtobuf:(id)arg1 ;
-(BOOL)allAltAccount;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_diffsToChangeActiveDeviceToDeviceID:(id)arg1 ;
@end

