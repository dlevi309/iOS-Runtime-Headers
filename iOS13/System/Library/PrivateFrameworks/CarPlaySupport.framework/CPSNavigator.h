/*
* Generated on Monday, March 1, 2021 at 2:34:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CarPlaySupport.framework/CarPlaySupport
*/

#import <libobjc.A.dylib/CARNavigationOwnershipManagerDelegate.h>
#import <libobjc.A.dylib/CPNavigationSessionManaging.h>
#import <libobjc.A.dylib/BSInvalidatable.h>

@protocol CARNavigationOwnershipManagerDelegate;
@class CPTrip, NSHashTable, CARNavigationOwnershipManager, NSString;

@interface CPSNavigator : NSObject <CARNavigationOwnershipManagerDelegate, CPNavigationSessionManaging, BSInvalidatable> {

	BOOL _completed;
	CPTrip* _trip;
	id<CARNavigationOwnershipManagerDelegate> _navigationOwnershipDelegate;
	NSHashTable* _displayDelegates;
	CARNavigationOwnershipManager* _navigationOwnershipManager;

}

@property (assign,getter=isCompleted,nonatomic) BOOL completed;                                                         //@synthesize completed=_completed - In the implementation block
@property (nonatomic,retain) NSHashTable * displayDelegates;                                                            //@synthesize displayDelegates=_displayDelegates - In the implementation block
@property (nonatomic,retain) CARNavigationOwnershipManager * navigationOwnershipManager;                                //@synthesize navigationOwnershipManager=_navigationOwnershipManager - In the implementation block
@property (nonatomic,retain) CPTrip * trip;                                                                             //@synthesize trip=_trip - In the implementation block
@property (assign,nonatomic,__weak) id<CARNavigationOwnershipManagerDelegate> navigationOwnershipDelegate;              //@synthesize navigationOwnershipDelegate=_navigationOwnershipDelegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)dealloc;
-(void)invalidate;
-(id)initWithIdentifier:(id)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(BOOL)isCompleted;
-(void)navigationOwnershipChangedToOwner:(unsigned long long)arg1 ;
-(CPTrip *)trip;
-(void)pauseTripForReason:(unsigned long long)arg1 description:(id)arg2 ;
-(void)finishTrip;
-(void)cancelTrip;
-(void)showManeuvers:(id)arg1 usingDisplayStyles:(id)arg2 ;
-(void)updateTravelEstimates:(id)arg1 forManeuver:(id)arg2 ;
-(void)setTrip:(CPTrip *)arg1 ;
-(void)updateTripTravelEstimates:(id)arg1 ;
-(void)addDisplayDelegate:(id)arg1 ;
-(NSHashTable *)displayDelegates;
-(CARNavigationOwnershipManager *)navigationOwnershipManager;
-(id<CARNavigationOwnershipManagerDelegate>)navigationOwnershipDelegate;
-(void)removeDisplayDelegate:(id)arg1 ;
-(void)setNavigationOwnershipDelegate:(id<CARNavigationOwnershipManagerDelegate>)arg1 ;
-(void)setDisplayDelegates:(NSHashTable *)arg1 ;
-(void)setNavigationOwnershipManager:(CARNavigationOwnershipManager *)arg1 ;
@end

