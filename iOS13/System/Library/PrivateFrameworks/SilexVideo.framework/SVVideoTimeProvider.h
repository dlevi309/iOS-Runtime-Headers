/*
* Generated on Monday, March 1, 2021 at 2:33:03 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTimeProviding.h>

@protocol SVTimeConverting;
@class AVPlayer, NSString;

@interface SVVideoTimeProvider : NSObject <SVVideoTimeProviding> {

	AVPlayer* _player;
	id<SVTimeConverting> _timeConverter;

}

@property (nonatomic,readonly) AVPlayer * player;                               //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) id<SVTimeConverting> timeConverter;              //@synthesize timeConverter=_timeConverter - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) double time; 
-(double)time;
-(AVPlayer *)player;
-(id<SVTimeConverting>)timeConverter;
-(id)initWithPlayer:(id)arg1 timeConverter:(id)arg2 ;
@end

