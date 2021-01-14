/*
* Generated on Thursday, January 14, 2021 at 2:25:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)displayLayoutMonitor;
-(id)init;
-(void)setDisplayLayoutMonitor:(id)arg1 ;
-(double)touchRegionBuffer;
-(id)_queue_calculateHitTestRegionsFromSceneRects:(id)arg1 ;
-(void)layoutMonitor:(id)arg1 didUpdateDisplayLayout:(id)arg2 withContext:(id)arg3 ;
-(id)_queue_calculateTouchRegionsFromSceneRects:(id)arg1 ;
-(void)settings:(id)arg1 changedValueForKey:(id)arg2 ;
-(void)setTouchRegionBuffer:(double)arg1 ;
-(void)_queue_displayLayoutDidUpdate:(id)arg1 ;
-(id)_queue_floatingHitTestRegionForLayoutRect:(CGRect)arg1 ;
-(id)_initWithBKSInterface:(id)arg1 displayLayoutMonitor:(id)arg2 ;
-(void)dealloc;
@end

