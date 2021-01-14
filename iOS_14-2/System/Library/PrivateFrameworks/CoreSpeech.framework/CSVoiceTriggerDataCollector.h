/*
* Generated on Thursday, January 14, 2021 at 2:24:38 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSpeech.framework/CoreSpeech
*/

#import <libobjc.A.dylib/CSSiriClientBehaviorMonitorDelegate.h>
#import <libobjc.A.dylib/CSVoiceTriggerEnabledMonitorDelegate.h>

@protocol OS_dispatch_queue;
@class NSMutableArray, NSObject, NSDate, NSArray, NSString;

@interface CSVoiceTriggerDataCollector : NSObject <CSSiriClientBehaviorMonitorDelegate, CSVoiceTriggerEnabledMonitorDelegate> {

	NSMutableArray* _vteiList;
	NSObject*<OS_dispatch_queue> _queue;
	NSDate* _lastVTEnableDate;
	NSDate* _lastVTDisableDate;
	NSArray* _privacyApprovedFields;

}

@property (nonatomic,retain) NSMutableArray * vteiList;                       //@synthesize vteiList=_vteiList - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSDate * lastVTEnableDate;                       //@synthesize lastVTEnableDate=_lastVTEnableDate - In the implementation block
@property (nonatomic,retain) NSDate * lastVTDisableDate;                      //@synthesize lastVTDisableDate=_lastVTDisableDate - In the implementation block
@property (nonatomic,retain) NSArray * privacyApprovedFields;                 //@synthesize privacyApprovedFields=_privacyApprovedFields - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)siriClientBehaviorMonitor:(id)arg1 didStopStream:(id)arg2 withEventUUID:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 willStopStream:(id)arg2 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(void)siriClientBehaviorMonitor:(id)arg1 willStartStreamWithContext:(id)arg2 option:(id)arg3 ;
-(void)siriClientBehaviorMonitor:(id)arg1 didStartStreamWithContext:(id)arg2 successfully:(BOOL)arg3 option:(id)arg4 withEventUUID:(id)arg5 ;
-(NSMutableArray *)vteiList;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)CSVoiceTriggerEnabledMonitor:(id)arg1 didReceiveEnabled:(BOOL)arg2 ;
-(id)fetchVoiceTriggerHeartBeatMetrics;
-(void)_createAndSubmitRejectLoggingDictWithSource:(id)arg1 withPHSAcceptInfo:(id)arg2 ;
-(id)_filteredVTEIArray;
-(void)_submitToggleReport;
-(void)addVTRejectEntry:(id)arg1 truncateData:(BOOL)arg2 ;
-(void)addVTAcceptEntryAndSubmit:(id)arg1 ;
-(void)setVteiList:(NSMutableArray *)arg1 ;
-(NSDate *)lastVTEnableDate;
-(void)setLastVTEnableDate:(NSDate *)arg1 ;
-(NSDate *)lastVTDisableDate;
-(void)setLastVTDisableDate:(NSDate *)arg1 ;
-(NSArray *)privacyApprovedFields;
-(void)setPrivacyApprovedFields:(NSArray *)arg1 ;
@end

