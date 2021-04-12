/*
* Generated on Monday, March 1, 2021 at 2:33:26 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <Home/HFAnalyticsEvent.h>

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent : HFAnalyticsEvent {

	unsigned long long _numCamerasWithRecording;
	unsigned long long _iCloudUpgradeOfferPresented;
	unsigned long long _iCloudPlanUpgradeState;

}

@property (assign,nonatomic) unsigned long long numCamerasWithRecording;                  //@synthesize numCamerasWithRecording=_numCamerasWithRecording - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudUpgradeOfferPresented;              //@synthesize iCloudUpgradeOfferPresented=_iCloudUpgradeOfferPresented - In the implementation block
@property (assign,nonatomic) unsigned long long iCloudPlanUpgradeState;                   //@synthesize iCloudPlanUpgradeState=_iCloudPlanUpgradeState - In the implementation block
-(id)initWithData:(id)arg1 ;
-(id)payload;
-(unsigned long long)numCamerasWithRecording;
-(unsigned long long)iCloudUpgradeOfferPresented;
-(unsigned long long)iCloudPlanUpgradeState;
-(void)setNumCamerasWithRecording:(unsigned long long)arg1 ;
-(void)setICloudUpgradeOfferPresented:(unsigned long long)arg1 ;
-(void)setICloudPlanUpgradeState:(unsigned long long)arg1 ;
@end

