/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGGraphHealthRecording <NSObject>
@required
-(void)recordGraphRebuildFailure;
-(void)recordGraphRebuildsCancellation;
-(void)recordGraphRebuildTimeout;
-(void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2;
-(void)recordHighlightEnrichmentsCancellation;
-(void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2;

@end

