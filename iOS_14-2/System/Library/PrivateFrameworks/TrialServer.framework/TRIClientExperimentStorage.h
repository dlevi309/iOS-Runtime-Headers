/*
* Generated on Thursday, January 14, 2021 at 2:26:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TrialServer.framework/TrialServer
*/


@protocol TRIPaths;
@interface TRIClientExperimentStorage : NSObject {

	id<TRIPaths> _paths;

}
-(id)init;
-(id)initWithPaths:(id)arg1 ;
-(id)loadArtifactWithExperiment:(id)arg1 isFilePresent:(BOOL*)arg2 ;
-(id)_urlForExperiment:(id)arg1 ;
-(BOOL)saveArtifact:(id)arg1 ;
-(BOOL)removeArtifactWithExperiment:(id)arg1 ;
@end

