/*
* Generated on Monday, March 1, 2021 at 2:34:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol RPBroadcastControllerDelegate;
@class NSDictionary, NSString, RPBroadcastViewController, NSURL;

@interface RPBroadcastController : NSObject {

	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;
	NSString* _broadcastExtensionBundleIdentifier;
	RPBroadcastViewController* _broadcastViewController;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                         //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL; 
@property (nonatomic,retain) NSString * broadcastExtensionBundleIdentifier;                      //@synthesize broadcastExtensionBundleIdentifier=_broadcastExtensionBundleIdentifier - In the implementation block
@property (nonatomic,readonly) RPBroadcastViewController * broadcastViewController;              //@synthesize broadcastViewController=_broadcastViewController - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;                  //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                            //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(id)init;
-(void)dealloc;
-(id<RPBroadcastControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(BOOL)isPaused;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(NSDictionary *)serviceInfo;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(RPBroadcastViewController *)broadcastViewController;
-(void)setBroadcastExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSURL *)broadcastURL;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 broadcastViewController:(id)arg3 ;
-(id)initWithCurrentSession;
-(BOOL)isBroadcasting;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSString *)broadcastExtensionBundleID;
-(NSString *)broadcastExtensionBundleIdentifier;
@end

