/*
* Generated on Thursday, January 14, 2021 at 2:28:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NACAudioRoute *)pickedRoute;
-(void)routingControllerAvailableRoutesDidChange:(id)arg1 ;
-(id)initWithAudioCategory:(id)arg1 ;
-(id<NACRoutingControllerDelegate>)delegate;
-(void)setDelegate:(id<NACRoutingControllerDelegate>)arg1 ;
-(void)routingController:(id)arg1 didFailToPickRouteWithError:(id)arg2 ;
-(void)beginObservingRoutes;
-(void)endObservingRoutes;
-(void)pickAudioRoute:(id)arg1 ;
-(NSArray *)availableAudioRoutes;
@end

