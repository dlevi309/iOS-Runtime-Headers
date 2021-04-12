/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMIPSiriActions.framework/FMIPSiriActions
*/

#import <Intents/INIntent.h>
#import <FMIPSiriActions/FMIPIdentifiable.h>

@class INObject;

@interface FMIPLocateIntent : INIntent <FMIPIdentifiable>

@property (nonatomic,copy) INObject * deviceId; 
@property (assign,nonatomic) long long locateDeviceClass; 
+(long long)locateDeviceClassForDeviceType:(long long)arg1 ;
+(id)locateIntentWithDeviceId:(id)arg1 deviceType:(long long)arg2 deviceDisplayName:(id)arg3 ;
+(id)identityTag;
-(id)rootAggregateKey;
@end

