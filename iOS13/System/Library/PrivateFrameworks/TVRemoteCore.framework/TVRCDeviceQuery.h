/*
* Generated on Monday, March 1, 2021 at 2:35:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TVRemoteCore.framework/TVRemoteCore
*/


@protocol TVRCDeviceQueryDelegate;
@class NSSet;

@interface TVRCDeviceQuery : NSObject {

	id<TVRCDeviceQueryDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<TVRCDeviceQueryDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,copy,readonly) NSSet * devices; 
+(void)fetchActiveEndpointUIDWithCompletion:(/*^block*/id)arg1 ;
+(id)_allDiscoveredDevices;
+(void)_allDiscoveredDevicesDidUpdate:(id)arg1 ;
-(void)dealloc;
-(id<TVRCDeviceQueryDelegate>)delegate;
-(void)setDelegate:(id<TVRCDeviceQueryDelegate>)arg1 ;
-(void)stop;
-(void)start;
-(NSSet *)devices;
@end

