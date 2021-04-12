/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setCompletion:(id)arg1 ;
-(void)setInterval:(double)arg1 ;
-(double)interval;
-(id)completion;
-(void)setLastFireDate:(NSDate *)arg1 ;
-(NSDate *)lastFireDate;
@end

