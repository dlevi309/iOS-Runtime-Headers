/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoPresentationSizeObserving.h>

@protocol SVPlayerItemObserving;
@class SVKeyValueObserver, NSString;

@interface SVVideoPresentationSizeObserver : NSObject <SVVideoPresentationSizeObserving> {

	/*^block*/id changeBlock;
	id<SVPlayerItemObserving> _playerItemObserver;
	SVKeyValueObserver* _presentationSizeObserver;
	CGSize _presentationSize;

}

@property (nonatomic,readonly) id<SVPlayerItemObserving> playerItemObserver;               //@synthesize playerItemObserver=_playerItemObserver - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * presentationSizeObserver;              //@synthesize presentationSizeObserver=_presentationSizeObserver - In the implementation block
@property (assign,nonatomic) CGSize presentationSize;                                      //@synthesize presentationSize=_presentationSize - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(CGSize)presentationSize;
-(id)changeBlock;
-(void)setPresentationSize:(CGSize)arg1 ;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithPlayerItemObserver:(id)arg1 ;
-(id<SVPlayerItemObserving>)playerItemObserver;
-(SVKeyValueObserver *)presentationSizeObserver;
@end

