/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestLocationDisambiguationProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)removeDuplicateFromCityNames:(id)arg1 graph:(id)arg2 progressBlock:(/*^block*/id)arg3 ;
@end

