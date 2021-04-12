/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncHistoryItem.h>

@class NSString, GEOComposedWaypoint;

@interface MapsSync.MapsSyncHistoryRideShareItem : MapsSync.MapsSyncHistoryItem {

	 _startWaypoint;
	 _endWaypoint;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) GEOComposedWaypoint * startWaypoint; 
@property (readonly,nonatomic) GEOComposedWaypoint * endWaypoint; 
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(GEOComposedWaypoint *)endWaypoint;
-(GEOComposedWaypoint *)startWaypoint;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

