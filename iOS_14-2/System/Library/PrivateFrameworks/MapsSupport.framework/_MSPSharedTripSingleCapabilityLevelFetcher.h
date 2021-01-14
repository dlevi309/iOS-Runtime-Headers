/*
* Generated on Thursday, January 14, 2021 at 2:24:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSupport.framework/MapsSupport
*/

#import <libobjc.A.dylib/MSPSharedTripCapabilityLevelFetcherObserver.h>

@protocol OS_dispatch_queue;
@class MSPSharedTripContact, NSTimer, NSObject, NSString;

@interface _MSPSharedTripSingleCapabilityLevelFetcher : NSObject <MSPSharedTripCapabilityLevelFetcherObserver> {

	MSPSharedTripContact* _contact;
	/*^block*/id _completion;
	_MSPSharedTripSingleCapabilityLevelFetcher* _keepAliveReference;
	double _timeoutInterval;
	NSTimer* _timeoutTimer;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _callbackQueue;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)start;
-(void)_finish;
-(void)_timeout;
-(void)capabilityLevelsDidUpdate;
-(id)initWithContact:(id)arg1 timeout:(double)arg2 queue:(id)arg3 completion:(/*^block*/id)arg4 ;
@end

