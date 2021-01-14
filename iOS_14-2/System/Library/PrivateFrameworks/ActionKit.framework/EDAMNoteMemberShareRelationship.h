/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMNoteShareRelationshipRestrictions;

@interface EDAMNoteMemberShareRelationship : FATObject {

	NSString* _displayName;
	NSNumber* _recipientUserId;
	NSNumber* _privilege;
	EDAMNoteShareRelationshipRestrictions* _restrictions;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                                            //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * recipientUserId;                                        //@synthesize recipientUserId=_recipientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                              //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) EDAMNoteShareRelationshipRestrictions * restrictions;              //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                                           //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setDisplayName:(NSString *)arg1 ;
-(EDAMNoteShareRelationshipRestrictions *)restrictions;
-(void)setRestrictions:(EDAMNoteShareRelationshipRestrictions *)arg1 ;
-(NSString *)displayName;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientUserId;
-(void)setRecipientUserId:(NSNumber *)arg1 ;
@end

