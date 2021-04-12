/*
* Generated on Thursday, January 14, 2021 at 2:28:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRCDeviceQueryDelegate;
@class NSSet;

@interface TVRCDeviceQuery : NSObject {

	id<TVRCDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg1 ;
+(void)fetchActiveEndpointUIDWithCompletion:(/*^block*/id)arg1 ;
-(NSSet *)devices;
-(id<TVRCDeviceQueryDelegate>)delegate;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<TVRCDeviceQueryDelegate>)arg1 ;
-(void)dealloc;
@end

