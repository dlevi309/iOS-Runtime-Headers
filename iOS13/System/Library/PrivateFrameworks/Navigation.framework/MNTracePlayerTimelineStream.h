/*
* Generated on Monday, March 1, 2021 at 2:33:15 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Navigation.framework/Navigation
*/


@class NSArray;

@interface MNTracePlayerTimelineStream : NSObject {

	NSArray* _data;
	unsigned long long _nextIndex;
	double _nextUpdatePosition;
	/*^block*/id _handler;

}

@property (nonatomic,copy) id handler;                                    //@synthesize handler=_handler - In the implementation block
@property (nonatomic,readonly) unsigned long long nextIndex;              //@synthesize nextIndex=_nextIndex - In the implementation block
@property (nonatomic,readonly) double nextUpdatePosition;                 //@synthesize nextUpdatePosition=_nextUpdatePosition - In the implementation block
-(id)handler;
-(id)initWithData:(id)arg1 ;
-(void)setHandler:(id)arg1 ;
-(unsigned long long)nextIndex;
-(void)jumpToPosition:(double)arg1 ;
-(double)nextUpdatePosition;
-(void)triggerNextUpdate;
@end

