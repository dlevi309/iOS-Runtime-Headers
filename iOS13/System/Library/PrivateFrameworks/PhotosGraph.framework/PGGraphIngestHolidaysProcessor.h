/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
@end

