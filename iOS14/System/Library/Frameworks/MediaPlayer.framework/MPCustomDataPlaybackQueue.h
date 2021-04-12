/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPRemotePlaybackQueue.h>

@class NSString, NSData;

@interface MPCustomDataPlaybackQueue : MPRemotePlaybackQueue

@property (nonatomic,readonly) NSString * identifier; 
@property (nonatomic,readonly) NSData * data; 
+(BOOL)supportsSecureCoding;
-(id)description;
-(NSData *)data;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 data:(id)arg2 ;
@end

