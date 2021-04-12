/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <libobjc.A.dylib/SVVideoTimeJumpObserving.h>

@protocol SVPlayerItemObserving, SVVideoTimeProviding;
@class NSString;

@interface SVVideoTimeJumpObserver : NSObject <SVVideoTimeJumpObserving> {

	/*^block*/id jumpBlock;
	id<SVPlayerItemObserving> _itemObserver;
	id<SVVideoTimeProviding> _timeProvider;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> itemObserver;              //@synthesize itemObserver=_itemObserver - In the implementation block
@property (nonatomic,readonly) id<SVVideoTimeProviding> timeProvider;               //@synthesize timeProvider=_timeProvider - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onJump:,nonatomic,copy) id jumpBlock; 
-(id<SVVideoTimeProviding>)timeProvider;
-(id)initWithItemObserver:(id)arg1 timeProvider:(id)arg2 ;
-(void)jumped:(id)arg1 ;
-(id)jumpBlock;
-(void)onJump:(/*^block*/id)arg1 ;
-(id<SVPlayerItemObserving>)itemObserver;
@end

