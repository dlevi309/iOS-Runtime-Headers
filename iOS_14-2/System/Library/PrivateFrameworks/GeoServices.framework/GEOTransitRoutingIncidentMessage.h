/*
* Generated on Thursday, January 14, 2021 at 2:21:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GeoServices.framework/GeoServices
*/

@class NSString, NSArray;


@protocol GEOTransitRoutingIncidentMessage <NSObject>
@property (nonatomic,readonly) NSString * routingMessage; 
@property (nonatomic,readonly) NSArray * transitIncidents; 
@required
-(NSArray *)transitIncidents;
-(NSString *)routingMessage;

@end

