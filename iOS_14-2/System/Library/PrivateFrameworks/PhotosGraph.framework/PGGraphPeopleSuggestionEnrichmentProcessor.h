/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSString;

@interface PGGraphPeopleSuggestionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_performPeopleSuggestionLearningWithManager:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)_performPeopleSuggestionForHomeWithManager:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
@end

