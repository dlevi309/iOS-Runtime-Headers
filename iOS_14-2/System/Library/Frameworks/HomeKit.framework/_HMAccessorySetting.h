/*
* Generated on Thursday, January 14, 2021 at 2:22:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/HomeKit.framework/HomeKit
*/

#import <libobjc.A.dylib/HMFLogging.h>
#import <libobjc.A.dylib/HMFMessageReceiver.h>
#import <libobjc.A.dylib/HMFMerging.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@protocol NSCopyingNSSecureCoding, _HMAccesorySettingDelegate;
@class HMFUnfairLock, NSMutableOrderedSet, NSUUID, NSString, HMAccessorySettings, _HMContext, NSArray;

@interface _HMAccessorySetting : NSObject <HMFLogging, HMFMessageReceiver, HMFMerging, NSSecureCoding> {

	HMFUnfairLock* _lock;
	NSMutableOrderedSet* _constraints;
	BOOL _reflected;
	id<NSCopying><NSSecureCoding> _value;
	id<_HMAccesorySettingDelegate> _delegate;
	NSUUID* _identifier;
	long long _type;
	unsigned long long _properties;
	NSString* _name;
	HMAccessorySettings* _accessorySettings;
	_HMContext* _context;

}

@property (assign,nonatomic,__weak) HMAccessorySettings * accessorySettings;                  //@synthesize accessorySettings=_accessorySettings - In the implementation block
@property (nonatomic,retain) _HMContext * context;                                            //@synthesize context=_context - In the implementation block
@property (__weak) id<_HMAccesorySettingDelegate> delegate;                                   //@synthesize delegate=_delegate - In the implementation block
@property (copy,readonly) NSUUID * identifier;                                                //@synthesize identifier=_identifier - In the implementation block
@property (readonly) long long type;                                                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long properties;                                           //@synthesize properties=_properties - In the implementation block
@property (copy,readonly) NSString * name;                                                    //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSArray * constraints; 
@property (copy) id<NSCopying><NSSecureCoding> value;                                         //@synthesize value=_value - In the implementation block
@property (getter=isReflected,readonly) BOOL reflected;                                       //@synthesize reflected=_reflected - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSUUID * messageTargetUUID; 
@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> messageReceiveQueue; 
+(id)logCategory;
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)supportedValueClasses;
+(id)_encodedConstraintsToRemove:(id)arg1 ;
+(id)_encodedConstraintsToAdd:(id)arg1 ;
+(id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2 ;
+(id)supportedConstraintClasses;
-(NSUUID *)messageTargetUUID;
-(NSArray *)constraints;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)setConstraints:(NSArray *)arg1 ;
-(unsigned long long)properties;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(BOOL)mergeObject:(id)arg1 ;
-(id<_HMAccesorySettingDelegate>)delegate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)shortDescription;
-(NSString *)debugDescription;
-(id)logIdentifier;
-(_HMContext *)context;
-(NSString *)name;
-(void)setValue:(id<NSCopying><NSSecureCoding>)arg1 ;
-(void)setDelegate:(id<_HMAccesorySettingDelegate>)arg1 ;
-(id)messageDestination;
-(NSString *)description;
-(BOOL)isReflected;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(HMAccessorySettings *)accessorySettings;
-(long long)type;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(unsigned long long)hash;
-(void)addConstraint:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_handleUpdatedValue:(id)arg1 ;
-(void)_handleAddedConstraint:(id)arg1 ;
-(void)_handleRemovedConstraint:(id)arg1 ;
-(void)notifyDelegateOfAddedConstraint:(id)arg1 ;
-(void)notifyDelegateOfRemovedConstraint:(id)arg1 ;
-(BOOL)mergeConstraints:(id)arg1 ;
-(void)setReflected:(BOOL)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4 ;
-(id)constraintWithType:(long long)arg1 ;
-(void)addConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConstraints:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(id<NSCopying><NSSecureCoding>)value;
-(BOOL)isEqual:(id)arg1 ;
-(void)dealloc;
-(void)setContext:(_HMContext *)arg1 ;
@end

