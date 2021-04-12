/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>
#import <libobjc.A.dylib/PGGraphDataModelEnrichmentHealthRecording.h>

@class NSString;

@interface PGGraphPhotosHighlightEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor, PGGraphDataModelEnrichmentHealthRecording> {

	unsigned long long _highlightTailorOptions;

}

@property (assign,nonatomic) unsigned long long highlightTailorOptions;              //@synthesize highlightTailorOptions=_highlightTailorOptions - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)backgroundJobName;
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
-(id)init;
-(id)initWithHighlightTailorOptions:(unsigned long long)arg1 ;
-(void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)arg1 ;
-(void)recordCurrentProcessingDate:(id)arg1 lastProcessingDate:(id)arg2 graphHealthRecorder:(id)arg3 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_updateHighlightTitlesForKind:(unsigned short)arg1 highlightTailor:(id)arg2 graphUpdateInventory:(id)arg3 alreadyEnrichedHighlights:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
-(void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1 ;
-(unsigned long long)highlightTailorOptions;
-(void)setHighlightTailorOptions:(unsigned long long)arg1 ;
@end

