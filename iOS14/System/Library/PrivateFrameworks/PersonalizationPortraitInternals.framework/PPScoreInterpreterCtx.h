/*
* Generated on Thursday, January 14, 2021 at 2:25:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/


#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
@class PPScoreDict;

@interface PPScoreInterpreterCtx : NSObject {

	unique_ptr<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> >, std::__1::default_delete<std::__1::vector<PPScoreInterpreterValue, std::__1::allocator<PPScoreInterpreterValue> > > >* _stack;
	PPScoreDict* _scoreInputs;
	PPScoreDict* _previousSubscores;
	PPScoreDict* _subscores;

}
-(id)initWithScoreInputs:(id)arg1 previousSubscores:(id)arg2 scalarSubscoreCount:(unsigned long long)arg3 arraySubscoreCount:(unsigned long long)arg4 objectSubscoreCount:(unsigned long long)arg5 ;
@end

