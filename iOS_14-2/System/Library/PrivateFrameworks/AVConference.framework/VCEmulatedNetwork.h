/*
* Generated on Thursday, January 14, 2021 at 2:25:33 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVConference.framework/AVConference
*/


@class NSDictionary, VCEmulatedOutputQueue;

@interface VCEmulatedNetwork : NSObject {

	NSDictionary* _policies;
	/*^block*/id _pushCompletionHandler;
	/*^block*/id _popCompletionHandler;
	VCEmulatedOutputQueue* _outputQueue;
	unsigned _numberOfPacketsWaitingInOutputQueue;

}

@property (nonatomic,readonly) unsigned numberOfPacketsWaitingInOutputQueue;              //@synthesize numberOfPacketsWaitingInOutputQueue=_numberOfPacketsWaitingInOutputQueue - In the implementation block
@property (nonatomic,copy) id pushCompletionHandler;                                      //@synthesize pushCompletionHandler=_pushCompletionHandler - In the implementation block
@property (nonatomic,copy) id popCompletionHandler;                                       //@synthesize popCompletionHandler=_popCompletionHandler - In the implementation block
-(void)push:(id)arg1 ;
-(id)initWithPolicies:(id)arg1 ;
-(void)dealloc;
-(unsigned)numberOfPacketsWaitingInOutputQueue;
-(id)copyPacketFromPop;
-(void)runUntilTime:(double)arg1 ;
-(id)pushCompletionHandler;
-(void)setPushCompletionHandler:(id)arg1 ;
-(id)popCompletionHandler;
-(void)setPopCompletionHandler:(id)arg1 ;
@end

