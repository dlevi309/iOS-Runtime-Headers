/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


#import <NotesUI/NotesUI-Structs.h>
@class NSOperationQueue, NSManagedObjectContext;

@interface ICNotePreviewGenerator : NSObject {

	BOOL _suspended;
	NSOperationQueue* _operationQueue;
	NSManagedObjectContext* _workerContext;

}

@property (nonatomic,retain) NSOperationQueue * operationQueue;                   //@synthesize operationQueue=_operationQueue - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * workerContext;              //@synthesize workerContext=_workerContext - In the implementation block
@property (assign,getter=isSuspended,nonatomic) BOOL suspended;                   //@synthesize suspended=_suspended - In the implementation block
+(id)sharedGenerator;
-(void)setOperationQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)operationQueue;
-(BOOL)isSuspended;
-(id)init;
-(void)setSuspended:(BOOL)arg1 ;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)workerContext;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 cache:(id)arg4 cacheKey:(id)arg5 completionBlock:(/*^block*/id)arg6 ;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
-(id)previewURLForNote:(id)arg1 ;
-(id)renderPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 ;
-(id)drawingAttachmentAtStartOfNote:(id)arg1 ;
-(void)fetchPreviewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 completionBlock:(/*^block*/id)arg4 ;
-(id)previewImageForNote:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 ;
-(void)previewImageWithDrawingAttachment:(id)arg1 minSize:(CGSize)arg2 scale:(double)arg3 appearanceInfo:(id)arg4 cache:(id)arg5 cacheKey:(id)arg6 completionBlock:(/*^block*/id)arg7 ;
@end

