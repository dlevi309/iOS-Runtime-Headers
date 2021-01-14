/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOStorageRouteRequestStorage;

@interface MapsSync.MapsSyncHistoryDirectionsItem : MapsSync.MapsSyncHistoryItem {

	 _navigationInterrupted;
	 _routeRequestStorage;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) BOOL navigationInterrupted; 
@property (readonly,nonatomic) GEOStorageRouteRequestStorage * routeRequestStorage; 
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(BOOL)navigationInterrupted;
-(GEOStorageRouteRequestStorage *)routeRequestStorage;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

