/*
* Generated on Monday, March 1, 2021 at 2:32:53 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Notes.framework/Notes
*/

#import <CoreData/NSManagedObject.h>

@class NSString, NoteObject;

@interface NoteAttachmentObject : NSManagedObject

@property (nonatomic,retain) NSString * contentID; 
@property (nonatomic,retain) NSString * filename; 
@property (nonatomic,retain) NSString * mimeType; 
@property (nonatomic,retain) NoteObject * note; 
+(id)attachmentDirectoryURLForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(id)attachmentDirectoryPathForAttachmentObjectID:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateFileForAttachment:(id)arg1 toCurrentAttachmentPathWithError:(id*)arg2 ;
+(BOOL)applyFileAttributesForAttachment:(id)arg1 error:(id*)arg2 ;
+(BOOL)migrateAttachmentRelatedFilesInContext:(id)arg1 error:(id*)arg2 ;
-(void)prepareForDeletion;
-(BOOL)persistAttachmentData:(id)arg1 error:(id*)arg2 ;
-(id)attachmentDataFileURLWithError:(id*)arg1 ;
-(id)attachmentDataWithError:(id*)arg1 ;
@end

