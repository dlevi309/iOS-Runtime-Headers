/*
* Generated on Thursday, January 14, 2021 at 2:26:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoDurationObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoDurationObserver : NSObject <SVVideoDurationObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _playerItemDurationObserver;
	double _duration;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;               //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,retain) SVKeyValueObserver * playerItemDurationObserver;              //@synthesize playerItemDurationObserver=_playerItemDurationObserver - In the implementation block
@property (assign,nonatomic) double duration;                                              //@synthesize duration=_duration - In the implementation block
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setDuration:(double)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(void)updateDuration:(SCD_Struct_SV0)arg1 ;
-(double)duration;
-(void)setPlayerItemDurationObserver:(SVKeyValueObserver *)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(SVKeyValueObserver *)playerItemDurationObserver;
@end

