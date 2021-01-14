/*
* Generated on Thursday, January 14, 2021 at 2:23:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSuggestions.framework/MapsSuggestions
*/

#import <MapsSuggestions/MapsSyncFakeHistoryItem.h>
#import <MapsSuggestions/MapsSyncHistoryDirectionsItem.h>

@class GEOStorageRouteRequestStorage, NSUUID, NSDate, NSString;

@interface MapsSyncFakeHistoryDirectionsItem : MapsSyncFakeHistoryItem <MapsSyncHistoryDirectionsItem> {

	BOOL _navigationInterrupted;
	GEOStorageRouteRequestStorage* _routeRequestStorage;

}

@property (nonatomic,readonly) BOOL navigationInterrupted;                                       //@synthesize navigationInterrupted=_navigationInterrupted - In the implementation block
@property (nonatomic,readonly) GEOStorageRouteRequestStorage * routeRequestStorage;              //@synthesize routeRequestStorage=_routeRequestStorage - In the implementation block
@property (nonatomic,copy,readonly) NSUUID * identifier; 
@property (nonatomic,copy,readonly) NSDate * createTime; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)navigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(id)initWithIdentifier:(id)arg1 createTime:(id)arg2 routeRequestStorage:(id)arg3 navigationInterrupted:(BOOL)arg4 ;
@end

