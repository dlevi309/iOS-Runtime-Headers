/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PassKitCore-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface PKPassPersonalization : NSObject <NSSecureCoding, NSCopying> {

	unsigned long long _requiredPersonalizationFields;
	NSString* _termsAndConditions;
	NSString* _localizedDescription;

}

@property (nonatomic,readonly) unsigned long long requiredPersonalizationFields;              //@synthesize requiredPersonalizationFields=_requiredPersonalizationFields - In the implementation block
@property (nonatomic,readonly) NSString * termsAndConditions;                                 //@synthesize termsAndConditions=_termsAndConditions - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                               //@synthesize localizedDescription=_localizedDescription - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)passPersonalizationWithPassBundle:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)termsAndConditions;
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)requiredPersonalizationFields;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
@end

