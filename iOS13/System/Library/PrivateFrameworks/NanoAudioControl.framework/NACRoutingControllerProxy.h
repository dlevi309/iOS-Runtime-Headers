/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACXPCClient, NSString, NSArray, NACAudioRoute;

@interface NACRoutingControllerProxy : NSObject <NACRoutingController> {

	NACXPCClient* _xpcClient;
	NSString* _category;
	BOOL _isObserving;
	id<NACRoutingControllerDelegate> _delegate;
	NSArray* _availableAudioRoutes;
	NACAudioRoute* _pickedRoute;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute;                                 //@synthesize pickedRoute=_pickedRoute - In the implementation block
@property (nonatomic,readonly) NSArray * availableAudioRoutes;                              //@synthesize availableAudioRoutes=_availableAudioRoutes - In the implementation block
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(void)dealloc;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(NACAudioRoute *)pickedRoute;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
-(void)_audioRoutesDidChange;
@end

