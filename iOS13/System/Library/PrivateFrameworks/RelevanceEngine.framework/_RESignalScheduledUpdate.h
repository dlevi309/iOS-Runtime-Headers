/*
* Generated on Monday, March 1, 2021 at 2:34:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/


@class NSDate;

@interface _RESignalScheduledUpdate : NSObject {

	double _interval;
	/*^block*/id _completion;
	NSDate* _lastFireDate;

}

@property (assign,nonatomic) double interval;                    //@synthesize interval=_interval - In the implementation block
@property (nonatomic,copy) id completion;                        //@synthesize completion=_completion - In the implementation block
@property (nonatomic,retain) NSDate * lastFireDate;              //@synthesize lastFireDate=_lastFireDate - In the implementation block
-(double)interval;
-(void)setInterval:(double)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(id)completion;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(NSDate *)lastFireDate;
@end

