/*
* Generated on Thursday, January 14, 2021 at 2:21:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(id)_dictionaryRepresentation;
-(NSString *)localizedTermsAndConditionsText;
-(NSURL *)privacyPolicyURL;
-(NSURL *)termsAndConditionsURL;
-(id)initWithLocalizedTermsAndConditionsText:(id)arg1 privacyPolicyURL:(id)arg2 termsAndConditionsURL:(id)arg3 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

