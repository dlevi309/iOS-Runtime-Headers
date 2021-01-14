/*
* Generated on Thursday, January 14, 2021 at 2:28:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <Intents/INIntent.h>

@class NSArray, NSNumber, DeviceQuery;

@interface SeekTimeIntent : INIntent

@property (nonatomic,copy) NSArray * devices; 
@property (nonatomic,copy) NSNumber * playheadPosition; 
@property (nonatomic,copy) NSNumber * shouldStartPlaybackAfterSeek; 
@property (nonatomic,copy) NSArray * deviceContext; 
@property (nonatomic,copy) NSNumber * isSkipToEnd; 
@property (assign,nonatomic) long long mediaType; 
@property (nonatomic,copy) DeviceQuery * deviceQuery; 
@end

