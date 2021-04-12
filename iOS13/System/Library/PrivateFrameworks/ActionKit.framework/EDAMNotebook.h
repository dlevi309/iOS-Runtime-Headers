/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, EDAMPublishing, NSArray, EDAMBusinessNotebook, EDAMUser, EDAMNotebookRestrictions, EDAMNotebookRecipientSettings;

@interface EDAMNotebook : FATObject {

	NSString* _guid;
	NSString* _name;
	NSNumber* _updateSequenceNum;
	NSNumber* _defaultNotebook;
	NSNumber* _serviceCreated;
	NSNumber* _serviceUpdated;
	EDAMPublishing* _publishing;
	NSNumber* _published;
	NSString* _stack;
	NSArray* _sharedNotebookIds;
	NSArray* _sharedNotebooks;
	EDAMBusinessNotebook* _businessNotebook;
	EDAMUser* _contact;
	EDAMNotebookRestrictions* _restrictions;
	EDAMNotebookRecipientSettings* _recipientSettings;

}

@property (nonatomic,retain) NSString * guid;                                                //@synthesize guid=_guid - In the implementation block
@property (nonatomic,retain) NSString * name;                                                //@synthesize name=_name - In the implementation block
@property (nonatomic,retain) NSNumber * updateSequenceNum;                                   //@synthesize updateSequenceNum=_updateSequenceNum - In the implementation block
@property (nonatomic,retain) NSNumber * defaultNotebook;                                     //@synthesize defaultNotebook=_defaultNotebook - In the implementation block
@property (nonatomic,retain) NSNumber * serviceCreated;                                      //@synthesize serviceCreated=_serviceCreated - In the implementation block
@property (nonatomic,retain) NSNumber * serviceUpdated;                                      //@synthesize serviceUpdated=_serviceUpdated - In the implementation block
@property (nonatomic,retain) EDAMPublishing * publishing;                                    //@synthesize publishing=_publishing - In the implementation block
@property (nonatomic,retain) NSNumber * published;                                           //@synthesize published=_published - In the implementation block
@property (nonatomic,retain) NSString * stack;                                               //@synthesize stack=_stack - In the implementation block
@property (nonatomic,retain) NSArray * sharedNotebookIds;                                    //@synthesize sharedNotebookIds=_sharedNotebookIds - In the implementation block
@property (nonatomic,retain) NSArray * sharedNotebooks;                                      //@synthesize sharedNotebooks=_sharedNotebooks - In the implementation block
@property (nonatomic,retain) EDAMBusinessNotebook * businessNotebook;                        //@synthesize businessNotebook=_businessNotebook - In the implementation block
@property (nonatomic,retain) EDAMUser * contact;                                             //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) EDAMNotebookRestrictions * restrictions;                        //@synthesize restrictions=_restrictions - In the implementation block
@property (nonatomic,retain) EDAMNotebookRecipientSettings * recipientSettings;              //@synthesize recipientSettings=_recipientSettings - In the implementation block
+(id)structName;
+(id)structFields;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(EDAMUser *)contact;
-(void)setContact:(EDAMUser *)arg1 ;
-(EDAMNotebookRestrictions *)restrictions;
-(void)setRestrictions:(EDAMNotebookRestrictions *)arg1 ;
-(void)setStack:(NSString *)arg1 ;
-(NSString *)stack;
-(void)setGuid:(NSString *)arg1 ;
-(NSString *)guid;
-(void)setPublishing:(EDAMPublishing *)arg1 ;
-(void)setPublished:(NSNumber *)arg1 ;
-(NSNumber *)published;
-(NSNumber *)updateSequenceNum;
-(void)setUpdateSequenceNum:(NSNumber *)arg1 ;
-(NSNumber *)serviceCreated;
-(void)setServiceCreated:(NSNumber *)arg1 ;
-(NSNumber *)serviceUpdated;
-(void)setServiceUpdated:(NSNumber *)arg1 ;
-(EDAMNotebookRecipientSettings *)recipientSettings;
-(void)setRecipientSettings:(EDAMNotebookRecipientSettings *)arg1 ;
-(NSNumber *)defaultNotebook;
-(void)setDefaultNotebook:(NSNumber *)arg1 ;
-(EDAMPublishing *)publishing;
-(NSArray *)sharedNotebookIds;
-(void)setSharedNotebookIds:(NSArray *)arg1 ;
-(NSArray *)sharedNotebooks;
-(void)setSharedNotebooks:(NSArray *)arg1 ;
-(EDAMBusinessNotebook *)businessNotebook;
-(void)setBusinessNotebook:(EDAMBusinessNotebook *)arg1 ;
@end

