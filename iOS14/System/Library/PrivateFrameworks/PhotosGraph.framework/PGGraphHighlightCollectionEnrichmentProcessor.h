/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSDictionary, NSString;

@interface PGGraphHighlightCollectionEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor> {

	NSDictionary* _options;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(id)initWithOptions:(id)arg1 ;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_enrichYearHighlights:(id)arg1 monthsHighlights:(id)arg2 withManager:(id)arg3 enrichmentprogressBlock:(/*^block*/id)arg4 ;
@end

