/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)offTrack;
+(id)autoTrack;
-(long long)compare:(id)arg1 ;
-(NSLocale *)locale;
-(void)setTag:(long long)arg1 ;
-(BOOL)isInBand;
-(long long)tag;
-(id)initWithType:(long long)arg1 name:(id)arg2 locale:(id)arg3 ;
-(id)_displayNameForName:(id)arg1 ;
-(long long)type;
-(id)displayName;
-(BOOL)isEqual:(id)arg1 ;
@end

