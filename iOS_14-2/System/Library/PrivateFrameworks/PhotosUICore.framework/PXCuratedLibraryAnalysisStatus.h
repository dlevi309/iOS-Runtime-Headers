/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PXObservable.h>
#import <libobjc.A.dylib/PXMutableCuratedLibraryAnalysisStatus.h>

@protocol PXCuratedLibraryEventTracker;
@class NSString, NSTimer, PXCuratedLibraryAssetsDataSourceManager;

@interface PXCuratedLibraryAnalysisStatus : PXObservable <PXMutableCuratedLibraryAnalysisStatus> {

	long long _numberOfRequestsToCycleThroughAlternateTitles;
	NSTimer* _alternateTitleTimer;
	BOOL _isDaysMonthsYearsStructureEnabled;
	BOOL _isDevicePlugged;
	BOOL _hasBattery;
	float _progress;
	float _displayProgress;
	PXCuratedLibraryAssetsDataSourceManager* _dataSourceManager;
	id<PXCuratedLibraryEventTracker> _eventTracker;
	long long _state;
	NSString* _localizedTitle;
	NSString* _localizedDescription;
	long long _alternateTitleIndex;

}

@property (nonatomic,readonly) long long alternateTitleIndex;                                            //@synthesize alternateTitleIndex=_alternateTitleIndex - In the implementation block
@property (nonatomic,readonly) BOOL hasBattery;                                                          //@synthesize hasBattery=_hasBattery - In the implementation block
@property (nonatomic,readonly) PXCuratedLibraryAssetsDataSourceManager * dataSourceManager;              //@synthesize dataSourceManager=_dataSourceManager - In the implementation block
@property (nonatomic,retain) id<PXCuratedLibraryEventTracker> eventTracker;                              //@synthesize eventTracker=_eventTracker - In the implementation block
@property (nonatomic,readonly) long long state;                                                          //@synthesize state=_state - In the implementation block
@property (nonatomic,readonly) NSString * localizedTitle;                                                //@synthesize localizedTitle=_localizedTitle - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescription;                                          //@synthesize localizedDescription=_localizedDescription - In the implementation block
@property (nonatomic,readonly) float progress;                                                           //@synthesize progress=_progress - In the implementation block
@property (nonatomic,readonly) float displayProgress;                                                    //@synthesize displayProgress=_displayProgress - In the implementation block
@property (nonatomic,readonly) BOOL isDaysMonthsYearsStructureEnabled;                                   //@synthesize isDaysMonthsYearsStructureEnabled=_isDaysMonthsYearsStructureEnabled - In the implementation block
@property (nonatomic,readonly) BOOL isDevicePlugged;                                                     //@synthesize isDevicePlugged=_isDevicePlugged - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setLocalizedTitle:(NSString *)arg1 ;
-(id<PXCuratedLibraryEventTracker>)eventTracker;
-(NSString *)localizedTitle;
-(id)initWithDataSourceManager:(id)arg1 ;
-(float)progress;
-(void)didPerformChanges;
-(void)alternateTitleIndexDidChange;
-(NSString *)description;
-(PXCuratedLibraryAssetsDataSourceManager *)dataSourceManager;
-(NSString *)localizedDescription;
-(void)setProgress:(float)arg1 ;
-(void)setState:(long long)arg1 ;
-(long long)state;
-(BOOL)hasBattery;
-(void)setLocalizedDescription:(NSString *)arg1 ;
-(void)setIsDevicePlugged:(BOOL)arg1 ;
-(void)setIsDaysMonthsYearsStructureEnabled:(BOOL)arg1 ;
-(void)setDisplayProgress:(float)arg1 ;
-(long long)alternateTitleIndex;
-(id)_initWithDataSourceManager:(id)arg1 ;
-(float)displayProgress;
-(BOOL)isDaysMonthsYearsStructureEnabled;
-(BOOL)isDevicePlugged;
-(void)startCyclingThroughAlternateTitles;
-(void)stopCyclingThroughAlternateTitles;
-(void)_handleAlternateTitleTimer:(id)arg1 ;
-(void)cycleToNextAlternateTitle;
-(void)_updateEventsTracking;
-(void)setEventTracker:(id<PXCuratedLibraryEventTracker>)arg1 ;
-(void)dealloc;
@end

