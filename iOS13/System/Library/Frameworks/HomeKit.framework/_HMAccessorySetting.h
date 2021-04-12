/*
* Generated on Monday, March 1, 2021 at 2:32:34 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(BOOL)supportsSecureCoding;
+(id)shortDescription;
+(id)logCategory;
+(id)supportedValueClasses;
+(id)_encodedConstraintsToRemove:(id)arg1 ;
+(id)_encodedConstraintsToAdd:(id)arg1 ;
+(id)_replaceConstraintsPayloadWithAdditions:(id)arg1 removals:(id)arg2 ;
+(id)supportedConstraintClasses;
-(void)dealloc;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(NSString *)description;
-(NSString *)debugDescription;
-(NSString *)name;
-(long long)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id<_HMAccesorySettingDelegate>)delegate;
-(void)setDelegate:(id<_HMAccesorySettingDelegate>)arg1 ;
-(NSUUID *)identifier;
-(NSArray *)constraints;
-(id<NSCopying><NSSecureCoding>)value;
-(void)setValue:(id<NSCopying><NSSecureCoding>)arg1 ;
-(_HMContext *)context;
-(void)setContext:(_HMContext *)arg1 ;
-(unsigned long long)properties;
-(id)shortDescription;
-(void)addConstraint:(id)arg1 ;
-(void)removeConstraint:(id)arg1 ;
-(void)setConstraints:(NSArray *)arg1 ;
-(id)logIdentifier;
-(BOOL)mergeObject:(id)arg1 ;
-(id)descriptionWithPointer:(BOOL)arg1 ;
-(NSUUID *)messageTargetUUID;
-(NSObject*<OS_dispatch_queue>)messageReceiveQueue;
-(void)updateValue:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_registerNotificationHandlers;
-(id)messageDestination;
-(void)configureWithAccessorySettings:(id)arg1 context:(id)arg2 ;
-(void)setAccessorySettings:(HMAccessorySettings *)arg1 ;
-(HMAccessorySettings *)accessorySettings;
-(void)_handleUpdatedValue:(id)arg1 ;
-(void)_handleAddedConstraint:(id)arg1 ;
-(void)_handleRemovedConstraint:(id)arg1 ;
-(void)_handleReflectedUpdate:(id)arg1 ;
-(void)notifyDelegateOfAddedConstraint:(id)arg1 ;
-(void)notifyDelegateOfRemovedConstraint:(id)arg1 ;
-(BOOL)isReflected;
-(void)setReflected:(BOOL)arg1 ;
-(BOOL)mergeConstraints:(id)arg1 ;
-(id)initWithType:(long long)arg1 properties:(unsigned long long)arg2 name:(id)arg3 constraints:(id)arg4 ;
-(id)constraintWithType:(long long)arg1 ;
-(void)addConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)removeConstraint:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)replaceConstraints:(id)arg1 withConstraints:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(void)updateConstraints:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
@end

