/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDictionary;

@interface SLFacebookPostPrivacySetting : NSObject <NSSecureCoding> {

	int _type;
	NSString* _identifier;
	NSString* _name;
	NSDictionary* _parameters;

}

@property (retain) NSString * identifier;                  //@synthesize identifier=_identifier - In the implementation block
@property (retain) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (retain) NSDictionary * parameters;              //@synthesize parameters=_parameters - In the implementation block
@property (assign) int type;                               //@synthesize type=_type - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)postPrivacySettingWithIdentifier:(id)arg1 name:(id)arg2 type:(int)arg3 parameters:(id)arg4 ;
+(id)postPrivacySettingsForPrivacyOptions:(id)arg1 ;
+(int)_privacySettingTypeFromTypeIdentifier:(id)arg1 ;
+(id)postPrivacySettingForPrivacyOptionDictionary:(id)arg1 ;
-(id)description;
-(NSString *)name;
-(int)type;
-(void)setType:(int)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(id)_parametersJSONStringRepresentation;
-(id)parametersFormValueString;
@end

