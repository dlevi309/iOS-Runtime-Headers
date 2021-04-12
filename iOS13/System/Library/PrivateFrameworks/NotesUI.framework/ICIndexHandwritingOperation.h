/*
* Generated on Monday, March 1, 2021 at 2:34:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <Foundation/NSOperation.h>

@class NSManagedObjectID, NSManagedObjectContext;

@interface ICIndexHandwritingOperation : NSOperation {

	NSManagedObjectID* _attachmentObjectID;
	NSManagedObjectContext* _context;

}

@property (nonatomic,retain) NSManagedObjectID * attachmentObjectID;              //@synthesize attachmentObjectID=_attachmentObjectID - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * context;                    //@synthesize context=_context - In the implementation block
+(id)sharedOperationQueue;
-(void)main;
-(NSManagedObjectContext *)context;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentObjectID;
@end

