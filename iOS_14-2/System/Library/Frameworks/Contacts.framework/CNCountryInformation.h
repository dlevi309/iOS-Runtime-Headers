/*
* Generated on Thursday, January 14, 2021 at 2:20:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)phoneticName;
-(id)initWithISOCountryCode:(id)arg1 name:(id)arg2 phoneticName:(id)arg3 ;
-(NSString *)isoCountryCode;
-(NSString *)name;
-(id)description;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

