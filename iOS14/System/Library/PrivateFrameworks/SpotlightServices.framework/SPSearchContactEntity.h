/*
* Generated on Thursday, January 14, 2021 at 2:26:10 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpotlightServices.framework/SpotlightServices
*/

#import <SpotlightServices/SPSearchEntity.h>

@class CNContact, NSString;

@interface SPSearchContactEntity : SPSearchEntity {

	CNContact* _contact;
	NSString* _contactIdentifier;

}

@property (retain) NSString * contactIdentifier;              //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)contactStore;
-(NSString *)contactIdentifier;
-(id)contact;
-(id)queryString;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithContactIdentifier:(id)arg1 ;
-(void)setContactIdentifier:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)tokenText;
-(BOOL)isPeopleSearch;
-(void)appendToQuery:(id)arg1 key:(id)arg2 value:(id)arg3 additions:(id)arg4 ;
@end

