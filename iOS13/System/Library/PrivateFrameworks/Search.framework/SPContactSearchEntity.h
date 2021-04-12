/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Search.framework/Search
*/

#import <Search/SPSearchEntity.h>

@class CNContact, NSString;

@interface SPContactSearchEntity : SPSearchEntity {

	CNContact* _contact;
	NSString* _contactIdentifier;

}

@property (retain) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactStore;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)contact;
-(NSString *)contactIdentifier;
-(id)initWithContactIdentifier:(id)arg1 ;
-(id)queryString;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(BOOL)isPeopleSearch;
-(BOOL)isScopedAppSearch;
-(id)tokenText;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end

