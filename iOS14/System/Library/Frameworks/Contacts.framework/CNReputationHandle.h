/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNReputationHandle : NSObject <NSCopying> {

	NSString* _stringValue;
	long long _type;

}

@property (nonatomic,copy,readonly) NSString * stringValue;              //@synthesize stringValue=_stringValue - In the implementation block
@property (nonatomic,readonly) long long type;                           //@synthesize type=_type - In the implementation block
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithPhoneNumber:(id)arg1 ;
+(id)descriptionForType:(long long)arg1 ;
+(id)handleWithStringValue:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 type:(long long)arg2 ;
-(NSString *)stringValue;
-(id)description;
-(long long)type;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)configureBuilder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

