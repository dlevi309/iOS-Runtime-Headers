/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)localizedDescription;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)termsAndConditions;
-(id)initWithDictionary:(id)arg1 bundle:(id)arg2 ;
-(unsigned long long)requiredPersonalizationFields;
@end

