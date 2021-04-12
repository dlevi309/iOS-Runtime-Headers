/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPContainerObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, NSString;

@interface MSPContainerPolicyObserver : NSObject <MSPContainerObserver> {

	unsigned long long _lastKnownItemCount;
	unsigned long long _minimumDeletesForDataLoss;
	double _minimumDeleteRatioForDataLoss;
	NSObject*<OS_dispatch_queue> _observerQueue;
	BOOL _keepMetrics;
	unsigned long long _dataLossPolicyOffenses;

}

@property (assign,nonatomic) BOOL keepMetrics;                                       //@synthesize keepMetrics=_keepMetrics - In the implementation block
@property (assign,nonatomic) unsigned long long dataLossPolicyOffenses;              //@synthesize dataLossPolicyOffenses=_dataLossPolicyOffenses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)container:(id)arg1 didEditWithNewContents:(id)arg2 orderedEdits:(id)arg3 cause:(long long)arg4 context:(id)arg5 ;
-(BOOL)keepMetrics;
-(unsigned long long)dataLossPolicyOffenses;
-(void)setDataLossPolicyOffenses:(unsigned long long)arg1 ;
-(id)observationQueueForContainer:(id)arg1 ;
-(void)containerWillEraseContents:(id)arg1 ;
-(void)setContainerItemCount:(unsigned long long)arg1 ;
-(void)setKeepMetrics:(BOOL)arg1 ;
@end

