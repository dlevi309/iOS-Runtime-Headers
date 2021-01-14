/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <Intents/INIntent.h>

@class NSArray, DeviceQuery;

@interface SetShuffleStateIntent : INIntent

@property (nonatomic,copy) NSArray * devices; 
@property (assign,nonatomic) long long shuffleState; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end

