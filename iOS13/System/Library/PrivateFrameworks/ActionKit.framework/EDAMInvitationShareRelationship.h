/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, EDAMUserIdentity, NSNumber;

@interface EDAMInvitationShareRelationship : FATObject {

	NSString* _displayName;
	EDAMUserIdentity* _recipientUserIdentity;
	NSNumber* _privilege;
	NSNumber* _sharerUserId;

}

@property (nonatomic,retain) NSString * displayName;                                //@synthesize displayName=_displayName - In the implementation block
@property (nonatomic,retain) EDAMUserIdentity * recipientUserIdentity;              //@synthesize recipientUserIdentity=_recipientUserIdentity - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                  //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                               //@synthesize sharerUserId=_sharerUserId - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)displayName;
-(void)setDisplayName:(NSString *)arg1 ;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(EDAMUserIdentity *)recipientUserIdentity;
-(void)setRecipientUserIdentity:(EDAMUserIdentity *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
@end

