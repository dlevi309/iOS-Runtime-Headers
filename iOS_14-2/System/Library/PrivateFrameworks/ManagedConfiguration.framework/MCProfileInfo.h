/*
* Generated on Thursday, January 14, 2021 at 2:21:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ManagedConfiguration.framework/ManagedConfiguration
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate;

@interface MCProfileInfo : NSObject <NSSecureCoding> {

	NSString* _friendlyName;
	NSString* _profileDescription;
	NSString* _identifier;
	NSString* _UUID;
	NSString* _organization;
	NSDate* _expiryDate;

}

@property (nonatomic,retain) NSString * friendlyName;                    //@synthesize friendlyName=_friendlyName - In the implementation block
@property (nonatomic,retain) NSString * profileDescription;              //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,retain) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,retain) NSString * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,retain) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,retain) NSDate * expiryDate;                        //@synthesize expiryDate=_expiryDate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)UUID;
-(void)setFriendlyName:(NSString *)arg1 ;
-(NSString *)profileDescription;
-(void)setProfileDescription:(NSString *)arg1 ;
-(id)initWithProfile:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)expiryDate;
-(void)setExpiryDate:(NSDate *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(void)setUUID:(NSString *)arg1 ;
-(NSString *)friendlyName;
-(NSString *)organization;
-(void)setOrganization:(NSString *)arg1 ;
@end

