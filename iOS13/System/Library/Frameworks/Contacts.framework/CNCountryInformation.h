/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSString;

@interface CNCountryInformation : NSObject <NSCopying> {

	NSString* _isoCountryCode;
	NSString* _name;
	NSString* _phoneticName;

}

@property (nonatomic,copy,readonly) NSString * isoCountryCode;              //@synthesize isoCountryCode=_isoCountryCode - In the implementation block
@property (nonatomic,copy,readonly) NSString * name;                        //@synthesize name=_name - In the implementation block
@property (nonatomic,copy,readonly) NSString * phoneticName;                //@synthesize phoneticName=_phoneticName - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(NSString *)name;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)isoCountryCode;
-(NSString *)phoneticName;
-(id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 ;
@end

