/*
* Generated on Monday, March 1, 2021 at 2:35:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Health/Plugins/HealthRecordsPlugin.bundle/HealthRecordsPlugin
*/

#import <HealthRecordsPlugin/HealthRecordsPlugin-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class HDFHIRCredential, NSData;

@interface HDClinicalAuthenticationInfo : NSObject <NSCopying, NSSecureCoding> {

	HDFHIRCredential* _credential;
	NSData* _tokenKeyFingerprint;

}

@property (nonatomic,copy,readonly) HDFHIRCredential * credential;              //@synthesize credential=_credential - In the implementation block
@property (nonatomic,copy,readonly) NSData * tokenKeyFingerprint;               //@synthesize tokenKeyFingerprint=_tokenKeyFingerprint - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(HDFHIRCredential *)credential;
-(id)initWithCredential:(id)arg1 tokenKeyFingerprint:(id)arg2 ;
-(NSData *)tokenKeyFingerprint;
@end

