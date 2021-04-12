/*
* Generated on Monday, March 1, 2021 at 2:33:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SilexVideo.framework/SilexVideo
*/

#import <SilexVideo/SilexVideo-Structs.h>
#import <libobjc.A.dylib/SVVideoViewControllerSizeObserving.h>

@class SVVideoViewController, SVKeyValueObserver, NSString;

@interface SVVideoViewControllerSizeObserver : NSObject <SVVideoViewControllerSizeObserving> {

	/*^block*/id changeBlock;
	SVVideoViewController* _videoViewController;
	SVKeyValueObserver* _boundsObserver;
	CGSize _size;

}

@property (nonatomic,__weak,readonly) SVVideoViewController * videoViewController;              //@synthesize videoViewController=_videoViewController - In the implementation block
@property (nonatomic,readonly) SVKeyValueObserver * boundsObserver;                             //@synthesize boundsObserver=_boundsObserver - In the implementation block
@property (assign,nonatomic) CGSize size;                                                       //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (setter=onChange:,nonatomic,copy) id changeBlock; 
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(SVVideoViewController *)videoViewController;
-(id)changeBlock;
-(void)onChange:(/*^block*/id)arg1 ;
-(id)initWithVideoViewController:(id)arg1 ;
-(SVKeyValueObserver *)boundsObserver;
@end

