/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)__bookmarkTime_KEY;
+(id)__shouldRememberBookmarkTime_KEY;
+(id)__hasBeenPlayed_KEY;
+(id)__startTime_KEY;
+(id)__stopTime_KEY;
+(id)__storeUbiquitousIdentifier_KEY;
+(id)__userPlayCount_KEY;
@end

