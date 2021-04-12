/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
@property (nonatomic,retain) NSMutableDictionary * properties;              //@synthesize properties=_properties - In the implementation block
@property (nonatomic,retain) NRPBMutableDevice * protobuf;                  //@synthesize protobuf=_protobuf - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)enclosedClassTypes;
+(id)diffFrom:(id)arg1 to:(id)arg2 ;
+(id)diffsToActivate:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToPair:(BOOL)arg1 withDate:(id)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 andCompatibilityState:(unsigned short)arg2 ;
+(id)diffsToSetStatusCode:(unsigned long long)arg1 ;
+(id)diffsToClearStatusCodeAndCompatibilityState;
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
-(BOOL)isActive;
-(NSMutableDictionary *)properties;
-(void)setProperties:(NSMutableDictionary *)arg1 ;
-(id)propertyForName:(id)arg1 ;
-(void)setProtobuf:(NRPBMutableDevice *)arg1 ;
-(NRPBMutableDevice *)protobuf;
-(BOOL)isPaired;
-(id)initWithProtobuf:(id)arg1 ;
-(NSUUID *)pairingID;
-(BOOL)supportsCapability:(id)arg1 ;
-(BOOL)isArchived;
-(void)setProperty:(id)arg1 forName:(id)arg2 ;
-(BOOL)migratable;
-(id)applyDiff:(id)arg1 upOnly:(BOOL)arg2 notifyParent:(BOOL)arg3 unconditional:(BOOL)arg4 ;
-(void)child:(id)arg1 didApplyDiff:(id)arg2 ;
-(id)_createIndex:(id)arg1 ;
-(void)removePropertyForName:(id)arg1 ;
-(id)allPropertyNames;
@end

