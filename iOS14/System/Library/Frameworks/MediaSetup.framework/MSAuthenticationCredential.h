/*
* Generated on Thursday, January 14, 2021 at 2:26:48 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaSetup.framework/MediaSetup
*/

#import <MediaSetup/MediaSetup-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class CMSAuthenticationCredential;

@interface MSAuthenticationCredential : NSObject <NSSecureCoding, NSCopying> {

	CMSAuthenticationCredential* _credential;

}

@property (readonly) CMSAuthenticationCredential * credential;              //@synthesize credential=_credential - In the implementation block
+(BOOL)supportsSecureCoding;
-(CMSAuthenticationCredential *)credential;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
@end

