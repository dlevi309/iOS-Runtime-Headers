/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsCore.framework/TipsCore
*/

#import <TipsCore/TipsCore-Structs.h>
#import <TipsCore/TPSSerializableObject.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NAIdentifiable.h>

@class NSString, TPSNotification;

@interface TPSDocument : TPSSerializableObject <NSCopying, NSSecureCoding, NAIdentifiable> {

	NSString* _identifier;
	NSString* _variantID;
	NSString* _language;
	TPSNotification* _notification;

}

@property (nonatomic,copy) NSString * identifier;                       //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * variantID;                        //@synthesize variantID=_variantID - In the implementation block
@property (nonatomic,copy) NSString * language;                         //@synthesize language=_language - In the implementation block
@property (nonatomic,copy) TPSNotification * notification;              //@synthesize notification=_notification - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
+(id)classSet;
+(id)deliveryInfoIdForDictionary:(id)arg1 ;
+(id)deliveryInfoForDictionary:(id)arg1 ;
+(id)documentsForDictionary:(id)arg1 ;
+(id)na_identity;
-(void)setNotification:(TPSNotification *)arg1 ;
-(TPSNotification *)notification;
-(void)setLanguage:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)debugDescription;
-(id)initWithDictionary:(id)arg1 metadata:(id)arg2 identifierKey:(id)arg3 ;
-(void)updateWithContentDictionary:(id)arg1 metadata:(id)arg2 ;
-(NSString *)description;
-(void)setVariantID:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)language;
-(NSString *)variantID;
-(BOOL)isEqual:(id)arg1 ;
@end

