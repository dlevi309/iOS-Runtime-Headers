/*
* Generated on Thursday, January 14, 2021 at 2:26:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@class ICAttachment, ICSelectorDelayer, PKDrawing, NSManagedObjectContext;

@interface ICInlineDrawingChangeCoalescer : NSObject {

	ICAttachment* _attachment;
	ICSelectorDelayer* _processChangesSelectorDelayer;
	PKDrawing* _latestDrawing;
	unsigned long long _numberOfChanges;
	NSManagedObjectContext* _workerContext;

}

@property (nonatomic,retain) ICAttachment * attachment;                                      //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * processChangesSelectorDelayer;              //@synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer - In the implementation block
@property (nonatomic,retain) PKDrawing * latestDrawing;                                      //@synthesize latestDrawing=_latestDrawing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfChanges;                             //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
@property (nonatomic,retain) NSManagedObjectContext * workerContext;                         //@synthesize workerContext=_workerContext - In the implementation block
+(id)missingOrOutdatedHandwritingSummaryAttachmentIDsInContext:(id)arg1 ;
+(id)handwritingSummaryAttachmentsInContext:(id)arg1 ;
+(void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1 ;
+(void)purgeHandwritingSummariesInContext:(id)arg1 ;
-(ICAttachment *)attachment;
-(id)initWithAttachment:(id)arg1 ;
-(BOOL)hasChanges;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(void)dealloc;
-(void)drawingDataDidChange:(id)arg1 ;
-(void)processIndexableContentWithCompletion:(/*^block*/id)arg1 ;
-(void)setWorkerContext:(NSManagedObjectContext *)arg1 ;
-(NSManagedObjectContext *)workerContext;
-(void)updateNowIfNecessary;
-(unsigned long long)numberOfChanges;
-(void)mergeDrawingChanges;
-(void)setLatestDrawing:(PKDrawing *)arg1 ;
-(void)setNumberOfChanges:(unsigned long long)arg1 ;
-(ICSelectorDelayer *)processChangesSelectorDelayer;
-(id)retrieveAndClearLatestDrawingToMerge;
-(void)mergeDrawingWithDrawing:(id)arg1 ;
-(PKDrawing *)latestDrawing;
-(void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2 ;
-(void)setProcessChangesSelectorDelayer:(ICSelectorDelayer *)arg1 ;
@end

