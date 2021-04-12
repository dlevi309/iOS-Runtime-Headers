/*
* Generated on Thursday, January 14, 2021 at 2:23:21 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SABaseCommand.h>
#import <SAObjects/SAServerBoundCommand.h>
#import <SAObjects/SABackgroundContextObject.h>

@class SALocalSearchMapItem, SALocalSearchAceNavigationEta, SALocalSearchMapItemList, SALocalSearchRoute, NSString;

@interface SALocalSearchGetNavigationStatusCompleted : SABaseCommand <SAServerBoundCommand, SABackgroundContextObject>

@property (nonatomic,retain) SALocalSearchMapItem * destination; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * nextManeuverEta; 
@property (nonatomic,retain) SALocalSearchAceNavigationEta * overallEta; 
@property (nonatomic,retain) SALocalSearchMapItemList * predictedDestinations; 
@property (nonatomic,retain) SALocalSearchRoute * route; 
@property (nonatomic,copy) NSString * trafficIncidentAlertType; 
@property (nonatomic,copy) NSString * volume; 
@property (nonatomic,copy) NSString * aceId; 
@property (nonatomic,copy) NSString * refId; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)getNavigationStatusCompleted;
+(id)getNavigationStatusCompletedWithDictionary:(id)arg1 context:(id)arg2 ;
-(void)setRoute:(SALocalSearchRoute *)arg1 ;
-(void)setDestination:(SALocalSearchMapItem *)arg1 ;
-(void)setVolume:(NSString *)arg1 ;
-(id)groupIdentifier;
-(SALocalSearchRoute *)route;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(SALocalSearchAceNavigationEta *)nextManeuverEta;
-(void)setNextManeuverEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(SALocalSearchAceNavigationEta *)overallEta;
-(void)setOverallEta:(SALocalSearchAceNavigationEta *)arg1 ;
-(NSString *)trafficIncidentAlertType;
-(void)setTrafficIncidentAlertType:(NSString *)arg1 ;
-(SALocalSearchMapItemList *)predictedDestinations;
-(void)setPredictedDestinations:(SALocalSearchMapItemList *)arg1 ;
-(NSString *)volume;
-(SALocalSearchMapItem *)destination;
@end

