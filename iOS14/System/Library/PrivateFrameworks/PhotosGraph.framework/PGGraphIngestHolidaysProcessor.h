/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGGraphIngestProcessor.h>

@class NSString;

@interface PGGraphIngestHolidaysProcessor : NSObject <PGGraphIngestProcessor>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)runWithGraphUpdate:(id)arg1 progressBlock:(/*^block*/id)arg2 ;
-(void)insertHolidaysWithMomentNodes:(id)arg1 graph:(id)arg2 locale:(id)arg3 progressBlock:(/*^block*/id)arg4 ;
-(BOOL)shouldRunWithGraphUpdate:(id)arg1 ;
-(void)insertHolidaysBetweenLocalDate:(id)arg1 andLocalDate:(id)arg2 graph:(id)arg3 locale:(id)arg4 progressBlock:(/*^block*/id)arg5 ;
@end

