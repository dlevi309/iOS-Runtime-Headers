/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerTimeControlStatusObserving.h>

@class SVPlayer, SVKeyValueObserver, NSString;

@interface SVPlayerTimeControlStatusObserver : NSObject <SVPlayerTimeControlStatusObserving> {

	/*^block*/id changeBlock;
	SVPlayer* _player;
	SVKeyValueObserver* _timeControlStatusObserver;
	long long _timeControlStatus;

}

@property (nonatomic,readonly) SVPlayer * player;                                           //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * timeControlStatusObserver;              //@synthesize timeControlStatusObserver=_timeControlStatusObserver - In the implementation block
@property (assign,nonatomic) long long timeControlStatus;                                   //@synthesize timeControlStatus=_timeControlStatus - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(SVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(long long)timeControlStatus;
-(id)changeBlock;
-(void)setTimeControlStatus:(long long)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(SVKeyValueObserver *)timeControlStatusObserver;
@end

