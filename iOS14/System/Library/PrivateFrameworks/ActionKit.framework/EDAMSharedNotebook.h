/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSNumber, NSString, EDAMSharedNotebookRecipientSettings;

@interface EDAMSharedNotebook : FATObject {

	NSNumber* _id;
	NSNumber* _userId;
	NSString* _notebookGuid;
	NSString* _email;
	NSNumber* _recipientIdentityId;
	NSNumber* _notebookModifiable;
	NSNumber* _serviceCreated;
	NSNumber* _serviceUpdated;
	NSString* _globalId;
	NSString* _username;
	NSNumber* _privilege;
	EDAMSharedNotebookRecipientSettings* _recipientSettings;
	NSNumber* _sharerUserId;
	NSString* _recipientUsername;
	NSNumber* _recipientUserId;
	NSNumber* _serviceAssigned;

}

@property (nonatomic,retain) NSNumber * id;                                                        //@synthesize id=_id - In the implementation block
@property (nonatomic,retain) NSNumber * userId;                                                    //@synthesize userId=_userId - In the implementation block
@property (nonatomic,retain) NSString * notebookGuid;                                              //@synthesize notebookGuid=_notebookGuid - In the implementation block
@property (nonatomic,retain) NSString * email;                                                     //@synthesize email=_email - In the implementation block
@property (nonatomic,retain) NSNumber * recipientIdentityId;                                       //@synthesize recipientIdentityId=_recipientIdentityId - In the implementation block
@property (nonatomic,retain) NSNumber * notebookModifiable;                                        //@synthesize notebookModifiable=_notebookModifiable - In the implementation block
@property (nonatomic,retain) NSNumber * serviceCreated;                                            //@synthesize serviceCreated=_serviceCreated - In the implementation block
@property (nonatomic,retain) NSNumber * serviceUpdated;                                            //@synthesize serviceUpdated=_serviceUpdated - In the implementation block
@property (nonatomic,retain) NSString * globalId;                                                  //@synthesize globalId=_globalId - In the implementation block
@property (nonatomic,retain) NSString * username;                                                  //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                                                 //@synthesize privilege=_privilege - In the implementation block
@property (nonatomic,retain) EDAMSharedNotebookRecipientSettings * recipientSettings;              //@synthesize recipientSettings=_recipientSettings - In the implementation block
@property (nonatomic,retain) NSNumber * sharerUserId;                                              //@synthesize sharerUserId=_sharerUserId - In the implementation block
@property (nonatomic,retain) NSString * recipientUsername;                                         //@synthesize recipientUsername=_recipientUsername - In the implementation block
@property (nonatomic,retain) NSNumber * recipientUserId;                                           //@synthesize recipientUserId=_recipientUserId - In the implementation block
@property (nonatomic,retain) NSNumber * serviceAssigned;                                           //@synthesize serviceAssigned=_serviceAssigned - In the implementation block
+(id)structName;
+(id)structFields;
-(void)setUserId:(NSNumber *)arg1 ;
-(NSNumber *)id;
-(NSNumber *)userId;
-(void)setEmail:(NSString *)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(void)setId:(NSNumber *)arg1 ;
-(NSString *)username;
-(NSString *)email;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)notebookGuid;
-(void)setNotebookGuid:(NSString *)arg1 ;
-(NSNumber *)sharerUserId;
-(void)setSharerUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientUserId;
-(void)setRecipientUserId:(NSNumber *)arg1 ;
-(NSNumber *)recipientIdentityId;
-(void)setRecipientIdentityId:(NSNumber *)arg1 ;
-(NSNumber *)serviceCreated;
-(void)setServiceCreated:(NSNumber *)arg1 ;
-(NSNumber *)serviceUpdated;
-(void)setServiceUpdated:(NSNumber *)arg1 ;
-(NSNumber *)serviceAssigned;
-(void)setServiceAssigned:(NSNumber *)arg1 ;
-(NSNumber *)notebookModifiable;
-(void)setNotebookModifiable:(NSNumber *)arg1 ;
-(NSString *)globalId;
-(void)setGlobalId:(NSString *)arg1 ;
-(EDAMSharedNotebookRecipientSettings *)recipientSettings;
-(void)setRecipientSettings:(EDAMSharedNotebookRecipientSettings *)arg1 ;
-(NSString *)recipientUsername;
-(void)setRecipientUsername:(NSString *)arg1 ;
@end

