/*
* Generated on Thursday, January 14, 2021 at 2:24:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeUI.framework/HomeUI
*/

#import <libobjc.A.dylib/FMFSessionDelegate.h>

@class FMFSession, NAFuture, NSHashTable, NSString;

@interface HULocationDeviceManager : NSObject <FMFSessionDelegate> {

	FMFSession* _fmfSession;
	NAFuture* _activeFMFDeviceFuture;
	NAFuture* _availableFMFDevicesFuture;
	NSHashTable* _observers;

}

@property (nonatomic,readonly) FMFSession * fmfSession;                                //@synthesize fmfSession=_fmfSession - In the implementation block
@property (nonatomic,retain) NAFuture * activeFMFDeviceFuture;                         //@synthesize activeFMFDeviceFuture=_activeFMFDeviceFuture - In the implementation block
@property (nonatomic,retain) NAFuture * availableFMFDevicesFuture;                     //@synthesize availableFMFDevicesFuture=_availableFMFDevicesFuture - In the implementation block
@property (nonatomic,readonly) NSHashTable * observers;                                //@synthesize observers=_observers - In the implementation block
@property (nonatomic,readonly) NAFuture * availableLocationDevicesFuture; 
@property (nonatomic,readonly) NAFuture * activeLocationDeviceFuture; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)sharedInstance;
-(void)didChangeActiveLocationSharingDevice:(id)arg1 ;
-(void)addObserver:(id)arg1 ;
-(void)didUpdateActiveDeviceList:(id)arg1 ;
-(NSHashTable *)observers;
-(id)init;
-(FMFSession *)fmfSession;
-(void)removeObserver:(id)arg1 ;
-(NAFuture *)activeLocationDeviceFuture;
-(NAFuture *)availableLocationDevicesFuture;
-(id)updateActiveLocationDevice:(id)arg1 ;
-(NAFuture *)activeFMFDeviceFuture;
-(NAFuture *)availableFMFDevicesFuture;
-(void)_updateActiveFMFDevice:(id)arg1 ;
-(void)setActiveFMFDeviceFuture:(NAFuture *)arg1 ;
-(void)setAvailableFMFDevicesFuture:(NAFuture *)arg1 ;
@end

