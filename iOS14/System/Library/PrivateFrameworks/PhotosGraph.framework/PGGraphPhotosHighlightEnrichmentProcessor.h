/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(void)_logFirstTimeExperienceMetricsIfNeededWithManager:(id)arg1 ;
-(id)init;
-(unsigned long long)highlightTailorOptions;
-(void)recordCurrentProcessingDate:(id)arg1 lastProcessingDate:(id)arg2 graphHealthRecorder:(id)arg3 ;
-(void)setHighlightTailorOptions:(unsigned long long)arg1 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(id)initWithHighlightTailorOptions:(unsigned long long)arg1 ;
-(void)recordProcessingWasCancelledWithGraphHealthRecorder:(id)arg1 ;
@end

