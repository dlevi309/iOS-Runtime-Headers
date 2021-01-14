/*
* Generated on Thursday, January 14, 2021 at 2:21:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AssistantServices.framework/AssistantServices
*/

#import <AssistantServices/AFServiceContextSnapshot.h>

@class NSDate, NSString;

@interface AFServiceMediaPlaybackStateSnapshot : AFServiceContextSnapshot {

	long long _playbackState;
	NSDate* _nowPlayingTimestamp;
	NSString* _mediaType;
	NSString* _groupIdentifier;

}

@property (nonatomic,readonly) long long playbackState;                        //@synthesize playbackState=_playbackState - In the implementation block
@property (nonatomic,copy,readonly) NSDate * nowPlayingTimestamp;              //@synthesize nowPlayingTimestamp=_nowPlayingTimestamp - In the implementation block
@property (nonatomic,copy,readonly) NSString * mediaType;                      //@synthesize mediaType=_mediaType - In the implementation block
@property (nonatomic,copy,readonly) NSString * groupIdentifier;                //@synthesize groupIdentifier=_groupIdentifier - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)groupIdentifier;
-(NSString *)mediaType;
-(long long)playbackState;
-(void)encodeWithCoder:(id)arg1 ;
-(NSDate *)nowPlayingTimestamp;
-(id)description;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithDeliveryDate:(id)arg1 playbackState:(long long)arg2 nowPlayingTimestamp:(id)arg3 mediaType:(id)arg4 groupIdentifier:(id)arg5 ;
@end

