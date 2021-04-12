/*
* Generated on Thursday, January 14, 2021 at 2:26:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriFindMy.framework/SiriFindMy
*/

#import <Intents/INIntent.h>

@class DeviceQuery, NSArray;

@interface FindDeviceAndPlaySoundIntent : INIntent

@property (retain,nonatomic) DeviceQuery * deviceQuery; 
@property (copy,nonatomic) NSArray * devices; 
-(id)init;
-(id)initWithIdentifier:(id)arg1 backingStore:(id)arg2 ;
-(id)initWithDomain:(id)arg1 verb:(id)arg2 parametersByName:(id)arg3 ;
-(id)initWithCoder:(id)arg1 ;
@end

