/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMSAuthenticationConfiguration;

@interface MSAuthenticationConfiguration : NSObject <NSSecureCoding, NSCopying> {

	CMSAuthenticationConfiguration* _configuration;

}

@property (readonly) CMSAuthenticationConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(CMSAuthenticationConfiguration *)configuration;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

