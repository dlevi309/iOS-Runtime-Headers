/*
* Generated on Thursday, January 14, 2021 at 2:27:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeAI.framework/HomeAI
*/

@class HMIHomePersonManager, NSSet;


@protocol HMDCameraRecordingSessionVideoAnalyzer <NSObject>
@property (retain) HMIHomePersonManager * homePersonManager; 
@property (copy) NSSet * externalPersonManagers; 
@property (__weak) id<HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate; 
@required
-(id<HMDCameraRecordingSessionVideoAnalyzerDelegate>)delegate;
-(void)setDelegate:(id)arg1;
-(HMIHomePersonManager *)homePersonManager;
-(void)analyzeFragment:(id)arg1;
-(void)clearPendingFragments;
-(void)setHomePersonManager:(id)arg1;
-(NSSet *)externalPersonManagers;
-(void)setExternalPersonManagers:(id)arg1;

@end

