/*
* Generated on Thursday, January 14, 2021 at 2:26:01 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WirelessProximity.framework/WirelessProximity
*/

#import <WirelessProximity/WPClient.h>

@protocol WPZoneTrackerDelegate;
@interface WPZoneTracker : WPClient {

	BOOL _wantEntry;
	BOOL _wantExit;
	id<WPZoneTrackerDelegate> _delegate;

}

@property (assign,nonatomic,__weak) id<WPZoneTrackerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (assign,nonatomic) BOOL wantEntry;                                         //@synthesize wantEntry=_wantEntry - In the implementation block
@property (assign,nonatomic) BOOL wantExit;                                          //@synthesize wantExit=_wantExit - In the implementation block
-(void)exitedZone:(id)arg1 ;
-(void)stateDidChange:(long long)arg1 ;
-(void)unregisterAllZoneChanges;
-(BOOL)wantEntry;
-(id<WPZoneTrackerDelegate>)delegate;
-(id)initWithDelegate:(id)arg1 queue:(id)arg2 ;
-(void)fetchedCurrentlyTrackedZones:(id)arg1 ;
-(void)unregisterForZoneChanges:(id)arg1 ;
-(BOOL)wantExit;
-(void)setWantExit:(BOOL)arg1 ;
-(void)setDelegate:(id<WPZoneTrackerDelegate>)arg1 ;
-(id)description;
-(void)setWantEntry:(BOOL)arg1 ;
-(id)clientAsString;
-(id)initWithDelegate:(id)arg1 ;
-(void)enteredZone:(id)arg1 manufacturerData:(id)arg2 ;
-(void)invalidate;
-(void)registerForZoneChangesMatching:(id)arg1 ;
-(void)failedToRegisterZones:(id)arg1 withError:(id)arg2 ;
-(void)getCurrentTrackedZones;
@end

