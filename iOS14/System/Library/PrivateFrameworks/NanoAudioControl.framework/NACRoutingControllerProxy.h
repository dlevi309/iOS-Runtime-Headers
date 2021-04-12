/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

@property (nonatomic,readonly) NACAudioRoute * pickedRoute;                                 //@synthesize pickedRoute=_pickedRoute - In the implementation block
@property (nonatomic,readonly) NSArray * availableAudioRoutes;                              //@synthesize availableAudioRoutes=_availableAudioRoutes - In the implementation block
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NACAudioRoute *)pickedRoute;
-(id)initWithAudioCategory:(id)arg1 ;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(void)_applicationWillResignActiveNotification:(id)arg1 ;
-(void)_applicationDidBecomeActiveNotification:(id)arg1 ;
-(void)dealloc;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
-(void)_audioRoutesDidChange;
@end

