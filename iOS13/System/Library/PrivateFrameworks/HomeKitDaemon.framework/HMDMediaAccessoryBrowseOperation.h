/*
* Generated on Monday, March 1, 2021 at 2:33:31 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HMFoundation/HMFOperation.h>
#import <libobjc.A.dylib/HMFLogging.h>

@protocol HMFLocking;
@class HMDMediaEndpoint, NSArray, NSString;

@interface HMDMediaAccessoryBrowseOperation : HMFOperation <HMFLogging> {

	id<HMFLocking> _lock;
	void* _session;
	unsigned _endpointFeatures;
	HMDMediaEndpoint* _endpoint;
	NSArray* _outputDevices;
	NSString* _accessoryIdentifier;

}

@property (copy,readonly) NSString * accessoryIdentifier;              //@synthesize accessoryIdentifier=_accessoryIdentifier - In the implementation block
@property (assign) unsigned endpointFeatures;                          //@synthesize endpointFeatures=_endpointFeatures - In the implementation block
@property (readonly) HMDMediaEndpoint * endpoint;                      //@synthesize endpoint=_endpoint - In the implementation block
@property (readonly) NSArray * outputDevices;                          //@synthesize outputDevices=_outputDevices - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)logCategory;
+(double)defaultTimeout;
-(void)dealloc;
-(void)cancel;
-(HMDMediaEndpoint *)endpoint;
-(void)main;
-(NSArray *)outputDevices;
-(unsigned)endpointFeatures;
-(NSString *)accessoryIdentifier;
-(id)initWithAccessoryIdentifier:(id)arg1 ;
-(id)initWithAccessoryIdentifier:(id)arg1 timeout:(double)arg2 ;
-(void)setEndpointFeatures:(unsigned)arg1 ;
@end

