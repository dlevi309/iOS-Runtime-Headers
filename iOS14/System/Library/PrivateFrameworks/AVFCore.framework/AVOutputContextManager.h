/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {

	AVOutputContextManagerInternal* _ivars;

}
+(id)outputContextManagerForAllOutputContexts;
-(id)initWithOutputContextManagerImpl:(id)arg1 ;
-(void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3 ;
-(void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)dealloc;
@end

