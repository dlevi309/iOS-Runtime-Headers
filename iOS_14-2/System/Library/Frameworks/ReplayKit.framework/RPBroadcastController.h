/*
* Generated on Thursday, January 14, 2021 at 2:27:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ReplayKit.framework/ReplayKit
*/


@protocol RPBroadcastControllerDelegate;
@class NSDictionary, NSString, NSURL;

@interface RPBroadcastController : NSObject {

	NSDictionary* _serviceInfo;
	id<RPBroadcastControllerDelegate> _delegate;
	NSString* _broadcastExtensionBundleID;
	NSString* _broadcastExtensionBundleIdentifier;

}

@property (nonatomic,retain) NSDictionary * serviceInfo;                                     //@synthesize serviceInfo=_serviceInfo - In the implementation block
@property (nonatomic,retain) NSURL * broadcastURL; 
@property (nonatomic,retain) NSString * broadcastExtensionBundleIdentifier;                  //@synthesize broadcastExtensionBundleIdentifier=_broadcastExtensionBundleIdentifier - In the implementation block
@property (getter=isBroadcasting,nonatomic,readonly) BOOL broadcasting; 
@property (getter=isPaused,nonatomic,readonly) BOOL paused; 
@property (assign,nonatomic,__weak) id<RPBroadcastControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NSString * broadcastExtensionBundleID;                        //@synthesize broadcastExtensionBundleID=_broadcastExtensionBundleID - In the implementation block
-(NSDictionary *)serviceInfo;
-(id)init;
-(id<RPBroadcastControllerDelegate>)delegate;
-(void)setDelegate:(id<RPBroadcastControllerDelegate>)arg1 ;
-(void)setServiceInfo:(NSDictionary *)arg1 ;
-(BOOL)isPaused;
-(void)setBroadcastURL:(NSURL *)arg1 ;
-(void)setBroadcastExtensionBundleIdentifier:(NSString *)arg1 ;
-(void)startSystemBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSURL *)broadcastURL;
-(id)initWithExtensionBundleID:(id)arg1 broadcastURL:(id)arg2 ;
-(id)initWithCurrentSession;
-(BOOL)isBroadcasting;
-(void)startBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)pauseBroadcast;
-(void)resumeBroadcast;
-(void)finishBroadcastWithHandler:(/*^block*/id)arg1 ;
-(void)finishSystemBroadcastWithHandler:(/*^block*/id)arg1 ;
-(NSString *)broadcastExtensionBundleID;
-(NSString *)broadcastExtensionBundleIdentifier;
@end

