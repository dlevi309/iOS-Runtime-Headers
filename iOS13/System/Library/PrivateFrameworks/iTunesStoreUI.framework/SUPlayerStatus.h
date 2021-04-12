/*
* Generated on Monday, March 1, 2021 at 2:32:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/iTunesStoreUI.framework/iTunesStoreUI
*/

#import <iTunesStoreUI/iTunesStoreUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSError;

@interface SUPlayerStatus : NSObject <NSCopying> {

	double _currentTime;
	double _duration;
	NSError* _error;
	long long _state;

}

@property (assign,nonatomic) double currentTime;                 //@synthesize currentTime=_currentTime - In the implementation block
@property (assign,nonatomic) double duration;                    //@synthesize duration=_duration - In the implementation block
@property (assign,nonatomic) long long playerState;              //@synthesize state=_state - In the implementation block
@property (nonatomic,retain) NSError * error;                    //@synthesize error=_error - In the implementation block
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(double)duration;
-(void)setDuration:(double)arg1 ;
-(double)currentTime;
-(void)setCurrentTime:(double)arg1 ;
-(long long)playerState;
-(void)setPlayerState:(long long)arg1 ;
@end

