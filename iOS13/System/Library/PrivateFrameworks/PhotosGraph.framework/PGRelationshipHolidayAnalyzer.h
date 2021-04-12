/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/

#import <libobjc.A.dylib/PGRelationshipAnalyzer.h>

@class PGGraphRelationshipProcessor, NSString;

@interface PGRelationshipHolidayAnalyzer : NSObject <PGRelationshipAnalyzer> {

	PGGraphRelationshipProcessor* _processor;

}

@property (nonatomic,__weak,readonly) PGGraphRelationshipProcessor * processor;              //@synthesize processor=_processor - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * name; 
-(NSString *)name;
-(PGGraphRelationshipProcessor *)processor;
-(void)runAnalysisWithProgressBlock:(/*^block*/id)arg1 ;
-(id)initWithRelationshipProcessor:(id)arg1 ;
-(id)_familyHolidayMomentsFromMomentNodes:(id)arg1 ;
@end

