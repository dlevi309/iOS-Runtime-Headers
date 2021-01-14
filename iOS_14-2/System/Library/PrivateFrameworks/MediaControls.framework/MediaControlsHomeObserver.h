/*
* Generated on Thursday, January 14, 2021 at 2:27:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)stopObserving;
-(void)home:(id)arg1 didAddAccessory:(id)arg2 ;
-(id)init;
-(id<MediaControlsHomeObserverDelegate>)delegate;
-(void)beginObserving;
-(void)homeManager:(id)arg1 didAddHome:(id)arg2 ;
-(void)_updateUIDs;
-(void)setDelegate:(id<MediaControlsHomeObserverDelegate>)arg1 ;
-(void)homeManagerDidUpdateHomes:(id)arg1 ;
-(void)home:(id)arg1 didRemoveAccessory:(id)arg2 ;
-(void)_notifyDelegate;
-(void)homeManager:(id)arg1 didRemoveHome:(id)arg2 ;
-(BOOL)hasAccessoryWithUID:(id)arg1 ;
@end

