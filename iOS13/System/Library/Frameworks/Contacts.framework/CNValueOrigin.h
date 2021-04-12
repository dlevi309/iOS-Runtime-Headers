/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <Contacts/Contacts-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString;

@interface CNValueOrigin : NSObject <NSCopying, NSSecureCoding> {

	NSString* _localizedApplicationName;
	NSString* _donationIdentifier;

}

@property (nonatomic,copy,readonly) NSString * localizedApplicationName;              //@synthesize localizedApplicationName=_localizedApplicationName - In the implementation block
@property (nonatomic,copy,readonly) NSString * donationIdentifier;                    //@synthesize donationIdentifier=_donationIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithLocalizedApplicationName:(id)arg1 donationIdentifier:(id)arg2 ;
-(NSString *)localizedApplicationName;
-(NSString *)donationIdentifier;
@end

