/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/


@protocol OS_dispatch_queue;
@class ICAttachment, ICSelectorDelayer, PKDrawing, NSObject;

@interface ICInlineDrawingChangeCoalescer : NSObject {

	ICAttachment* _attachment;
	ICSelectorDelayer* _processChangesSelectorDelayer;
	PKDrawing* _latestDrawing;
	unsigned long long _numberOfChanges;
	NSObject*<OS_dispatch_queue> _mergeQueue;

}

@property (nonatomic,retain) ICAttachment * attachment;                                      //@synthesize attachment=_attachment - In the implementation block
@property (nonatomic,retain) ICSelectorDelayer * processChangesSelectorDelayer;              //@synthesize processChangesSelectorDelayer=_processChangesSelectorDelayer - In the implementation block
@property (nonatomic,retain) PKDrawing * latestDrawing;                                      //@synthesize latestDrawing=_latestDrawing - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfChanges;                             //@synthesize numberOfChanges=_numberOfChanges - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mergeQueue;                        //@synthesize mergeQueue=_mergeQueue - In the implementation block
+(id)missingOrOutdatedHandwritingSummaryAttachmentsInContext:(id)arg1 ;
+(id)handwritingSummaryAttachmentsInContext:(id)arg1 ;
+(void)generateMissingOrOutdatedHandwritingSummariesInContext:(id)arg1 ;
+(void)purgeHandwritingSummariesInContext:(id)arg1 ;
-(void)dealloc;
-(BOOL)hasChanges;
-(ICAttachment *)attachment;
-(void)setAttachment:(ICAttachment *)arg1 ;
-(id)initWithAttachment:(id)arg1 ;
-(void)setLatestDrawing:(PKDrawing *)arg1 ;
-(PKDrawing *)latestDrawing;
-(void)drawingDataDidChange:(id)arg1 ;
-(unsigned long long)numberOfChanges;
-(void)setNumberOfChanges:(unsigned long long)arg1 ;
-(NSObject*<OS_dispatch_queue>)mergeQueue;
-(void)setMergeQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)processIndexableContentWithCompletion:(/*^block*/id)arg1 ;
-(void)updateNowIfNecessary;
-(void)mergeDrawingChanges;
-(ICSelectorDelayer *)processChangesSelectorDelayer;
-(id)retrieveAndClearLatestDrawingToMerge;
-(void)mergeDrawingWithDrawing:(id)arg1 ;
-(void)updateVersionIfNeededForAttachment:(id)arg1 withDrawing:(id)arg2 ;
-(void)setProcessChangesSelectorDelayer:(ICSelectorDelayer *)arg1 ;
@end

