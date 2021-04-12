/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphHealthRecording.h>

@class NSString;

@interface PGGraphHealthRecorder : NSObject <PGGraphHealthRecording>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)recordNumberOfGraphRebuildsCancelled:(unsigned long long)arg1 ;
-(void)recordNumberOfGraphRebuildTimeouts:(unsigned long long)arg1 ;
-(void)recordNumberOfGraphRebuildFailures:(unsigned long long)arg1 ;
-(void)recordTimeBetweenGraphRebuildsWithLastRebuildDate:(id)arg1 currentRebuildDate:(id)arg2 ;
-(void)recordNumberOfUnscheduledRebuilds:(unsigned long long)arg1 ;
-(void)recordTimeBetweenHighlightEnrichmentsWithLastEnrichmentDate:(id)arg1 currentEnrichmentDate:(id)arg2 ;
-(void)recordNumberOfHighlightEnrichmentsCancelled:(unsigned long long)arg1 ;
-(void)recordNumberOfHighlightEnrichmentTimeouts:(unsigned long long)arg1 ;
@end

