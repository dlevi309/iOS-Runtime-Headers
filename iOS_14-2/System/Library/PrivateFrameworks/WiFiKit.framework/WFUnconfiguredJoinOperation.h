/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WiFiKit.framework/WiFiKit
*/

#import <WiFiKit/WFOperation.h>
#import <libobjc.A.dylib/AirPortAssistantControllerDelegate.h>

@class AirPortAssistantController, UINavigationController, UIViewController, NSDictionary;

@interface WFUnconfiguredJoinOperation : WFOperation <AirPortAssistantControllerDelegate> {

	AirPortAssistantController* _airportController;
	UINavigationController* _navigationController;
	UIViewController* _rootViewController;
	NSDictionary* _parameters;

}

@property (nonatomic,retain) AirPortAssistantController * airportController;              //@synthesize airportController=_airportController - In the implementation block
@property (nonatomic,retain) UINavigationController * navigationController;               //@synthesize navigationController=_navigationController - In the implementation block
@property (nonatomic,retain) UIViewController * rootViewController;                       //@synthesize rootViewController=_rootViewController - In the implementation block
@property (nonatomic,retain) NSDictionary * parameters;                                   //@synthesize parameters=_parameters - In the implementation block
-(NSDictionary *)parameters;
-(void)setParameters:(NSDictionary *)arg1 ;
-(void)finish;
-(void)start;
-(void)setRootViewController:(UIViewController *)arg1 ;
-(void)setNavigationController:(UINavigationController *)arg1 ;
-(UIViewController *)rootViewController;
-(UINavigationController *)navigationController;
-(id)initWithParameters:(id)arg1 rootViewController:(id)arg2 ;
-(AirPortAssistantController *)airportController;
-(void)airPortAssistantComplete:(id)arg1 result:(int)arg2 context:(id)arg3 animated:(BOOL)arg4 ;
-(void)setAirportController:(AirPortAssistantController *)arg1 ;
@end

