/*
* Generated on Monday, March 1, 2021 at 2:33:30 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingConstraintProtocol.h>

@class NSNumber, NSUUID, NSData, NSString;

@interface HMDSettingConstraint : NSObject <HMDSettingConstraintProtocol> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSNumber* _type;
	NSNumber* _numberValue;
	NSData* _dataValue;

}

@property (readonly) NSNumber * numberValue;                        //@synthesize numberValue=_numberValue - In the implementation block
@property (readonly) NSData * dataValue;                            //@synthesize dataValue=_dataValue - In the implementation block
@property (readonly) NSUUID * identifier;                           //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (readonly) NSUUID * parentIdentifier;                     //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) NSString * name; 
@property (copy,readonly) id value; 
+(BOOL)supportsSecureCoding;
-(NSString *)name;
-(NSNumber *)type;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)value;
-(NSData *)dataValue;
-(NSNumber *)numberValue;
-(NSUUID *)parentIdentifier;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 type:(id)arg3 numberValue:(id)arg4 dataValue:(id)arg5 ;
@end

