/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPModelObject.h>

@class NSNumber, NSString;

@interface MPModelPlaybackPosition : MPModelObject

@property (assign,nonatomic) double bookmarkTime; 
@property (assign,nonatomic) BOOL shouldRememberBookmarkTime; 
@property (assign,nonatomic) BOOL hasBeenPlayed; 
@property (assign,nonatomic) double startTime; 
@property (nonatomic,copy) NSNumber * stopTime; 
@property (nonatomic,copy) NSString * storeUbiquitousIdentifier; 
@property (assign,nonatomic) long long userPlayCount; 
+(id)__storeUbiquitousIdentifier_KEY;
+(id)__startTime_KEY;
+(id)__bookmarkTime_KEY;
+(id)__hasBeenPlayed_KEY;
+(id)__stopTime_KEY;
+(id)__shouldRememberBookmarkTime_KEY;
+(id)__userPlayCount_KEY;
@end

