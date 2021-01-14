/*
* Generated on Thursday, January 14, 2021 at 2:20:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, CNGroup, CNChangeHistoryAnchor, NSNumber;

@interface CNChangeHistoryGroupChange : NSObject <NSSecureCoding> {

	NSString* _groupIdentifier;
	long long _changeType;
	CNGroup* _group;
	CNChangeHistoryAnchor* _changeAnchor;
	NSNumber* _changeID;
	NSString* _externalID;
	NSString* _externalURI;
	NSString* _externalModificationTag;

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNGroup * group;                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,retain) NSString * externalURI;                            //@synthesize externalURI=_externalURI - In the implementation block
@property (nonatomic,retain) NSString * externalModificationTag;                //@synthesize externalModificationTag=_externalModificationTag - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setGroup:(CNGroup *)arg1 ;
-(CNGroup *)group;
-(void)setExternalModificationTag:(NSString *)arg1 ;
-(void)setChangeType:(long long)arg1 ;
-(NSString *)externalURI;
-(long long)changeType;
-(NSString *)groupIdentifier;
-(void)setExternalID:(NSString *)arg1 ;
-(NSString *)externalID;
-(NSString *)externalModificationTag;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(CNChangeHistoryAnchor *)changeAnchor;
-(void)setChangeID:(NSNumber *)arg1 ;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setExternalURI:(NSString *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSNumber *)changeID;
@end

