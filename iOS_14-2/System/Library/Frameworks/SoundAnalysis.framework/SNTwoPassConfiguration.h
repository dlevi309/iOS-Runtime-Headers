/*
* Generated on Thursday, January 14, 2021 at 2:27:02 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SoundAnalysis.framework/SoundAnalysis
*/


@protocol SNRequest;
@interface SNTwoPassConfiguration : NSObject {

	id<SNRequest> _firstPassRequest;
	id<SNRequest> _secondPassRequest;
	double _historicalDataAmount;

}

@property (readonly) id<SNRequest> firstPassRequest;               //@synthesize firstPassRequest=_firstPassRequest - In the implementation block
@property (readonly) id<SNRequest> secondPassRequest;              //@synthesize secondPassRequest=_secondPassRequest - In the implementation block
@property (readonly) double historicalDataAmount;                  //@synthesize historicalDataAmount=_historicalDataAmount - In the implementation block
-(id)initWithFirstPassRequest:(id)arg1 secondPassRequest:(id)arg2 historicalDataAmount:(double)arg3 ;
-(id<SNRequest>)firstPassRequest;
-(id<SNRequest>)secondPassRequest;
-(double)historicalDataAmount;
@end

