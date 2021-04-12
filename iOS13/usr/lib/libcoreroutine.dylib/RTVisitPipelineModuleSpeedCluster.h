/*
* Generated on Monday, March 1, 2021 at 2:34:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(NSString *)description;
-(id)process:(id)arg1 ;
-(id)initWithHyperParameter:(id)arg1 ;
-(void)clearWorkingVisit;
-(void)clearAndAddForcedExitSignalToClusters:(id)arg1 ;
@end

