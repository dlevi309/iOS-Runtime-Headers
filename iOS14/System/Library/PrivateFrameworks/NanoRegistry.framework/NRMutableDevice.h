/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <NanoRegistry/NRMutableStateBase.h>
#import <libobjc.A.dylib/NRMutableStateParentDelegate.h>
#import <libobjc.A.dylib/NSFastEnumeration.h>

@class NRPBMutableDevice, NSMutableDictionary, NSUUID;

@interface NRMutableDevice : NRMutableStateBase <NRMutableStateParentDelegate, NSFastEnumeration> {

	NRPBMutableDevice* _protobuf;
	NSMutableDictionary* _properties;

}

@property (nonatomic,readonly) NSUUID * pairingID; 
@property (nonatomic,readonly) BOOL isPaired; 
@property (nonatomic,readonly) BOOL isActive; 
@property (nonatomic,readonly) BOOL isArchived; 
@property (nonatomic,readonly) BOOL migratable; 
@property (nonatomic,readonly) BOOL isAltAccount; 
@property (nonatomic,retain) NRPBMutableDevice * protobuf;              //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToPair:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
+(id)enclosedClassTypes;
+(void)parseDiff:(id)arg1 forPropertyChange:(id)arg2 withBlock:(/*^block*/id)arg3 ;
-(BOOL)isPaired;
-(NSUUID *)pairingID;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(BOOL)migratable;
-(unsigned long long)countByEnumeratingWithState:(SCD_Struct_NR9*)arg1 objects:(id*)arg2 count:(unsigned long long)arg3 ;
-(id)init;
-(void)setProtobuf:(NRPBMutableDevice *)arg1 ;
-(id)allPropertyNames;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(BOOL)isActive;
-(void)encodeWithCoder:(id)arg1 ;
-(void)removePropertyForName:(id)arg1 ;
-(unsigned long long)count;
-(id)propertyForName:(id)arg1 ;
-(BOOL)isArchived;
-(id)description;
-(NRPBMutableDevice *)protobuf;
-(BOOL)isAltAccount;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(id)initWithProtobuf:(id)arg1 ;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(BOOL)supportsCapability:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)_createIndex:(id)arg1 ;
@end

