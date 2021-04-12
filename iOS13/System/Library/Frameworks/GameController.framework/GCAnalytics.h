/*
* Generated on Monday, March 1, 2021 at 2:32:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/GameController.framework/GameController
*/


#import <GameController/GameController-Structs.h>
@class NSMutableDictionary, NSString, NSTimer;

@interface GCAnalytics : NSObject {

	NSMutableDictionary* _controllersData;
	NSString* _bundleID;
	NSTimer* _eventPollTimer;

}
+(id)instance;
-(id)init;
-(void)dealloc;
-(id)getBundleID;
-(void)sendInputsPressedEvent:(const SCD_Struct_GC0*)arg1 ;
-(void)runInputPollTimer;
-(void)checkMultipleControllers;
-(void)publishController:(id)arg1 ;
-(void)unpublishController:(id)arg1 ;
-(void)onSiriMotionEnabled;
@end

