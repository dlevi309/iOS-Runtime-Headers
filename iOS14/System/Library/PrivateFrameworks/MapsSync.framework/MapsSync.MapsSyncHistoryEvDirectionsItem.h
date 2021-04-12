/*
* Generated on Thursday, January 14, 2021 at 2:22:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/MapsSync.framework/MapsSync
*/

#import <MapsSync/MapsSync.MapsSyncHistoryDirectionsItem.h>

@class NSString;

@interface MapsSync.MapsSyncHistoryEvDirectionsItem : MapsSync.MapsSyncHistoryDirectionsItem {

	 _requiredCharge;
	 _vehicleIdentifier;

}

@property (readonly,nonatomic) NSString * description; 
@property (readonly,nonatomic) double requiredCharge; 
@property (readonly,nonatomic) NSString * vehicleIdentifier; 
-(id)initWithObject:(id)arg1 ;
-(Class)managedObjectClass;
-(NSString *)vehicleIdentifier;
-(Class)mutableObjectClass;
-(NSString *)description;
-(void)addEditWithBlock:(/*^block*/id)arg1 ;
-(double)requiredCharge;
-(void)setPropertiesWithObject:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

