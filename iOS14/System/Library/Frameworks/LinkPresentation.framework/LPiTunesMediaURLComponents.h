/*
* Generated on Thursday, January 14, 2021 at 2:22:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)storefrontCountryCode;
-(NSString *)identifier;
@end

