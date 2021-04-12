/*
* Generated on Monday, March 1, 2021 at 2:32:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/NetworkExtension.framework/NetworkExtension
*/


@interface NEFilterDataSavedMessageHandler : NSObject {

	/*^block*/id _getVerdict;
	/*^block*/id _handleVerdict;

}

@property (nonatomic,readonly) id getVerdict;                 //@synthesize getVerdict=_getVerdict - In the implementation block
@property (nonatomic,readonly) id handleVerdict;              //@synthesize handleVerdict=_handleVerdict - In the implementation block
-(void)executeVerdictHandlerWithFlow:(id)arg1 verdict:(id)arg2 context:(id)arg3 ;
-(void)executeWithFlow:(id)arg1 context:(id)arg2 ;
-(id)initWithGetVerdictBlock:(/*^block*/id)arg1 handleVerdictBlock:(/*^block*/id)arg2 ;
-(void)enqueueWithFlow:(id)arg1 context:(id)arg2 ;
-(id)getVerdict;
-(id)handleVerdict;
@end

