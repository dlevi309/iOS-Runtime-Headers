/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/


@class NSString;

@interface LPiTunesMediaURLComponents : NSObject {

	NSString* _identifier;
	NSString* _storefrontCountryCode;

}

@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy,readonly) NSString * storefrontCountryCode;              //@synthesize storefrontCountryCode=_storefrontCountryCode - In the implementation block
+(id)identifierFromQueryItems:(id)arg1 pathComponent:(id)arg2 ;
+(id)storefrontCountryCodeFromPathComponent:(id)arg1 ;
-(id)initWithURL:(id)arg1 ;
-(NSString *)identifier;
-(NSString *)storefrontCountryCode;
@end

