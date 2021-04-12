/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/

#import <ARKit/ARTechnique.h>
#import <ARKit/ARTechniqueDelegate.h>

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
-(id)nodeName;
-(void)technique:(id)arg1 didOutputResultData:(id)arg2 timestamp:(double)arg3 context:(id)arg4 ;
-(void)requestResultDataAtTimestamp:(double)arg1 context:(id)arg2 ;
-(NSSet *)synchronizedResultDataClasses;
-(void)technique:(id)arg1 didFailWithError:(id)arg2 ;
-(BOOL)reconfigurableFrom:(id)arg1 ;
-(void)_recursivelyGatherData:(id)arg1 fromContext:(id)arg2 ;
-(id)initWithSynchronizedResultDataClasses:(id)arg1 ;
@end

