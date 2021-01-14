/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphDataModelEnrichmentProcessor.h>

@class NSString;

@interface PGGraphSearchEnrichmentProcessor : NSObject <PGGraphDataModelEnrichmentProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(double)backgroundJobTimeout;
+(BOOL)supportsBackgroundJob;
+(id)backgroundJobName;
-(void)enrichDataModelWithManager:(id)arg1 graphUpdateInventory:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(void)_processGraphUpdateInventory:(id)arg1 manager:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
-(BOOL)_shouldProcessGraphUpdate:(id)arg1 ;
@end

