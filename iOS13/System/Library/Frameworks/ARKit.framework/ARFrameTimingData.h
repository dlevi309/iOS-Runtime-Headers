/*
* Generated on Monday, March 1, 2021 at 2:32:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ARKit.framework/ARKit
*/


@class NSMutableDictionary, NSDictionary;

@interface ARFrameTimingData : NSObject {

	NSMutableDictionary* _timestampsByDataClassKey;
	double _videoLatency;

}

@property (assign,nonatomic) double videoLatency;                      //@synthesize videoLatency=_videoLatency - In the implementation block
@property (nonatomic,readonly) NSDictionary * timestamps; 
-(id)init;
-(NSDictionary *)timestamps;
-(void)addTimestamp:(double)arg1 forDataOfClass:(Class)arg2 ;
-(double)videoLatency;
-(void)setVideoLatency:(double)arg1 ;
@end

