/*
* Generated on Monday, March 1, 2021 at 2:33:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/

#import <libobjc.A.dylib/NWNetworkOfInterestManagerDelegate.h>

@protocol OS_dispatch_queue;
@class NSObject, NSMutableSet, VCDispatchTimer, NWNetworkOfInterestManager, NWNetworkOfInterest;

@interface VCWifiAssistManager : NSObject <NWNetworkOfInterestManagerDelegate> {

	BOOL _userPrefered;
	BOOL _inBudget;
	NSObject*<OS_dispatch_queue> _serialQueue;
	NSMutableSet* _delegates;
	VCDispatchTimer* _refreshTimer;
	NWNetworkOfInterestManager* _manager;
	NWNetworkOfInterest* _wifiNOI;
	BOOL _respectBudgetStatusEnabled;

}

@property (readonly) BOOL isAvailable; 
@property (readonly) unsigned char wifiAssistState; 
+(id)sharedInstance;
-(id)init;
-(void)dealloc;
-(id)description;
-(BOOL)isAvailable;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(void)didStopTrackingNOI:(id)arg1 ;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)queryUserPreference;
-(void)queryBudget;
-(void)refreshBudget;
-(unsigned char)wifiAssistState;
@end

