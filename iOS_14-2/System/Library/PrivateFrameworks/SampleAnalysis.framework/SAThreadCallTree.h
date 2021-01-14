/*
* Generated on Thursday, January 14, 2021 at 2:26:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SampleAnalysis.framework/SampleAnalysis
*/

#import <SampleAnalysis/SACallTree.h>

@class SAThread, SADispatchQueue;

@interface SAThreadCallTree : SACallTree {

	SAThread* _thread;
	SADispatchQueue* _dispatchQueue;

}

@property (readonly) SAThread * thread;                            //@synthesize thread=_thread - In the implementation block
@property (readonly) SADispatchQueue * dispatchQueue;              //@synthesize dispatchQueue=_dispatchQueue - In the implementation block
-(SAThread *)thread;
-(SADispatchQueue *)dispatchQueue;
@end

