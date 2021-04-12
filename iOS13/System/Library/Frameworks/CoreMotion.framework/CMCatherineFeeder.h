/*
* Generated on Monday, March 1, 2021 at 2:31:32 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreMotion.framework/CoreMotion
*/


@class CMCatherineFeederInternal;

@interface CMCatherineFeeder : NSObject {

	CMCatherineFeederInternal* _internal;

}

@property (nonatomic,readonly) CMCatherineFeederInternal * internal;              //@synthesize internal=_internal - In the implementation block
-(id)init;
-(void)dealloc;
-(CMCatherineFeederInternal *)internal;
-(void)feedCatherine:(double)arg1 confidence:(double)arg2 ;
@end

