/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

@class CLPlacemark;


@protocol INListRideOptionsIntentExport <NSObject,JSExport>
@property (nonatomic,copy) CLPlacemark * pickupLocation; 
@property (nonatomic,copy) CLPlacemark * dropOffLocation; 
@required
-(id)init;
-(void)setPickupLocation:(id)arg1;
-(CLPlacemark *)dropOffLocation;
-(CLPlacemark *)pickupLocation;
-(void)setDropOffLocation:(id)arg1;

@end

