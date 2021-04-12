/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPAlternateTrack.h>

@class NSString, NSLocale;

@interface MPAlternateTextTrack : MPAlternateTrack {

	long long _type;
	NSString* _name;
	NSLocale* _locale;
	long long _tag;

}

@property (nonatomic,readonly) BOOL isInBand; 
@property (nonatomic,readonly) NSLocale * locale; 
@property (nonatomic,readonly) long long type; 
@property (assign,nonatomic) long long tag;                    //@synthesize tag=_tag - In the implementation block
+(id)autoTrack;
+(id)offTrack;
-(BOOL)isEqual:(id)arg1 ;
-(long long)type;
-(long long)compare:(id)arg1 ;
-(NSLocale *)locale;
-(id)displayName;
-(long long)tag;
-(void)setTag:(long long)arg1 ;
-(id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3 ;
-(BOOL)isInBand;
-(id)_displayNameForName:(id)arg1 ;
@end

