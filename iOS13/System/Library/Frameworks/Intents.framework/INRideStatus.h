/*
* Generated on Monday, March 1, 2021 at 2:31:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/Intents.framework/Intents
*/

#import <Intents/Intents-Structs.h>
#import <libobjc.A.dylib/INCacheableContainer.h>
#import <libobjc.A.dylib/INImageProxyInjecting.h>
#import <libobjc.A.dylib/INRideStatusExport.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, INRideCompletionStatus, INRideVehicle, INRideDriver, NSDate, CLPlacemark, NSArray, INRideOption, NSUserActivity, INDateComponentsRange;

@interface INRideStatus : NSObject <INCacheableContainer, INImageProxyInjecting, INRideStatusExport, NSCopying, NSSecureCoding> {

	NSArray* _waypoints;
	NSString* _rideIdentifier;
	long long _phase;
	INRideCompletionStatus* _completionStatus;
	INRideVehicle* _vehicle;
	INRideDriver* _driver;
	NSDate* _estimatedPickupDate;
	NSDate* _estimatedDropOffDate;
	NSDate* _estimatedPickupEndDate;
	INDateComponentsRange* _scheduledPickupTime;
	CLPlacemark* _pickupLocation;
	CLPlacemark* _dropOffLocation;
	INRideOption* _rideOption;
	NSUserActivity* _userActivityForCancelingInApplication;
	NSArray* _additionalActionActivities;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,copy) NSString * rideIdentifier;                                             //@synthesize rideIdentifier=_rideIdentifier - In the implementation block
@property (assign,nonatomic) long long phase;                                                     //@synthesize phase=_phase - In the implementation block
@property (nonatomic,copy) INRideCompletionStatus * completionStatus;                             //@synthesize completionStatus=_completionStatus - In the implementation block
@property (nonatomic,copy) INRideVehicle * vehicle;                                               //@synthesize vehicle=_vehicle - In the implementation block
@property (nonatomic,copy) INRideDriver * driver;                                                 //@synthesize driver=_driver - In the implementation block
@property (nonatomic,copy) NSDate * estimatedPickupDate;                                          //@synthesize estimatedPickupDate=_estimatedPickupDate - In the implementation block
@property (nonatomic,copy) NSDate * estimatedDropOffDate;                                         //@synthesize estimatedDropOffDate=_estimatedDropOffDate - In the implementation block
@property (nonatomic,copy) NSDate * estimatedPickupEndDate;                                       //@synthesize estimatedPickupEndDate=_estimatedPickupEndDate - In the implementation block
@property (nonatomic,copy) INDateComponentsRange * scheduledPickupTime;                           //@synthesize scheduledPickupTime=_scheduledPickupTime - In the implementation block
@property (nonatomic,copy) CLPlacemark * pickupLocation;                                          //@synthesize pickupLocation=_pickupLocation - In the implementation block
@property (nonatomic,copy) NSArray * waypoints;                                                   //@synthesize waypoints=_waypoints - In the implementation block
@property (nonatomic,copy) CLPlacemark * dropOffLocation;                                         //@synthesize dropOffLocation=_dropOffLocation - In the implementation block
@property (nonatomic,copy) INRideOption * rideOption;                                             //@synthesize rideOption=_rideOption - In the implementation block
@property (nonatomic,retain) NSUserActivity * userActivityForCancelingInApplication;              //@synthesize userActivityForCancelingInApplication=_userActivityForCancelingInApplication - In the implementation block
@property (nonatomic,copy) NSArray * additionalActionActivities;                                  //@synthesize additionalActionActivities=_additionalActionActivities - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)_injectProxiesForImages:(/*^block*/id)arg1 completion:(/*^block*/id)arg2 ;
-(id)_dictionaryRepresentation;
-(long long)phase;
-(void)setPhase:(long long)arg1 ;
-(INRideDriver *)driver;
-(void)setDriver:(INRideDriver *)arg1 ;
-(NSArray *)waypoints;
-(void)setWaypoints:(NSArray *)arg1 ;
-(id)_intents_cacheableObjects;
-(void)_intents_updateContainerWithCache:(id)arg1 ;
-(id)descriptionAtIndent:(unsigned long long)arg1 ;
-(CLPlacemark *)pickupLocation;
-(void)setPickupLocation:(CLPlacemark *)arg1 ;
-(CLPlacemark *)dropOffLocation;
-(void)setDropOffLocation:(CLPlacemark *)arg1 ;
-(INDateComponentsRange *)scheduledPickupTime;
-(void)setScheduledPickupTime:(INDateComponentsRange *)arg1 ;
-(NSString *)rideIdentifier;
-(void)setRideIdentifier:(NSString *)arg1 ;
-(INRideCompletionStatus *)completionStatus;
-(void)setCompletionStatus:(INRideCompletionStatus *)arg1 ;
-(INRideVehicle *)vehicle;
-(void)setVehicle:(INRideVehicle *)arg1 ;
-(NSDate *)estimatedPickupDate;
-(void)setEstimatedPickupDate:(NSDate *)arg1 ;
-(NSDate *)estimatedDropOffDate;
-(void)setEstimatedDropOffDate:(NSDate *)arg1 ;
-(NSDate *)estimatedPickupEndDate;
-(void)setEstimatedPickupEndDate:(NSDate *)arg1 ;
-(INRideOption *)rideOption;
-(void)setRideOption:(INRideOption *)arg1 ;
-(NSUserActivity *)userActivityForCancelingInApplication;
-(void)setUserActivityForCancelingInApplication:(NSUserActivity *)arg1 ;
-(NSArray *)additionalActionActivities;
-(void)setAdditionalActionActivities:(NSArray *)arg1 ;
@end

