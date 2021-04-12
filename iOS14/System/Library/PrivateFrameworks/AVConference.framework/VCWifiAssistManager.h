/*
* Generated on Thursday, January 14, 2021 at 2:25:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BOOL)isAvailable;
-(void)addDelegate:(id)arg1 ;
-(void)removeDelegate:(id)arg1 ;
-(id)init;
-(void)didStopTrackingNOI:(id)arg1 ;
-(id)description;
-(void)didStartTrackingNOI:(id)arg1 ;
-(void)dealloc;
-(void)queryUserPreference;
-(void)queryBudget;
-(void)refreshBudget;
-(unsigned char)wifiAssistState;
@end

