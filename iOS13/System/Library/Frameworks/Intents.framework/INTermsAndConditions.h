/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INTermsAndConditionsExport.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString, NSURL;

@interface INTermsAndConditions : NSObject <INTermsAndConditionsExport, NSSecureCoding, NSCopying> {

	NSString* _localizedTermsAndConditionsText;
	NSURL* _privacyPolicyURL;
	NSURL* _termsAndConditionsURL;

}

@property (nonatomic,readonly) NSString * localizedTermsAndConditionsText;              //@synthesize localizedTermsAndConditionsText=_localizedTermsAndConditionsText - In the implementation block
@property (nonatomic,readonly) NSURL * privacyPolicyURL;                                //@synthesize privacyPolicyURL=_privacyPolicyURL - In the implementation block
@property (nonatomic,readonly) NSURL * termsAndConditionsURL;                           //@synthesize termsAndConditionsURL=_termsAndConditionsURL - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(NSString *)localizedTermsAndConditionsText;
-(NSURL *)privacyPolicyURL;
-(NSURL *)termsAndConditionsURL;
-(id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3 ;
@end

