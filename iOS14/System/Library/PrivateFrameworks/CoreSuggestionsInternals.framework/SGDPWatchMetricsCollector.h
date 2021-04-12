/*
* Generated on Thursday, January 14, 2021 at 2:25:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreSuggestionsInternals.framework/CoreSuggestionsInternals
*/

#import <libobjc.A.dylib/IDSServiceDelegate.h>

@protocol SGXPCActivityManagerProtocol, OS_dispatch_queue;
@class IDSService, NSObject, SGQuickResponsesStore, NSString;

@interface SGDPWatchMetricsCollector : NSObject <IDSServiceDelegate> {

	id<SGXPCActivityManagerProtocol> _xpcActivityManager;
	IDSService* _idsService;
	NSObject*<OS_dispatch_queue> _queue;
	SGQuickResponsesStore* _store;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)sendEngagementToDPUsingData:(id)arg1 ;
+(id)recorderForKey:(id)arg1 ;
+(BOOL)recordResponse:(id)arg1 numTimesToLog:(unsigned long long)arg2 recorder:(id)arg3 experimentID:(id)arg4 treatmentID:(id)arg5 ;
+(id)getExperimentTreatmentTuple;
+(/*^block*/id)onDeltaRowWithXPCActivityManager:(id)arg1 activity:(id)arg2 records:(id)arg3 ;
+(/*^block*/id)onCompletionWithXPCActivityManager:(id)arg1 activity:(id)arg2 records:(id)arg3 experimentID:(id)arg4 treatmentID:(id)arg5 idsService:(id)arg6 destinationDevice:(id)arg7 ;
-(void)service:(id)arg1 account:(id)arg2 identifier:(id)arg3 didSendWithSuccess:(BOOL)arg4 error:(id)arg5 ;
-(void)service:(id)arg1 account:(id)arg2 incomingData:(id)arg3 fromID:(id)arg4 context:(id)arg5 ;
-(id)initAsDelegate;
-(id)initWithActivityManager:(id)arg1 ;
-(id)initWithActivityManager:(id)arg1 idsService:(id)arg2 queue:(id)arg3 store:(id)arg4 ;
-(BOOL)syncQREngagementToDeviceWithActivity:(id)arg1 ;
@end

