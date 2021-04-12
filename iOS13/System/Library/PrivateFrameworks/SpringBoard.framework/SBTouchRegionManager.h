/*
* Generated on Monday, March 1, 2021 at 2:35:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <libobjc.A.dylib/FBSDisplayLayoutObserver.h>
#import <libobjc.A.dylib/PTSettingsKeyObserver.h>

@protocol OS_dispatch_queue;
@class NSObject, SBBackBoardServicesInterface, FBSDisplayLayoutMonitor, SBMedusa1oSettings, NSString;

@interface SBTouchRegionManager : NSObject <FBSDisplayLayoutObserver, PTSettingsKeyObserver> {

	NSObject*<OS_dispatch_queue> _queue;
	SBBackBoardServicesInterface* _queue_bksInterface;
	FBSDisplayLayoutMonitor* _queue_displayLayoutMonitor;
	SBMedusa1oSettings* _medusaSettings;
	double _queue_touchRegionBuffer;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)displayLayoutMonitor;
-(id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2 ;
-(id)_queue_calculateTouchRegionsFromSceneRects:(id)arg1 ;
-(id)_queue_floatingHitTestRegionForLayoutRect:(CGRect)arg1 ;
-(id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg1 ;
-(void)_queue_displayLayoutDidUpdate:(id)arg1 ;
-(void)setTouchRegionBuffer:(double)arg1 ;
-(double)touchRegionBuffer;
-(void)setDisplayLayoutMonitor:(id)arg1 ;
@end

