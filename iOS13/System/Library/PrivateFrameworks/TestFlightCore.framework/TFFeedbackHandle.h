/*
* Generated on Monday, March 1, 2021 at 2:35:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TestFlightCore.framework/TestFlightCore
*/

#import <libobjc.A.dylib/SBSRemoteAlertHandleObserver.h>

@class TFFeedbackHandleConfiguration, SBSRemoteAlertHandle, NSString;

@interface TFFeedbackHandle : NSObject <SBSRemoteAlertHandleObserver> {

	TFFeedbackHandleConfiguration* _configuration;
	SBSRemoteAlertHandle* _internalHandle;
	NSString* _logKey;

}

@property (nonatomic,readonly) TFFeedbackHandleConfiguration * configuration;              //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,retain) SBSRemoteAlertHandle * internalHandle;                        //@synthesize internalHandle=_internalHandle - In the implementation block
@property (nonatomic,copy,readonly) NSString * logKey;                                     //@synthesize logKey=_logKey - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithConfiguration:(id)arg1 ;
-(TFFeedbackHandleConfiguration *)configuration;
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)logKey;
-(void)setInternalHandle:(SBSRemoteAlertHandle *)arg1 ;
-(SBSRemoteAlertHandle *)internalHandle;
-(void)presentFeedbackViewController;
-(void)invalidateFeedbackViewController;
@end

