/*
* Generated on Thursday, January 14, 2021 at 2:24:59 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)nextIndex;
-(void)setHandler:(id)arg1 ;
-(id)initWithData:(id)arg1 ;
-(id)handler;
-(void)jumpToPosition:(double)arg1 ;
-(double)nextUpdatePosition;
-(void)triggerNextUpdate;
@end

