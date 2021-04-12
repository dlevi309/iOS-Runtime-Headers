/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorOperation : NSOperation {

	NSManagedObjectID* _attachmentID;
	NSManagedObjectContext* _managedObjectContext;
	ICAttachmentModel* _attachmentModel;

}

@property (retain) NSManagedObjectID * attachmentID;                           //@synthesize attachmentID=_attachmentID - In the implementation block
@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) ICAttachmentModel * attachmentModel;                        //@synthesize attachmentModel=_attachmentModel - In the implementation block
@property (nonatomic,readonly) unsigned long long type; 
-(unsigned long long)type;
-(void)cancel;
-(void)main;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectID *)attachmentID;
-(void)setAttachmentID:(NSManagedObjectID *)arg1 ;
-(ICAttachmentModel *)attachmentModel;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
-(id)initWithAttachmentManagedObjectID:(id)arg1 ;
@end

