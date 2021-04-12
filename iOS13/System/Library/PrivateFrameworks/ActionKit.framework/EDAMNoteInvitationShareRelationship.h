/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber;

@interface EDAMNoteInvitationShareRelationship : FATObject {

	NSString* _displayName;
	NSNumber* _recipientIdentityId;
	NSNumber* _privilege;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                      //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) NSNumber * recipientIdentityId;              //@synthesize recipientIdentityId=_recipientIdentityId - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                        //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                     //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientIdentityId;
-(void)setRecipientIdentityId:(NSNumber *)arg1 ;
@end

