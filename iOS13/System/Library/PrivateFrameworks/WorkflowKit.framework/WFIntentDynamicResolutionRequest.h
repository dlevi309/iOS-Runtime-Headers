/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/


@interface WFIntentDynamicResolutionRequest : NSObject {

	BOOL _cancelled;
	/*^block*/id _resolutionBlock;

}

@property (nonatomic,copy) id resolutionBlock;                                 //@synthesize resolutionBlock=_resolutionBlock - In the implementation block
@property (getter=isCancelled,nonatomic,readonly) BOOL cancelled;              //@synthesize cancelled=_cancelled - In the implementation block
-(id)init;
-(void)cancel;
-(BOOL)isCancelled;
-(id)resolutionBlock;
-(void)setResolutionBlock:(id)arg1 ;
@end

