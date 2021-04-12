/*
* Generated on Monday, March 1, 2021 at 2:33:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Home.framework/Home
*/

#import <libobjc.A.dylib/HFLocationManagerObserver.h>

@protocol HFLocationSensingCoordinatorDelegate;
@class NSUserDefaults, HFLocationManagerDispatcher, NAFuture, NSString;

@interface HFLocationSensingCoordinator : NSObject <HFLocationManagerObserver> {

	int _defaultsChangedNotifyToken;
	id<HFLocationSensingCoordinatorDelegate> _delegate;
	NSUserDefaults* _defaults;
	HFLocationManagerDispatcher* _locationDispatcher;

}

@property (nonatomic,retain) NSUserDefaults * defaults;                                             //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,retain) HFLocationManagerDispatcher * locationDispatcher;                      //@synthesize locationDispatcher=_locationDispatcher - In the implementation block
@property (assign,nonatomic) int defaultsChangedNotifyToken;                                        //@synthesize defaultsChangedNotifyToken=_defaultsChangedNotifyToken - In the implementation block
@property (assign,nonatomic,__weak) id<HFLocationSensingCoordinatorDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) NAFuture * locationSensingAvailableFuture; 
@property (assign,nonatomic) BOOL homeSensingEnabled; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(void)dealloc;
-(id<HFLocationSensingCoordinatorDelegate>)delegate;
-(void)setDelegate:(id<HFLocationSensingCoordinatorDelegate>)arg1 ;
-(NSUserDefaults *)defaults;
-(void)setDefaults:(NSUserDefaults *)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
-(void)_defaultsDidChange;
-(void)locationManager:(id)arg1 didChangeAuthorizationStatus:(int)arg2 ;
-(BOOL)homeSensingEnabled;
-(void)setLocationDispatcher:(HFLocationManagerDispatcher *)arg1 ;
-(HFLocationManagerDispatcher *)locationDispatcher;
-(int)defaultsChangedNotifyToken;
-(NAFuture *)locationSensingAvailableFuture;
-(void)setHomeSensingEnabled:(BOOL)arg1 ;
-(void)setDefaultsChangedNotifyToken:(int)arg1 ;
@end

