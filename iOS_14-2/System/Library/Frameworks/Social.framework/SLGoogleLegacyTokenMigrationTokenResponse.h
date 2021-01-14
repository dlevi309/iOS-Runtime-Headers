/*
* Generated on Thursday, January 14, 2021 at 2:26:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Social.framework/Social
*/

#import <Social/SLGoogleLegacyTokenMigrationResponse.h>

@class NSString;

@interface SLGoogleLegacyTokenMigrationTokenResponse : SLGoogleLegacyTokenMigrationResponse {

	NSString* _token;
	NSString* _errorMessage;

}

@property (readonly) NSString * token;                     //@synthesize token=_token - In the implementation block
@property (readonly) NSString * errorMessage;              //@synthesize errorMessage=_errorMessage - In the implementation block
-(NSString *)errorMessage;
-(NSString *)token;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

