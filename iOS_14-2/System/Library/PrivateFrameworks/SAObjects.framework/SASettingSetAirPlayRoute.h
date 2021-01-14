/*
* Generated on Thursday, January 14, 2021 at 2:23:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingCommand.h>

@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (nonatomic,copy) NSString * hashedRouteId; 
@property (nonatomic,copy) NSString * routeType; 
+(id)setAirPlayRoute;
+(id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(NSString *)routeType;
-(id)groupIdentifier;
-(void)setRouteType:(NSString *)arg1 ;
-(id)encodedClassName;
-(BOOL)requiresResponse;
-(NSString *)hashedRouteId;
-(void)setHashedRouteId:(NSString *)arg1 ;
@end

