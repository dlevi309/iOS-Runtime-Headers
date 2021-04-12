/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

