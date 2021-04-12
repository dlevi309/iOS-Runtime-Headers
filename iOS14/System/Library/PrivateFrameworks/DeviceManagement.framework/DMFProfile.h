/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DeviceManagement-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSArray, NSDictionary;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isManaged;
	BOOL _isLocked;
	BOOL _hasRemovalPasscode;
	BOOL _isEncrypted;
	NSString* _UUID;
	unsigned long long _type;
	NSString* _identifier;
	long long _profileVersion;
	NSString* _displayName;
	NSString* _organization;
	NSString* _profileDescription;
	NSArray* _signerCertificates;
	NSArray* _payloads;
	NSDictionary* _restrictions;

}

@property (nonatomic,copy,readonly) NSString * UUID;                            //@synthesize UUID=_UUID - In the implementation block
@property (nonatomic,readonly) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                      //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long profileVersion;                        //@synthesize profileVersion=_profileVersion - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;                     //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,copy,readonly) NSString * organization;                    //@synthesize organization=_organization - In the implementation block
@property (nonatomic,copy,readonly) NSString * profileDescription;              //@synthesize profileDescription=_profileDescription - In the implementation block
@property (nonatomic,readonly) BOOL isManaged;                                  //@synthesize isManaged=_isManaged - In the implementation block
@property (nonatomic,readonly) BOOL isLocked;                                   //@synthesize isLocked=_isLocked - In the implementation block
@property (nonatomic,readonly) BOOL hasRemovalPasscode;                         //@synthesize hasRemovalPasscode=_hasRemovalPasscode - In the implementation block
@property (nonatomic,readonly) BOOL isEncrypted;                                //@synthesize isEncrypted=_isEncrypted - In the implementation block
@property (nonatomic,copy,readonly) NSArray * signerCertificates;               //@synthesize signerCertificates=_signerCertificates - In the implementation block
@property (nonatomic,copy,readonly) NSArray * payloads;                         //@synthesize payloads=_payloads - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * restrictions;                //@synthesize restrictions=_restrictions - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isLocked;
-(BOOL)isManaged;
-(NSString *)UUID;
-(NSString *)profileDescription;
-(NSArray *)signerCertificates;
-(BOOL)hasRemovalPasscode;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(BOOL)arg8 isLocked:(BOOL)arg9 hasRemovalPasscode:(BOOL)arg10 isEncrypted:(BOOL)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14 ;
-(id)description;
-(NSDictionary *)restrictions;
-(BOOL)isEncrypted;
-(unsigned long long)type;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)displayName;
-(NSString *)organization;
-(NSArray *)payloads;
-(BOOL)isEqual:(id)arg1 ;
-(long long)profileVersion;
@end

