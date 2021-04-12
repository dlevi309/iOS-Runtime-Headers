/*
* Generated on Monday, March 1, 2021 at 2:32:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/SASettingCommand.h>

@class NSString;

@interface SASettingSetAirPlayRoute : SASettingCommand

@property (nonatomic,copy) NSString * hashedRouteId; 
@property (nonatomic,copy) NSString * routeType; 
+(id)setAirPlayRoute;
+(id)setAirPlayRouteWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(NSString *)routeType;
-(void)setRouteType:(NSString *)arg1 ;
-(id)encodedClassName;
-(NSString *)hashedRouteId;
-(void)setHashedRouteId:(NSString *)arg1 ;
-(BOOL)requiresResponse;
@end

