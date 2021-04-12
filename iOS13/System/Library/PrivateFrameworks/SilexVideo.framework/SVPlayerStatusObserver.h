/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVPlayerStatusObserving.h>

@class NSError, SVPlayer, SVKeyValueObserver, NSString;

@interface SVPlayerStatusObserver : NSObject <SVPlayerStatusObserving> {

	/*^block*/id changeBlock;
	NSError* _error;
	SVPlayer* _player;
	SVKeyValueObserver* _statusObserver;
	long long _status;

}

@property (nonatomic,readonly) SVPlayer * player;                                //@synthesize player=_player - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * statusObserver;              //@synthesize statusObserver=_statusObserver - In the implementation block
@property (assign,nonatomic) long long status;                                   //@synthesize status=_status - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
@property (nonatomic,copy,readonly) NSError * error;                             //@synthesize error=_error - In the implementation block
-(NSError *)error;
-(long long)status;
-(void)setStatus:(long long)arg1 ;
-(SVPlayer *)player;
-(id)initWithPlayer:(id)arg1 ;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(SVKeyValueObserver *)statusObserver;
@end

