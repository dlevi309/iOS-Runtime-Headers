/*
* Generated on Monday, March 1, 2021 at 2:32:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
*/

#import <SAObjects/AceObject.h>
#import <SAObjects/SAAceSerializable.h>

@class SACalendar, NSString;

@interface SAMPPlaybackInfo : AceObject <SAAceSerializable>

@property (assign,nonatomic) long long durationMillis; 
@property (nonatomic,retain) SACalendar * lastPlayedDate; 
@property (assign,nonatomic) long long playbackPositionMillis; 
@property (assign,nonatomic) long long plays; 
@property (assign,nonatomic) BOOL rememberPlaybackPosition; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)playbackInfo;
+(id)playbackInfoWithDictionary:(id)arg1 context:(id)arg2 ;
-(id)groupIdentifier;
-(SACalendar *)lastPlayedDate;
-(void)setLastPlayedDate:(SACalendar *)arg1 ;
-(id)encodedClassName;
-(void)setDurationMillis:(long long)arg1 ;
-(void)setPlaybackPositionMillis:(long long)arg1 ;
-(void)setPlays:(long long)arg1 ;
-(long long)durationMillis;
-(long long)playbackPositionMillis;
-(long long)plays;
-(BOOL)rememberPlaybackPosition;
-(void)setRememberPlaybackPosition:(BOOL)arg1 ;
@end

