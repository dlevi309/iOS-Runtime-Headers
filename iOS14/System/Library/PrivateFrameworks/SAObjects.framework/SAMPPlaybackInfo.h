/*
* Generated on Thursday, January 14, 2021 at 2:23:23 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)encodedClassName;
-(long long)plays;
-(void)setDurationMillis:(long long)arg1 ;
-(void)setPlaybackPositionMillis:(long long)arg1 ;
-(void)setPlays:(long long)arg1 ;
-(SACalendar *)lastPlayedDate;
-(void)setLastPlayedDate:(SACalendar *)arg1 ;
-(long long)durationMillis;
-(long long)playbackPositionMillis;
-(BOOL)rememberPlaybackPosition;
-(void)setRememberPlaybackPosition:(BOOL)arg1 ;
@end

