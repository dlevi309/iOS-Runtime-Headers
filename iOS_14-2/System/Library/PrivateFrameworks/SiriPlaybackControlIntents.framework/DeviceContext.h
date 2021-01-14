/*
* Generated on Thursday, January 14, 2021 at 2:28:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SiriPlaybackControlIntents.framework/SiriPlaybackControlIntents
*/

#import <Intents/INObject.h>

@class NSString, NSDate;

@interface DeviceContext : INObject

@property (readonly,nonatomic) NSString * description; 
@property (nonatomic,copy) NSString * routeId; 
@property (assign,nonatomic) long long proximity; 
@property (assign,nonatomic) long long nowPlayingState; 
@property (nonatomic,copy) NSDate * nowPlayingTimestamp; 
@property (assign,nonatomic) long long nowPlayingMediaType; 
@property (nonatomic,copy) NSString * groupId; 
-(NSString *)description;
-(BOOL)isEqual:(id)arg1 ;
@end

