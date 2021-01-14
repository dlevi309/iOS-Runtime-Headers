/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


@class PXPeopleProgressDataSource, NSTimer;

@interface PXPeopleProgressManager : NSObject {

	BOOL _monitoringProgress;
	BOOL _processingComplete;
	PXPeopleProgressDataSource* _dataSource;
	double _updateInterval;
	double _progress;
	unsigned long long _processingStatus;
	NSTimer* _statusTimer;

}

@property (assign) double progress;                                                            //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) NSTimer * statusTimer;                                            //@synthesize statusTimer=_statusTimer - In the implementation block
@property (nonatomic,retain) PXPeopleProgressDataSource * dataSource;                          //@synthesize dataSource=_dataSource - In the implementation block
@property (assign,getter=isMonitoringProgress,nonatomic) BOOL monitoringProgress;              //@synthesize monitoringProgress=_monitoringProgress - In the implementation block
@property (assign,nonatomic) double updateInterval;                                            //@synthesize updateInterval=_updateInterval - In the implementation block
@property (readonly) BOOL processingComplete;                                                  //@synthesize processingComplete=_processingComplete - In the implementation block
@property (readonly) BOOL featureUnlocked; 
@property (readonly) BOOL shouldUseInterstitial; 
@property (readonly) BOOL shouldUseProgressFooter; 
@property (assign,nonatomic) unsigned long long processingStatus;                              //@synthesize processingStatus=_processingStatus - In the implementation block
-(double)updateInterval;
-(void)setUpdateInterval:(double)arg1 ;
-(double)progress;
-(BOOL)hasSubstantialProcessingUsingMinAssetCount:(BOOL)arg1 ;
-(id)init;
-(void)_scheduleNextUpdate;
-(id)initWithDataSource:(id)arg1 ;
-(BOOL)processingComplete;
-(void)setMonitoringProgress:(BOOL)arg1 ;
-(PXPeopleProgressDataSource *)dataSource;
-(unsigned long long)processingStatus;
-(void)setDataSource:(PXPeopleProgressDataSource *)arg1 ;
-(BOOL)isMonitoringProgress;
-(void)_updateWithStatus:(unsigned long long)arg1 progress:(double)arg2 ;
-(NSTimer *)statusTimer;
-(void)setStatusTimer:(NSTimer *)arg1 ;
-(void)setProgress:(double)arg1 ;
-(void)setProcessingStatus:(unsigned long long)arg1 ;
-(BOOL)featureUnlocked;
-(BOOL)shouldUseInterstitial;
-(BOOL)shouldUseProgressFooter;
-(BOOL)_progressComplete:(double)arg1 ;
-(void)_updateStatusForProgress:(double)arg1 processCount:(unsigned long long)arg2 ;
-(void)updateProgressWithForce:(BOOL)arg1 ;
@end

