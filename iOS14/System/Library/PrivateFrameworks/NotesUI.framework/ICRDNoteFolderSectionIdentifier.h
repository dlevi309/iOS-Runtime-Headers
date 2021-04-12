/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <NotesUI/ICRDNoteSectionIdentifier.h>

@class NSManagedObjectID;

@interface ICRDNoteFolderSectionIdentifier : ICRDNoteSectionIdentifier {

	NSManagedObjectID* _noteContainerObjectID;

}

@property (nonatomic,retain) NSManagedObjectID * noteContainerObjectID;              //@synthesize noteContainerObjectID=_noteContainerObjectID - In the implementation block
-(id)init;
-(void)setNoteContainerObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)noteContainerObjectID;
@end

