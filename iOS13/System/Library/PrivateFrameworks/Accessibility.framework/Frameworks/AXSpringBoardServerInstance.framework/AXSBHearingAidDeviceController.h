/*
* Generated on Monday, March 1, 2021 at 2:33:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Accessibility.framework/Frameworks/AXSpringBoardServerInstance.framework/AXSpringBoardServerInstance
*/

#import <AXSpringBoardServerInstance/AXUIClientDelegate.h>
#import <AXSpringBoardServerInstance/AXHAServerDelegate.h>

@protocol OS_dispatch_queue;
@class NSDictionary, NSTimer, NSObject, NSString;

@interface AXSBHearingAidDeviceController : NSObject <AXUIClientDelegate, AXHAServerDelegate> {

	double _routeChangedTime;
	BOOL isShowingHearingAidControl;
	BOOL _shouldIgnoreRouteChanges;
	BOOL _hearingAidIsConnected;
	BOOL _holdingMediaForConnection;
	BOOL _holdingPhoneForConnection;
	NSDictionary* _preferredRoute;
	NSTimer* _preferredRouteTimer;
	NSObject*<OS_dispatch_queue> _mediaUpdateQueue;

}

@property (assign,nonatomic) BOOL shouldIgnoreRouteChanges;                              //@synthesize shouldIgnoreRouteChanges=_shouldIgnoreRouteChanges - In the implementation block
@property (assign,nonatomic) BOOL isShowingHearingAidControl; 
@property (assign,nonatomic) BOOL hearingAidIsConnected;                                 //@synthesize hearingAidIsConnected=_hearingAidIsConnected - In the implementation block
@property (assign,nonatomic) BOOL holdingMediaForConnection;                             //@synthesize holdingMediaForConnection=_holdingMediaForConnection - In the implementation block
@property (assign,nonatomic) BOOL holdingPhoneForConnection;                             //@synthesize holdingPhoneForConnection=_holdingPhoneForConnection - In the implementation block
@property (nonatomic,retain) NSDictionary * preferredRoute;                              //@synthesize preferredRoute=_preferredRoute - In the implementation block
@property (nonatomic,retain) NSTimer * preferredRouteTimer;                              //@synthesize preferredRouteTimer=_preferredRouteTimer - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mediaUpdateQueue;              //@synthesize mediaUpdateQueue=_mediaUpdateQueue - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedController;
-(id)init;
-(void)dealloc;
-(BOOL)isScreenLocked;
-(id)userInterfaceClient:(id)arg1 processMessageFromServer:(id)arg2 withIdentifier:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)arg1 ;
-(void)hearingServerDidDie:(id)arg1 ;
-(void)setHoldingPhoneForConnection:(BOOL)arg1 ;
-(BOOL)holdingMediaForConnection;
-(void)setHoldingMediaForConnection:(BOOL)arg1 ;
-(BOOL)holdingPhoneForConnection;
-(void)startServer;
-(id)hearingUIClient;
-(void)liveListenStatusBarActivated:(id)arg1 ;
-(void)showHearingAidControl:(BOOL)arg1 ;
-(void)setIsShowingHearingAidControl:(BOOL)arg1 ;
-(void)_lockStateChanged;
-(BOOL)isShowingHearingAidControl;
-(BOOL)shouldIgnoreRouteChanges;
-(void)setShouldIgnoreRouteChanges:(BOOL)arg1 ;
-(BOOL)hearingAidIsConnected;
-(void)setHearingAidIsConnected:(BOOL)arg1 ;
-(NSDictionary *)preferredRoute;
-(void)setPreferredRoute:(NSDictionary *)arg1 ;
-(NSTimer *)preferredRouteTimer;
-(void)setPreferredRouteTimer:(NSTimer *)arg1 ;
-(NSObject*<OS_dispatch_queue>)mediaUpdateQueue;
-(void)setMediaUpdateQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
@end

