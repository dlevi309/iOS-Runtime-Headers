/*
* Generated on Thursday, January 14, 2021 at 2:27:30 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContactsUICore.framework/ContactsUICore
*/

#import <ContactsUICore/ContactsUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol _CNUILikenessFingerprintImpl;
@interface CNUILikenessFingerprint : NSObject <NSCopying> {

	id<_CNUILikenessFingerprintImpl> _impl;

}
+(id)fingerprintForContacts:(id)arg1 scope:(id)arg2 ;
+(id)fingerprintForContact:(id)arg1 ;
+(id)fingerprintForScope:(id)arg1 ;
+(id)fingerprintForContactIdentifier:(id)arg1 ;
+(id)implForContact:(id)arg1 ;
+(id)publicFingerprintForContact:(id)arg1 ;
+(id)fingerprintForData:(id)arg1 ;
+(id)publicFingerprintForContacts:(id)arg1 scope:(id)arg2 ;
-(id)initWithImpl:(id)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(BOOL)hasContactIdentifier:(id)arg1 ;
-(id)initWithContacts:(id)arg1 scope:(id)arg2 ;
@end

