/*
* Generated on Thursday, January 14, 2021 at 2:28:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)remoteAlertHandleDidDeactivate:(id)arg1 ;
-(id)initWithConfiguration:(id)arg1 ;
-(TFFeedbackHandleConfiguration *)configuration;
-(void)remoteAlertHandle:(id)arg1 didInvalidateWithError:(id)arg2 ;
-(NSString *)logKey;
-(void)setInternalHandle:(SBSRemoteAlertHandle *)arg1 ;
-(SBSRemoteAlertHandle *)internalHandle;
-(void)presentFeedbackViewController;
-(void)invalidateFeedbackViewController;
@end

