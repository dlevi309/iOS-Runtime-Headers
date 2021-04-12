/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/PPQuickTypeServantProtocol.h>
#import <libobjc.A.dylib/GEONavigationListenerDelegate.h>

@protocol OS_dispatch_semaphore;
@class GEONavigationListener, NSString, NSObject;

@interface PPQuickTypeNavigationServant : NSObject <PPQuickTypeServantProtocol, GEONavigationListenerDelegate> {

	GEONavigationListener* _navigationListener;
	int _navigationState;
	NSString* _destinationName;
	NSString* _streetName;
	double _remainingTimeToDestination;
	double _remainingDistanceToDestination;
	NSObject*<OS_dispatch_semaphore> _stateSemaphore;
	NSObject*<OS_dispatch_semaphore> _streetSemaphore;
	NSObject*<OS_dispatch_semaphore> _summarySemaphore;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)_warmUpFormatters;
-(void)navigationListener:(id)arg1 didUpdatePositionFromDestination:(SCD_Struct_PP28)arg2 ;
-(id)init;
-(void)_stopListeningToNavigationUpdate;
-(void)_initializeNavigationListener;
-(BOOL)_waitForStreet;
-(id)quickTypeItemsWithQuery:(id)arg1 limit:(unsigned long long)arg2 explanationSet:(id)arg3 ;
-(void)navigationListener:(id)arg1 didUpdateGuidanceState:(id)arg2 ;
-(void)navigationListener:(id)arg1 didUpdateCurrentRoadName:(id)arg2 ;
-(void)_makeNavRequests;
-(BOOL)_waitForSummary;
-(void)navigationListener:(id)arg1 didUpdateRouteSummary:(id)arg2 ;
-(BOOL)_waitForState;
-(void)dealloc;
@end

