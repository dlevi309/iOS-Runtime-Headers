/*
* Generated on Thursday, January 14, 2021 at 2:23:22 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SABackgroundContextObject.h>

@class NSData, NSString;

@interface SALocalSearchRoute : AceObject <SABackgroundContextObject>

@property (nonatomic,copy) NSData * etaFilter; 
@property (nonatomic,copy) NSData * evChargingMetadata; 
@property (nonatomic,copy) NSData * originalWaypointRoute; 
@property (nonatomic,copy) NSData * routeAsZilchBinary; 
@property (nonatomic,copy) NSData * routeId; 
@property (nonatomic,copy) NSData * sessionState; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)route;
+(id)routeWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSData *)sessionState;
-(id)groupIdentifier;
-(void)setSessionState:(NSData *)arg1 ;
-(id)encodedClassName;
-(NSData *)routeId;
-(void)setEtaFilter:(NSData *)arg1 ;
-(NSData *)routeAsZilchBinary;
-(void)setRouteAsZilchBinary:(NSData *)arg1 ;
-(void)setOriginalWaypointRoute:(NSData *)arg1 ;
-(NSData *)etaFilter;
-(NSData *)originalWaypointRoute;
-(NSData *)evChargingMetadata;
-(void)setRouteId:(NSData *)arg1 ;
-(void)setEvChargingMetadata:(NSData *)arg1 ;
@end

