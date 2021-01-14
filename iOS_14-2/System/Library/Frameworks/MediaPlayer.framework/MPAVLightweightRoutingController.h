/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@protocol MPAVLightweightRoutingControllerDelegate;
@class AVOutputDeviceDiscoverySession, NSString, NSArray;

@interface MPAVLightweightRoutingController : NSObject {

	AVOutputDeviceDiscoverySession* _avDiscoverySession;
	long long _discoveryMode;
	NSString* _name;
	id<MPAVLightweightRoutingControllerDelegate> _delegate;

}

@property (assign,nonatomic) long long discoveryMode;                                                    //@synthesize discoveryMode=_discoveryMode - In the implementation block
@property (nonatomic,readonly) NSArray * pickedRoutes; 
@property (getter=isDevicePresenceDetected,nonatomic,readonly) BOOL devicePresenceDetected; 
@property (nonatomic,copy,readonly) NSString * name;                                                     //@synthesize name=_name - In the implementation block
@property (assign,nonatomic,__weak) id<MPAVLightweightRoutingControllerDelegate> delegate;               //@synthesize delegate=_delegate - In the implementation block
-(long long)discoveryMode;
-(id<MPAVLightweightRoutingControllerDelegate>)delegate;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(NSString *)name;
-(id)initWithName:(id)arg1 ;
-(void)setDelegate:(id<MPAVLightweightRoutingControllerDelegate>)arg1 ;
-(id)description;
-(NSArray *)pickedRoutes;
-(void)setDiscoveryMode:(long long)arg1 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
-(BOOL)isDevicePresenceDetected;
-(void)dealloc;
@end

