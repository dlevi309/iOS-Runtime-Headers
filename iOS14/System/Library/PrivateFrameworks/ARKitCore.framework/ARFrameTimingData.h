/*
* Generated on Thursday, January 14, 2021 at 2:26:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
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

