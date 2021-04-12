/*
* Generated on Monday, March 1, 2021 at 2:30:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

}

@property (assign,nonatomic) long long changeType;                              //@synthesize changeType=_changeType - In the implementation block
@property (nonatomic,retain) CNGroup * group;                                   //@synthesize group=_group - In the implementation block
@property (nonatomic,retain) CNChangeHistoryAnchor * changeAnchor;              //@synthesize changeAnchor=_changeAnchor - In the implementation block
@property (nonatomic,retain) NSNumber * changeID;                               //@synthesize changeID=_changeID - In the implementation block
@property (nonatomic,retain) NSString * externalID;                             //@synthesize externalID=_externalID - In the implementation block
@property (nonatomic,readonly) NSString * groupIdentifier;                      //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setGroup:(CNGroup *)arg1 ;
-(long long)changeType;
-(NSString *)groupIdentifier;
-(CNGroup *)group;
-(NSNumber *)changeID;
-(void)setChangeType:(long long)arg1 ;
-(CNChangeHistoryAnchor *)changeAnchor;
-(NSString *)externalID;
-(id)initWithIdentifier:(id)arg1 changeType:(long long)arg2 changeAnchor:(id)arg3 changeID:(id)arg4 externalID:(id)arg5 ;
-(void)setChangeAnchor:(CNChangeHistoryAnchor *)arg1 ;
-(void)setChangeID:(NSNumber *)arg1 ;
-(void)setExternalID:(NSString *)arg1 ;
@end

