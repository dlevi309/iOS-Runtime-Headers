/*
* Generated on Monday, March 1, 2021 at 2:33:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/EmailDaemon.framework/EmailDaemon
*/


@class NSString;

@interface EDSearchableIndexPersistenceAttachmentDatum : NSObject {

	NSString* _attachmentPersistentID;
	NSString* _messagePersistentID;
	NSString* _attachmentID;
	NSString* _name;

}

@property (nonatomic,copy) NSString * attachmentPersistentID;              //@synthesize attachmentPersistentID=_attachmentPersistentID - In the implementation block
@property (nonatomic,copy) NSString * messagePersistentID;                 //@synthesize messagePersistentID=_messagePersistentID - In the implementation block
@property (nonatomic,copy) NSString * attachmentID;                        //@synthesize attachmentID=_attachmentID - In the implementation block
@property (nonatomic,copy) NSString * name;                                //@synthesize name=_name - In the implementation block
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setMessagePersistentID:(NSString *)arg1 ;
-(NSString *)messagePersistentID;
-(NSString *)attachmentID;
-(void)setAttachmentID:(NSString *)arg1 ;
-(NSString *)attachmentPersistentID;
-(void)setAttachmentPersistentID:(NSString *)arg1 ;
@end

