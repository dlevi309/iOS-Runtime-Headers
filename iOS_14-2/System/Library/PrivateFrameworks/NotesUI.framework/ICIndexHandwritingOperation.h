/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSManagedObjectContext *)context;
-(void)main;
-(void)setContext:(NSManagedObjectContext *)arg1 ;
-(id)initWithAttachmentObjectID:(id)arg1 context:(id)arg2 ;
-(void)setAttachmentObjectID:(NSManagedObjectID *)arg1 ;
-(NSManagedObjectID *)attachmentObjectID;
@end

