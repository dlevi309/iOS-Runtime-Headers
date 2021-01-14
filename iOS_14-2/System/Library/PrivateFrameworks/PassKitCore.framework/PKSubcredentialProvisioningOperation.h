/*
* Generated on Thursday, January 14, 2021 at 2:21:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/


@protocol PKSubcredentialProvisioningOperationDelegate;
@class PKSubcredentialProvisioningConfiguration, PKSubcredentialProvisioningOperationContext;

@interface PKSubcredentialProvisioningOperation : NSObject {

	BOOL _inProgress;
	BOOL _canCancelOperation;
	BOOL _canBeRestarted;
	id<PKSubcredentialProvisioningOperationDelegate> _delegate;
	PKSubcredentialProvisioningConfiguration* _configuration;
	PKSubcredentialProvisioningOperationContext* _context;

}

@property (getter=isInProgress,nonatomic,readonly) BOOL inProgress; 
@property (nonatomic,__weak,readonly) id<PKSubcredentialProvisioningOperationDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) PKSubcredentialProvisioningConfiguration * configuration;                      //@synthesize configuration=_configuration - In the implementation block
@property (nonatomic,readonly) PKSubcredentialProvisioningOperationContext * context;                         //@synthesize context=_context - In the implementation block
@property (nonatomic,readonly) BOOL canCancelOperation;                                                       //@synthesize canCancelOperation=_canCancelOperation - In the implementation block
@property (nonatomic,readonly) BOOL canBeRestarted;                                                           //@synthesize canBeRestarted=_canBeRestarted - In the implementation block
+(id)operationForState:(long long)arg1 configuration:(id)arg2 context:(id)arg3 delegate:(id)arg4 ;
-(void)performOperation;
-(id<PKSubcredentialProvisioningOperationDelegate>)delegate;
-(PKSubcredentialProvisioningOperationContext *)context;
-(PKSubcredentialProvisioningConfiguration *)configuration;
-(void)failWithErrorCode:(long long)arg1 description:(id)arg2 ;
-(void)advanceToState:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)failWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
-(BOOL)canBeRestarted;
-(void)failWithError:(id)arg1 ;
-(void)cancelOperation;
-(BOOL)isInProgress;
-(BOOL)canCancelOperation;
@end

