/*
* Generated on Monday, March 1, 2021 at 2:30:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

#import <libobjc.A.dylib/GEOAnalyticsPipelineProxy.h>

@protocol GEOAnalyticsPipelineProxy;
@class NSString;

@interface GEOAnalyticsPipelineManager : NSObject <GEOAnalyticsPipelineProxy> {

	id<GEOAnalyticsPipelineProxy> _proxy;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedManager;
+(void)useProxyClass:(Class)arg1 ;
-(id)init;
-(void)shortSessionValuesWithCompletion:(/*^block*/id)arg1 ;
-(void)setShortSessionValues:(id)arg1 withCompletion:(/*^block*/id)arg2 ;
-(void)reportLogMsgType:(int)arg1 handlingPolicyId:(int)arg2 logMsg:(id)arg3 completion:(/*^block*/id)arg4 completionQueue:(id)arg5 ;
-(void)reportMapKitCountType:(int)arg1 appId:(id)arg2 completion:(/*^block*/id)arg3 completionQueue:(id)arg4 ;
-(void)setEvalMode:(BOOL)arg1 ;
-(void)flushEvalData;
-(void)initiateUploadOfType:(int)arg1 ;
-(void)showEvalDataWithPredicate:(id)arg1 visitorBlock:(/*^block*/id)arg2 summaryBlock:(/*^block*/id)arg3 ;
-(id)getEvalStatus;
-(BOOL)PlatformDiagAndUsage;
-(BOOL)AppleInternal;
-(BOOL)GEOImproveMaps;
-(BOOL)GEOMapsLocationAuth;
-(BOOL)PlatformDiagAndUsageOrAppleInternal;
-(void)logToDiagAndUsageUnderBugId:(id)arg1 filePrefix:(id)arg2 logData:(id)arg3 ;
-(void)reportMapKitCountType:(int)arg1 ;
@end

