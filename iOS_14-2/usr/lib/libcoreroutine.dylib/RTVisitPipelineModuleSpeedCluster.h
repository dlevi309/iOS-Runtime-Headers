/*
* Generated on Thursday, January 14, 2021 at 2:26:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /usr/lib/libcoreroutine.dylib
*/

#import <libobjc.A.dylib/RTVisitPipelineModule.h>

@class RTVisit, RTLocation, RTVisitHyperParameter, NSString;

@interface RTVisitPipelineModuleSpeedCluster : NSObject <RTVisitPipelineModule> {

	RTVisit* _workingVisit;
	RTLocation* _lastPoint;
	RTVisitHyperParameter* _hyperParameter;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)clearWorkingVisit;
-(id)init;
-(NSString *)description;
-(id)process:(id)arg1 ;
-(void)clearAndAddForcedExitSignalToClusters:(id)arg1 ;
-(id)initWithHyperParameter:(id)arg1 ;
@end

