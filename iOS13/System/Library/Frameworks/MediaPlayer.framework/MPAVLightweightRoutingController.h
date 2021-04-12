/*
* Generated on Monday, March 1, 2021 at 2:31:05 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)description;
-(NSString *)name;
-(id<MPAVLightweightRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<MPAVLightweightRoutingControllerDelegate>)arg1 ;
-(id)initWithName:(id)arg1 ;
-(void)setDiscoveryMode:(long long)arg1 ;
-(long long)discoveryMode;
-(BOOL)isDevicePresenceDetected;
-(NSArray *)pickedRoutes;
-(void)_availableOutputDevicesDidChangeNotification:(id)arg1 ;
-(void)_outputContextDevicesDidChangeNotification:(id)arg1 ;
@end

