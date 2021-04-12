/*
* Generated on Monday, March 1, 2021 at 2:31:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(NSString *)token;
-(NSString *)errorMessage;
-(id)initWithData:(id)arg1 urlResponse:(id)arg2 error:(id)arg3 ;
@end

