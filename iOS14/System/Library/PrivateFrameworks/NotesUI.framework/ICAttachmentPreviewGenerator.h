/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NotesUI.framework/NotesUI
*/

#import <libobjc.A.dylib/ICProgressIndicatorTrackerDelegate.h>

@protocol OS_dispatch_queue;
@class ICAttachmentPreviewGeneratorOperationQueue, NSMapTable, NSMutableSet, NSMutableDictionary, ICProgressIndicatorTracker, NSMutableOrderedSet, NSObject, NSString;

@interface ICAttachmentPreviewGenerator : NSObject <ICProgressIndicatorTrackerDelegate> {

	AB _shouldGenerateAttachmentsWhenReachable;
	ICAttachmentPreviewGeneratorOperationQueue* _asyncGeneratorQueue;
	ICAttachmentPreviewGeneratorOperationQueue* _costlyGeneratorQueue;
	ICAttachmentPreviewGeneratorOperationQueue* _generatorQueue;
	NSMapTable* _lastOperationForAttachmentID;
	NSMutableSet* _attachmentIDsPending;
	NSMutableDictionary* _attachmentIDsProgress;
	ICProgressIndicatorTracker* _progressTracker;
	ICAttachmentPreviewGeneratorOperationQueue* _postProcessingQueue;
	NSMutableOrderedSet* _postProcessingIDsPending;
	unsigned long long _postProcessingRequestIndex;
	unsigned long long _previewGenerationState;
	NSObject*<OS_dispatch_queue> _previewQueue;
	NSObject*<OS_dispatch_queue> _previewProgressQueue;

}

@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * asyncGeneratorQueue;               //@synthesize asyncGeneratorQueue=_asyncGeneratorQueue - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * costlyGeneratorQueue;              //@synthesize costlyGeneratorQueue=_costlyGeneratorQueue - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * generatorQueue;                    //@synthesize generatorQueue=_generatorQueue - In the implementation block
@property (nonatomic,retain) NSMapTable * lastOperationForAttachmentID;                                      //@synthesize lastOperationForAttachmentID=_lastOperationForAttachmentID - In the implementation block
@property (nonatomic,retain) NSMutableSet * attachmentIDsPending;                                            //@synthesize attachmentIDsPending=_attachmentIDsPending - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * attachmentIDsProgress;                                    //@synthesize attachmentIDsProgress=_attachmentIDsProgress - In the implementation block
@property (nonatomic,retain) ICProgressIndicatorTracker * progressTracker;                                   //@synthesize progressTracker=_progressTracker - In the implementation block
@property (nonatomic,retain) ICAttachmentPreviewGeneratorOperationQueue * postProcessingQueue;               //@synthesize postProcessingQueue=_postProcessingQueue - In the implementation block
@property (nonatomic,retain) NSMutableOrderedSet * postProcessingIDsPending;                                 //@synthesize postProcessingIDsPending=_postProcessingIDsPending - In the implementation block
@property (assign) unsigned long long postProcessingRequestIndex;                                            //@synthesize postProcessingRequestIndex=_postProcessingRequestIndex - In the implementation block
@property (assign) unsigned long long previewGenerationState;                                                //@synthesize previewGenerationState=_previewGenerationState - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewQueue;                                      //@synthesize previewQueue=_previewQueue - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> previewProgressQueue;                              //@synthesize previewProgressQueue=_previewProgressQueue - In the implementation block
@property (assign,nonatomic) AB shouldGenerateAttachmentsWhenReachable;                                      //@synthesize shouldGenerateAttachmentsWhenReachable=_shouldGenerateAttachmentsWhenReachable - In the implementation block
@property (nonatomic,readonly) BOOL previewOperationsIdle; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedGenerator;
+(BOOL)ocrGenerationEnabled;
+(BOOL)imageClassificationEnabled;
+(void)setImageClassificationTemporarilyDisabled:(BOOL)arg1 ;
+(void)purgeImageClassificationsInContext:(id)arg1 ;
+(void)purgeOCRInContext:(id)arg1 ;
-(void)suspend;
-(id)init;
-(void)managedObjectContextDidSave:(id)arg1 ;
-(void)didReceiveMemoryWarning;
-(void)reachabilityChanged:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)previewQueue;
-(void)resume;
-(void)dealloc;
-(void)setPreviewQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(ICProgressIndicatorTracker *)progressTracker;
-(void)setProgressTracker:(ICProgressIndicatorTracker *)arg1 ;
-(void)generatePreviewsIfNeeded;
-(NSMapTable *)lastOperationForAttachmentID;
-(void)generatePreviewIfNeededForAttachmentWithObjectID:(id)arg1 ;
-(void)operationComplete:(id)arg1 ;
-(void)setLastOperationForAttachmentID:(NSMapTable *)arg1 ;
-(void)enableAutomaticPreviewGeneration;
-(ICAttachmentPreviewGeneratorOperationQueue *)costlyGeneratorQueue;
-(NSMutableSet *)attachmentIDsPending;
-(ICAttachmentPreviewGeneratorOperationQueue *)generatorQueue;
-(ICAttachmentPreviewGeneratorOperationQueue *)asyncGeneratorQueue;
-(BOOL)isPreviewGenerationSupported;
-(unsigned long long)previewGenerationState;
-(void)setPreviewGenerationState:(unsigned long long)arg1 ;
-(void)generatePendingPreviews;
-(id)missingOrOutdatedOCRSummaryAttachmentIDsInContext:(id)arg1 ;
-(id)missingOrOutdatedImageClassificationSummaryAttachmentIDsInContext:(id)arg1 ;
-(id)missingOrOutdatedMetaDataAttachmentIDsInContext:(id)arg1 ;
-(void)postProcessIfNeededForAttachment:(id)arg1 ;
-(ICAttachmentPreviewGeneratorOperationQueue *)postProcessingQueue;
-(NSMutableOrderedSet *)postProcessingIDsPending;
-(void)beginPostProcessingAfterDelayIfNecessaryWithForceDelay:(BOOL)arg1 ;
-(BOOL)previewOperationsIdle;
-(void)postProcessPendingPreviews;
-(unsigned long long)postProcessingRequestIndex;
-(void)setPostProcessingRequestIndex:(unsigned long long)arg1 ;
-(void)postProcessPreviewForAttachment:(id)arg1 ;
-(void)adjustUserTitleIfNecessaryForAttachment:(id)arg1 ;
-(void)attachmentNeedsPreviewGenerationNotification:(id)arg1 ;
-(void)generatePreviewIfNeededForAttachment:(id)arg1 ;
-(void)attachmentDidLoad:(id)arg1 ;
-(void)attachmentWillBeDeleted:(id)arg1 ;
-(void)mediaDidLoad:(id)arg1 ;
-(NSObject*<OS_dispatch_queue>)previewProgressQueue;
-(NSMutableDictionary *)attachmentIDsProgress;
-(void)generatePendingPreviewForAttachment:(id)arg1 ;
-(void)setShouldGenerateAttachmentsWhenReachable:(AB)arg1 ;
-(void)progressIndicatorTrackerStartAnimation;
-(void)progressIndicatorTrackerStopAnimation;
-(void)generateMissingOrOutdatedAttachmentMetaDataIfNeededInContext:(id)arg1 ;
-(void)attachmentNeedsPostProcessingNotification:(id)arg1 ;
-(void)cancelGenerationOfPendingPreviews;
-(void)disableAutomaticPreviewGeneration;
-(void)setProgress:(id)arg1 forObjectID:(id)arg2 ;
-(id)progressForObjectID:(id)arg1 ;
-(void)cancelIfNeededForAttachment:(id)arg1 ;
-(void)setAsyncGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setCostlyGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setGeneratorQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setAttachmentIDsPending:(NSMutableSet *)arg1 ;
-(void)setAttachmentIDsProgress:(NSMutableDictionary *)arg1 ;
-(void)setPostProcessingQueue:(ICAttachmentPreviewGeneratorOperationQueue *)arg1 ;
-(void)setPostProcessingIDsPending:(NSMutableOrderedSet *)arg1 ;
-(void)setPreviewProgressQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(AB)shouldGenerateAttachmentsWhenReachable;
@end

