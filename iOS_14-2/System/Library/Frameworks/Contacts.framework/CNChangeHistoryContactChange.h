/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,copy) NSArray * linkedContactIdentifiers;                  //@synthesize linkedContactIdentifiers=_linkedContactIdentifiers - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSNumber * imagesChanged;                          //@synthesize imagesChanged=_imagesChanged - In the implementation block
@property (nonatomic,retain) NSString * externalURI;                            //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * externalModificationTag;                //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * contactIdentifier;                    //@synthesize contactIdentifier=_contactIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(NSString *)contactIdentifier;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(NSString *)externalURI;
-(long long)changeType;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)externalModificationTag;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CNChangeHistoryAnchor *)changeAnchor;
-(void)setChangeID:(NSNumber *)arg1 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setExternalURI:(NSString *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)changeID;
-(void)setImagesChanged:(NSNumber *)arg1 ;
-(NSNumber *)imagesChanged;
-(NSArray *)linkedContactIdentifiers;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 imagesChanged:(id)arg6 ;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 ;
-(void)setLinkedContactIdentifiers:(NSArray *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

