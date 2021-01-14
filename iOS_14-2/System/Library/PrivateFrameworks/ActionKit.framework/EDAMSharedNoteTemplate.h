/*
* Generated on Thursday, January 14, 2021 at 2:27:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ActionKit/FATObject.h>

@class NSString, NSNumber, NSArray;

@interface EDAMSharedNoteTemplate : FATObject {

	NSString* _noteGuid;
	NSNumber* _recipientThreadId;
	NSArray* _recipientContacts;
	NSNumber* _privilege;

}

@property (nonatomic,retain) NSString * noteGuid;                       //@synthesize noteGuid=_noteGuid - In the implementation block
@property (nonatomic,retain) NSNumber * recipientThreadId;              //@synthesize recipientThreadId=_recipientThreadId - In the implementation block
@property (nonatomic,retain) NSArray * recipientContacts;               //@synthesize recipientContacts=_recipientContacts - In the implementation block
@property (nonatomic,retain) NSNumber * privilege;                      //@synthesize privilege=_privilege - In the implementation block
+(id)structName;
+(id)structFields;
-(NSNumber *)privilege;
-(void)setPrivilege:(NSNumber *)arg1 ;
-(NSString *)noteGuid;
-(void)setNoteGuid:(NSString *)arg1 ;
-(NSNumber *)recipientThreadId;
-(void)setRecipientThreadId:(NSNumber *)arg1 ;
-(NSArray *)recipientContacts;
-(void)setRecipientContacts:(NSArray *)arg1 ;
@end

