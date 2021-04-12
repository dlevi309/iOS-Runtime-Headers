/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingOwnerProtocol.h>

@class NSArray, HMSettingValue, NSString, NSUUID, NSMutableArray, NSNumber;

@interface HMDSetting : NSObject <HMDSettingOwnerProtocol> {

	BOOL _readOnly;
	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSString* _name;
	NSMutableArray* _constraints;
	NSString* _keyPath;
	NSNumber* _type;
	NSNumber* _properties;
	HMSettingValue* _internalValue;

}

@property (getter=isReadOnly) BOOL readOnly;                        //@synthesize readOnly=_readOnly - In the implementation block
@property (copy) NSNumber * type;                                   //@synthesize type=_type - In the implementation block
@property (copy) NSNumber * properties;                             //@synthesize properties=_properties - In the implementation block
@property (copy) HMSettingValue * internalValue;                    //@synthesize internalValue=_internalValue - In the implementation block
@property (retain) NSMutableArray * constraints;                    //@synthesize constraints=_constraints - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * parentIdentifier;                     //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (readonly) NSString * name;                               //@synthesize name=_name - In the implementation block
@property (copy,readonly) NSString * keyPath; 
@property (copy,readonly) id value; 
+(BOOL)supportsSecureCoding;
+(id)logCategory;
+(id)settingValueWithModel:(id)arg1 ;
-(NSString *)description;
-(NSString *)name;
-(NSNumber *)type;
-(void)setType:(NSNumber *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(NSMutableArray *)constraints;
-(id)value;
-(NSString *)keyPath;
-(NSNumber *)properties;
-(id)initWithModel:(id)arg1 ;
-(void)setProperties:(NSNumber *)arg1 ;
-(void)setReadOnly:(BOOL)arg1 ;
-(void)addConstraint:(id)arg1 ;
-(void)setKeyPath:(NSString *)arg1 ;
-(void)setConstraints:(NSMutableArray *)arg1 ;
-(BOOL)isReadOnly;
-(id)logIdentifier;
-(NSUUID *)parentIdentifier;
-(BOOL)isValidValue:(id)arg1 ;
-(HMSettingValue *)internalValue;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 name:(id)arg3 properties:(id)arg4 type:(id)arg5 value:(id)arg6 constraints:(id)arg7 ;
-(BOOL)wouldValueUpdate:(id)arg1 ;
-(void)setInternalValue:(HMSettingValue *)arg1 ;
-(BOOL)updateWithSettingValue:(id)arg1 ;
@end

