/*
* Generated on Monday, March 1, 2021 at 2:33:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/MediaControls.framework/MediaControls
*/

#import <libobjc.A.dylib/HMHomeDelegate.h>
#import <libobjc.A.dylib/HMHomeManagerDelegate.h>

@protocol OS_dispatch_queue, MediaControlsHomeObserverDelegate;
@class HMHomeManager, NSMutableSet, NSObject, NSString;

@interface MediaControlsHomeObserver : NSObject <HMHomeDelegate, HMHomeManagerDelegate> {

	HMHomeManager* _homeManager;
	NSMutableSet* _knownUIDs;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSObject*<OS_dispatch_queue> _notifyQueue;
	id<MediaControlsHomeObserverDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<MediaControlsHomeObserverDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id<MediaControlsHomeObserverDelegate>)delegate;
-(void)setDelegate:(id<MediaControlsHomeObserverDelegate>)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(void)stopObserving;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)_notifyDelegate;
-(void)beginObserving;
-(void)_updateUIDs;
-(BOOL)hasAccessoryWithUID:(id)arg1 ;
@end

