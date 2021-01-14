/*
* Generated on Thursday, January 14, 2021 at 2:25:44 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGNamingAnalyzer.h>

@class PGGraphNamingProcessor, NSString;

@interface PGNamingCMMAnalyzer : NSObject <PGNamingAnalyzer> {

	PGGraphNamingProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphNamingProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)name;
-(PGGraphNamingProcessor *)processor;
-(id)initWithNamingProcessor:(id)arg1 ;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(void)findCMMMatchesFromSharingRecords:(id)arg1 graph:(id)arg2 withProgressBlock:(/*^block*/id)arg3 ;
@end

