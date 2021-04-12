/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <Intents/INIntent.h>

@class NSString, INObject, CLPlacemark, NSNumber;

@interface EKUICreateEventIntent : INIntent

@property (nonatomic,copy) NSString * title; 
@property (nonatomic,copy) INObject * startDate; 
@property (nonatomic,copy) INObject * endDate; 
@property (nonatomic,copy) NSString * locationName; 
@property (nonatomic,copy) CLPlacemark * geolocation; 
@property (nonatomic,copy) NSString * locationAddress; 
@property (nonatomic,copy) NSNumber * allDay; 
@end

