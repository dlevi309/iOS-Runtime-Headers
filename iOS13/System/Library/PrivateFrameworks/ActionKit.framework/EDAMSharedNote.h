/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, EDAMIdentity;

@interface EDAMSharedNote : FATObject {

	NSNumber* _sharerUserID;
	EDAMIdentity* _recipientIdentity;
	NSNumber* _privilege;
	NSNumber* _serviceCreated;
	NSNumber* _serviceUpdated;
	NSNumber* _serviceAssigned;

}

@property (nonatomic,retain) NSNumber * sharerUserID;                       //@synthesize sharerUserID=_sharerUserID - In the implementation block
@property (nonatomic,retain) EDAMIdentity * recipientIdentity;              //@synthesize recipientIdentity=_recipientIdentity - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                          //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) NSNumber * serviceCreated;                     //@synthesize serviceCreated=_serviceCreated - In the implementation block
@property (nonatomic,retain) NSNumber * serviceUpdated;                     //@synthesize serviceUpdated=_serviceUpdated - In the implementation block
@property (nonatomic,retain) NSNumber * serviceAssigned;                    //@synthesize serviceAssigned=_serviceAssigned - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSNumber *)sharerUserID;
-(void)setSharerUserID:(NSNumber *)arg1 ;
-(EDAMIdentity *)recipientIdentity;
-(void)setRecipientIdentity:(EDAMIdentity *)arg1 ;
-(NSNumber *)serviceCreated;
-(void)setServiceCreated:(NSNumber *)arg1 ;
-(NSNumber *)serviceUpdated;
-(void)setServiceUpdated:(NSNumber *)arg1 ;
-(NSNumber *)serviceAssigned;
-(void)setServiceAssigned:(NSNumber *)arg1 ;
@end

