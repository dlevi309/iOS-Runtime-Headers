/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setDisplayName:(NSString *)arg1 ;
-(NSString *)displayName;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(EDAMUserIdentity *)recipientUserIdentity;
-(void)setRecipientUserIdentity:(EDAMUserIdentity *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
@end

