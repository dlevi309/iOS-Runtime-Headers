/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray;

@interface DMFConfigurationOrganization : NSObject <NSSecureCoding> {

	BOOL _active;
	NSString* _identifier;
	NSString* _displayName;
	NSString* _type;
	NSArray* _registeredConfigurationSources;

}

@property (nonatomic,copy) NSString * identifier;                                 //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy) NSString * type;                                       //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) BOOL active;                                         //@synthesize active=_active - In the implementation block
@property (nonatomic,copy) NSArray * registeredConfigurationSources;              //@synthesize registeredConfigurationSources=_registeredConfigurationSources - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)active;
-(void)setActive:(BOOL)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)debugDescription;
-(void)setType:(NSString *)arg1 ;
-(id)description;
-(NSArray *)registeredConfigurationSources;
-(void)setRegisteredConfigurationSources:(NSArray *)arg1 ;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)type;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)displayName;
@end

