/*
* Generated on Thursday, January 14, 2021 at 2:23:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeHistoryDirectionsItem.h>
#import <MapsSuggestions/MapsSyncHistoryEvDirectionsItem.h>

@class NSString, GEOStorageRouteRequestStorage, NSUUID, NSDate;

@interface MapsSyncFakeHistoryEvDirectionsItem : MapsSyncFakeHistoryDirectionsItem <MapsSyncHistoryEvDirectionsItem> {

	double _requiredCharge;
	NSString* _vehicleIdentifier;

}

@property (nonatomic,readonly) double requiredCharge;                                            //@synthesize requiredCharge=_requiredCharge - In the implementation block
@property (nonatomic,copy,readonly) NSString * vehicleIdentifier;                                //@synthesize vehicleIdentifier=_vehicleIdentifier - In the implementation block
@property (nonatomic,readonly) BOOL navigationInterrupted; 
@property (nonatomic,readonly) GEOStorageRouteRequestStorage * routeRequestStorage; 
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)vehicleIdentifier;
-(double)requiredCharge;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 routeRequestStorage:(id)arg3 navigationInterrupted:(BOOL)arg4 requiredCharge:(double)arg5 vehicleIdentifier:(id)arg6 ;
@end

