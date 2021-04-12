/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICAttachmentPreviewGeneratorOperation.h>

@class NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorImageClassificationOperation : ICAttachmentPreviewGeneratorOperation {

	NSManagedObjectContext* _managedObjectContext;
	ICAttachmentModel* _attachmentModel;

}

@property (retain) NSManagedObjectContext * managedObjectContext;              //@synthesize managedObjectContext=_managedObjectContext - In the implementation block
@property (retain) ICAttachmentModel * attachmentModel;                        //@synthesize attachmentModel=_attachmentModel - In the implementation block
-(unsigned long long)type;
-(void)main;
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(ICAttachmentModel *)attachmentModel;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
@end

