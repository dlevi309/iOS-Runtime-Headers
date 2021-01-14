/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/AVKit.framework/AVKit
*/

#import <AVKit/AVBonjourServiceDelegate.h>
#import <AVKit/AVAirTransportDelegate.h>

@protocol AVAirMessageNotificationCenterDelegate, OS_dispatch_queue;
@class AVBonjourService, AVPlayerItem, NSObject, NSMutableSet, NSString;

@interface AVAirMessageNotificationCenter : NSObject <AVBonjourServiceDelegate, AVAirTransportDelegate> {

	BOOL _started;
	id<AVAirMessageNotificationCenterDelegate> _delegate;
	AVBonjourService* _mainService;
	AVPlayerItem* _nowPlayingPlayerItem;
	NSObject*<OS_dispatch_queue> _queue;
	NSMutableSet* _activeChannels;

}

@property (nonatomic,readonly) NSObject*<OS_dispatch_queue> queue;                                    //@synthesize queue=_queue - In the implementation block
@property (nonatomic,retain) NSMutableSet * activeChannels;                                           //@synthesize activeChannels=_activeChannels - In the implementation block
@property (assign,nonatomic,__weak) id<AVAirMessageNotificationCenterDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVBonjourService * mainService;                                        //@synthesize mainService=_mainService - In the implementation block
@property (nonatomic,retain) AVPlayerItem * nowPlayingPlayerItem;                                     //@synthesize nowPlayingPlayerItem=_nowPlayingPlayerItem - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)shared;
+(BOOL)_isNotificationCenterEnabled;
+(BOOL)isPrepared;
+(void)prepare;
-(id)_initPrivate;
-(id)init;
-(void)airTransport:(id)arg1 didReceiveObject:(id)arg2 ;
-(void)airTransportInputDidClose:(id)arg1 ;
-(id)bonjourServiceAdditionalTXTRecordInfo:(id)arg1 ;
-(id)playerItemForIdentifier:(id)arg1 ;
-(id<AVAirMessageNotificationCenterDelegate>)delegate;
-(void)bonjourService:(id)arg1 didAcceptConnectionChannel:(id)arg2 ;
-(void)bonjourService:(id)arg1 didCloseChannel:(id)arg2 ;
-(void)handleCommandMessage:(id)arg1 completion:(/*^block*/id)arg2 ;
-(AVPlayerItem *)nowPlayingPlayerItem;
-(void)setNowPlayingPlayerItem:(AVPlayerItem *)arg1 ;
-(NSMutableSet *)activeChannels;
-(void)setActiveChannels:(NSMutableSet *)arg1 ;
-(void)start;
-(void)stop;
-(void)setDelegate:(id<AVAirMessageNotificationCenterDelegate>)arg1 ;
-(NSObject*<OS_dispatch_queue>)queue;
-(AVBonjourService *)mainService;
-(void)dealloc;
@end

