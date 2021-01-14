/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <Intents/INObject.h>

@class NSString, NSArray, NSNumber, DeviceContext;

@interface Device : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSString * roomName; 
@property (nonatomic,copy) NSArray * zoneNames; 
@property (nonatomic,copy) NSString * type; 
@property (nonatomic,copy) NSString * routeId; 
@property (nonatomic,copy) NSNumber * currentHome; 
@property (nonatomic,copy) NSNumber * currentRoom; 
@property (nonatomic,copy) NSNumber * numberOfAffectedRooms; 
@property (nonatomic,copy) NSNumber * isDeviceSelectedUsingContext; 
@property (nonatomic,copy) DeviceContext * context; 
@property (nonatomic,copy) NSNumber * disambiguated; 
@property (nonatomic,copy) NSNumber * confirmed; 
@property (nonatomic,copy) NSNumber * skipConfirmation; 
-(NSString *)description;
@end

