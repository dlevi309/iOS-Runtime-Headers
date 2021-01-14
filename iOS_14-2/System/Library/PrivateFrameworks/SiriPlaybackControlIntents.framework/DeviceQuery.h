/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <Intents/INObject.h>

@class NSString, INPerson, NSArray;

@interface DeviceQuery : INObject

@property (copy,nonatomic) NSString * deviceType; 
@property (copy,nonatomic) NSString * deviceName; 
@property (retain,nonatomic) INPerson * deviceOwner; 
@property (copy,nonatomic) NSArray * deviceTypeCategories; 
@property (copy,nonatomic) NSString * deviceTypeOriginalInput; 
-(id)initWithIdentifier:(id)arg1 displayString:(id)arg2 pronunciationHint:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

