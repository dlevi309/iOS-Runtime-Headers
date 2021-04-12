/*
* Generated on Thursday, January 14, 2021 at 2:26:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class GCHapticCapabilityGraph, NSMutableSet, GCController;

@interface GCDeviceHaptics : NSObject {

	GCHapticCapabilityGraph* _capabilityGraph;
	NSMutableSet* _supportedLocalities;
	GCController* _controller;

}

@property (assign,nonatomic,__weak) GCController * controller; 
@property (nonatomic,readonly) GCHapticCapabilityGraph * capabilityGraph; 
@property (nonatomic,retain) NSMutableSet * supportedLocalities;                       //@synthesize supportedLocalities=_supportedLocalities - In the implementation block
@property (assign,nonatomic,__weak) GCController * controller;                         //@synthesize controller=_controller - In the implementation block
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(GCHapticCapabilityGraph *)capabilityGraph;
-(id)initWithCapabilityGraph:(id)arg1 ;
-(id)createEngineWithLocality:(id)arg1 ;
-(NSMutableSet *)supportedLocalities;
-(void)setSupportedLocalities:(NSMutableSet *)arg1 ;
@end

