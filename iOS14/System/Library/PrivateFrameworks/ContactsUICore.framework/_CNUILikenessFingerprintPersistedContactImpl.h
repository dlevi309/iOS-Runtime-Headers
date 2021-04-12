/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/_CNUILikenessFingerprintImpl.h>

@class NSString;

@interface _CNUILikenessFingerprintPersistedContactImpl : NSObject <_CNUILikenessFingerprintImpl> {

	NSString* _contactIdentifier;

}

@property (copy,readonly) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)contactIdentifier;
-(id)init;
-(NSString *)description;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasContactIdentifier:(id)arg1 ;
@end

