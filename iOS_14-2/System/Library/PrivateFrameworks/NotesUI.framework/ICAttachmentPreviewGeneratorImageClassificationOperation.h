/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSManagedObjectContext *)managedObjectContext;
-(void)setManagedObjectContext:(NSManagedObjectContext *)arg1 ;
-(void)main;
-(ICAttachmentModel *)attachmentModel;
-(unsigned long long)type;
-(void)setAttachmentModel:(ICAttachmentModel *)arg1 ;
@end

