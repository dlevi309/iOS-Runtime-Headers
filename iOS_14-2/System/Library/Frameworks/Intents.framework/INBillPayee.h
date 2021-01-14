/*
* Generated on Thursday, January 14, 2021 at 2:21:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INJSONSerializable.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class INSpeakableString, NSString;

@interface INBillPayee : NSObject <INJSONSerializable, NSCopying, NSSecureCoding> {

	INSpeakableString* _nickname;
	NSString* _accountNumber;
	INSpeakableString* _organizationName;

}

@property (nonatomic,copy,readonly) INSpeakableString * nickname;                      //@synthesize nickname=_nickname - In the implementation block
@property (nonatomic,copy,readonly) NSString * accountNumber;                          //@synthesize accountNumber=_accountNumber - In the implementation block
@property (nonatomic,copy,readonly) INSpeakableString * organizationName;              //@synthesize organizationName=_organizationName - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)_intents_decodeWithJSONDecoder:(id)arg1 codableDescription:(id)arg2 from:(id)arg3 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(INSpeakableString *)organizationName;
-(id)_intents_readableTitleWithLocalizer:(id)arg1 metadata:(id)arg2 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithNickname:(id)arg1 number:(id)arg2 organizationName:(id)arg3 ;
-(id)_dictionaryRepresentation;
-(INSpeakableString *)nickname;
-(NSString *)description;
-(NSString *)accountNumber;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(id)_intents_encodeWithJSONEncoder:(id)arg1 codableDescription:(id)arg2 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

