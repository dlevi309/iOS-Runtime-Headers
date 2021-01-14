/*
* Generated on Thursday, January 14, 2021 at 2:21:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject {

	CMCatherineFeederInternal* _internal;

}

@property (nonatomic,readonly) CMCatherineFeederInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(id)init;
-(CMCatherineFeederInternal *)internal;
-(void)feedCatherine:(double)arg1 confidence:(double)arg2 ;
-(void)dealloc;
@end

