/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/


@class AVOutputContextManagerInternal;

@interface AVOutputContextManager : NSObject {

	AVOutputContextManagerInternal* _ivars;

}
+(id)outputContextManagerForAllOutputContexts;
-(void)dealloc;
-(id)initWithOutputContextManagerImpl:(id)arg1 ;
-(void)outputContextManagerImplDidExpireWithReplacementImpl:(id)arg1 ;
-(void)outputContextManagerImpl:(id)arg1 observedFailureToConnectToOutputDevice:(id)arg2 reason:(id)arg3 ;
@end

