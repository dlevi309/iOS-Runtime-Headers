/*
* Generated on Thursday, January 14, 2021 at 2:25:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <libobjc.A.dylib/HMDSettingBaseProtocol.h>

@class NSUUID, NSNumber, NSData, NSString;

@interface HMDSettingConstraint : NSObject <HMDSettingBaseProtocol> {

	NSUUID* _identifier;
	NSUUID* _parentIdentifier;
	NSNumber* _type;
	NSNumber* _numberValue;
	NSData* _dataValue;

}

@property (readonly) NSNumber * numberValue;                        //@synthesize numberValue=_numberValue - In the implementation block
@property (readonly) NSData * dataValue;                            //@synthesize dataValue=_dataValue - In the implementation block
@property (copy,readonly) NSUUID * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (copy,readonly) NSNumber * type;                          //@synthesize type=_type - In the implementation block
@property (copy,readonly) id value; 
@property (copy,readonly) NSString * name; 
@property (copy,readonly) NSUUID * parentIdentifier;                //@synthesize parentIdentifier=_parentIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(NSNumber *)numberValue;
-(NSData *)dataValue;
-(NSUUID *)parentIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)name;
-(NSNumber *)type;
-(id)initWithCoder:(id)arg1 ;
-(NSUUID *)identifier;
-(id)value;
-(id)initWithIdentifier:(id)arg1 parentIdentifier:(id)arg2 type:(id)arg3 numberValue:(id)arg4 dataValue:(id)arg5 ;
@end

