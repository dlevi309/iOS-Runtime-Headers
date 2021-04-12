/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/

#import <ARKitCore/ARTechnique.h>
#import <ARKitCore/ARTechniqueDelegate.h>

@protocol OS_dispatch_semaphore;
@class NSMutableArray, NSObject, ARCircularArray, NSMutableDictionary, NSSet, NSString;

@interface ARSplitTechniqueSynchronizerTechnique : ARTechnique <ARTechniqueDelegate> {

	NSMutableArray* _lastReceivedResults;
	NSObject*<OS_dispatch_semaphore> _lastReceivedResultsSemaphore;
	ARCircularArray* _contextsWaitingForSynchronizationData;
	NSMutableDictionary* _pendingResults;
	NSSet* _synchronizedResultDataClasses;

}

@property (nonatomic,readonly) NSSet * synchronizedResultDataClasses;              //@synthesize synchronizedResultDataClasses=_synchronizedResultDataClasses - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isEqual:(id)arg1 ;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(NSSet *)synchronizedResultDataClasses;
-(void)_recursivelyGatherData:(id)arg1 fromContext:(id)arg2 ;
-(id)initWithSynchronizedResultDataClasses:(id)arg1 ;
@end

