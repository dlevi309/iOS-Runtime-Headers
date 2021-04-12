/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(id)description;
-(id)debugDescription;
-(NSString *)type;
-(void)setType:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(void)setActive:(BOOL)arg1 ;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(BOOL)active;
-(NSArray *)registeredConfigurationSources;
-(void)setRegisteredConfigurationSources:(NSArray *)arg1 ;
@end

