/*
* Generated on Thursday, January 14, 2021 at 2:20:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@protocol GEOAnalyticsPipelineProxy;
@class geo_isolater, NSString;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {

	id<GEOAnalyticsPipelineProxy> _proxy;
	BOOL _evDirectionsFeedbackAllowed;
	BOOL _directionsFeedbackAllowed;
	BOOL _evDirectionsFeedbackAuth;
	id _evDirectionsFeedbackAllowedListener;
	id _evDirectionsFeedbackAuthListener;
	geo_isolater* _evInfoIsolator;

}

@property (nonatomic,readonly) BOOL evDirectionsFeedbackAuth;               //@synthesize evDirectionsFeedbackAuth=_evDirectionsFeedbackAuth - In the implementation block
@property (assign,nonatomic) BOOL evDirectionsFeedbackAllowed;              //@synthesize evDirectionsFeedbackAllowed=_evDirectionsFeedbackAllowed - In the implementation block
@property (assign,nonatomic) BOOL directionsFeedbackAllowed;                //@synthesize directionsFeedbackAllowed=_directionsFeedbackAllowed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(id)init;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 ;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 completion:(/*^block*/id)arg5 completionQueue:(id)arg6 ;
-(BOOL)GEOImproveMaps;
-(void)reportDailySettingsStates:(id)arg1 completion:(/*^block*/id)arg2 completionQueue:(id)arg3 ;
-(void)reportDailySettingsStates:(id)arg1 ;
-(void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3 ;
-(void)setEvDirectionsFeedbackAllowed:(BOOL)arg1 ;
-(void)reportDailyUsageCountType:(int)arg1 usageString:(id)arg2 usageBool:(id)arg3 appId:(id)arg4 ;
-(BOOL)evDirectionsFeedbackAllowed;
-(void)initiateUploadOfType:(int)arg1 ;
-(void)setDirectionsFeedbackAllowed:(BOOL)arg1 ;
-(BOOL)AppleInternal;
-(void)reportMapKitCountType:(int)arg1 ;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3 ;
-(BOOL)getEvDirectionsFeedbackAuth;
-(BOOL)PlatformDiagAndUsage;
-(BOOL)directionsFeedbackAllowed;
-(void)reportCuratedCollectionActionType:(unsigned long long)arg1 collectionId:(unsigned long long)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(BOOL)getEvDirectionsFeedbackAllowed;
-(int)functionalAppGroup;
-(id)getEvalStatus;
-(void)flushEvalData;
-(BOOL)evDirectionsFeedbackAuth;
-(BOOL)PlatformDiagAndUsageOrAppleInternal;
-(void)toggleEVDirectionsFeedbackAllowed;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setEvalMode:(BOOL)arg1 ;
-(void)runAggregationTasks;
-(void)dealloc;
-(BOOL)GEOMapsLocationAuth;
@end

