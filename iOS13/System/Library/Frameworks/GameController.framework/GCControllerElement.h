/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


@class GCController;

@interface GCControllerElement : NSObject {

	GCControllerElement* _collection;
	GCController* _controller;

}

@property (assign,nonatomic,__weak) GCController * controller;                     //@synthesize controller=_controller - In the implementation block
@property (assign,nonatomic,__weak) GCControllerElement * collection;              //@synthesize collection=_collection - In the implementation block
@property (getter=isAnalog,nonatomic,readonly) BOOL analog; 
-(float)value;
-(GCControllerElement *)collection;
-(void)setController:(GCController *)arg1 ;
-(GCController *)controller;
-(BOOL)_setValue:(float)arg1 ;
-(int)getAndResetTimesPressed;
-(BOOL)isAnalog;
-(BOOL)_setValue:(float)arg1 queue:(id)arg2 ;
-(void)setCollection:(GCControllerElement *)arg1 ;
@end

