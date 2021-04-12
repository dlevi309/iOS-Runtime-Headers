/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)descriptionForType:(long long)arg1 ;
+(id)handleWithStringValue:(id)arg1 ;
+(id)handleWithEmailAddress:(id)arg1 ;
+(id)handleWithPhoneNumber:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(long long)type;
-(NSString *)stringValue;
-(void)configureBuilder:(id)arg1 ;
-(id)initWithStringValue:(id)arg1 type:(long long)arg2 ;
@end

