/*
* Generated on Monday, March 1, 2021 at 2:30:44 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNContact, NSArray, CNChangeHistoryAnchor, NSNumber;

@interface CNChangeHistoryContactChange : NSObject <NSSecureCoding> {

	NSString* _contactIdentifier;
	long long _changeType;
	CNContact* _contact;
	NSArray* _linkedContactIdentifiers;
	CNChangeHistoryAnchor* _changeAnchor;
	NSNumber* _changeID;
	NSString* _externalID;
	NSNumber* _imagesChanged;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * linkedContactIdentifiers;                  //@synthesize linkedContactIdentifiers=_linkedContactIdentifiers - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSNumber * imagesChanged;                          //@synthesize imagesChanged=_imagesChanged - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(long long)changeType;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)contactIdentifier;
-(NSNumber *)changeID;
-(void)setChangeType:(long long)arg1 ;
-(CNChangeHistoryAnchor *)changeAnchor;
-(NSString *)externalID;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setChangeID:(NSNumber *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6 ;
-(NSNumber *)imagesChanged;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 ;
-(NSArray *)linkedContactIdentifiers;
-(void)setLinkedContactIdentifiers:(NSArray *)arg1 ;
-(void)setImagesChanged:(NSNumber *)arg1 ;
@end

