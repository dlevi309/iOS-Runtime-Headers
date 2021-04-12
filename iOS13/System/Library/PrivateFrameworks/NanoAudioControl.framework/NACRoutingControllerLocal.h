/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/

#import <libobjc.A.dylib/MPAVRoutingControllerDelegate.h>
#import <libobjc.A.dylib/NACRoutingController.h>

@protocol NACRoutingControllerDelegate;
@class NACAudioRoute, NSArray, MPAVRoutingController, NSString;

@interface NACRoutingControllerLocal : NSObject <MPAVRoutingControllerDelegate, NACRoutingController> {

	MPAVRoutingController* _routingController;
	NSString* _audioCategory;
	id<NACRoutingControllerDelegate> _delegate;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NACAudioRoute * pickedRoute; 
@property (nonatomic,readonly) NSArray * availableAudioRoutes; 
@property (assign,nonatomic,__weak) id<NACRoutingControllerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id<NACRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(NACAudioRoute *)pickedRoute;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
@end

