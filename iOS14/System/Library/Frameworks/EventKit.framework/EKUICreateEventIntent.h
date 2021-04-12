/*
* Generated on Thursday, January 14, 2021 at 2:21:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
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

