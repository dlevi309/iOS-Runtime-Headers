/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphHealthRecording.h>

@class NSString;

@interface PGGraphHealthRecorder : NSObject <PGGraphHealthRecording>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordGraphRebuildFailure;
-(void)recordGraphRebuildsCancellation;
-(void)recordGraphRebuildTimeout;
-(void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2 ;
-(void)recordHighlightEnrichmentsCancellation;
-(void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2 ;
@end

