/*
* Generated on Thursday, January 14, 2021 at 2:23:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoRegistry.framework/NanoRegistry
*/

#import <NanoRegistry/NanoRegistry-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSUUID, NRRegistry, NSMutableDictionary, NSPointerArray, NSMutableArray;

@interface NRDevice : NSObject <NSSecureCoding> {

	NRDevice* _me;
	os_unfair_lock_s _lock;
	NSUUID* _pairingID;
	NRRegistry* _registry;
	NSMutableDictionary* _oldPropertiesForChangeNotifications;
	NSMutableDictionary* _properties;
	NSMutableDictionary* _observers;
	NSPointerArray* _promiscuousObservers;
	NSMutableDictionary* _changeBlocks;
	NSMutableArray* _promiscuousChangeBlocks;

}

@property (nonatomic,readonly) NSUUID * pairingID; 
+(BOOL)supportsSecureCoding;
-(NSUUID *)pairingID;
-(id)initWithQueue:(id)arg1 ;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(id)init;
-(id)propertyNames;
-(void)registerForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)unregisterForPropertyChanges:(id)arg1 withBlock:(/*^block*/id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)setValue:(id)arg1 forProperty:(id)arg2 ;
-(id)description;
-(void)addPropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(void)removePropertyObserver:(id)arg1 forPropertyChanges:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)valueForProperty:(id)arg1 ;
-(void)invalidate;
-(void)_setValue:(id)arg1 forProperty:(id)arg2 ;
-(BOOL)archived;
-(BOOL)supportsCapability:(id)arg1 ;
-(id)initWithRegistry:(id)arg1 diff:(id)arg2 pairingID:(id)arg3 notify:(BOOL)arg4 ;
-(BOOL)canMigrate;
-(void)dealloc;
-(id)migrationError;
-(BOOL)migrationConfirmed;
@end

