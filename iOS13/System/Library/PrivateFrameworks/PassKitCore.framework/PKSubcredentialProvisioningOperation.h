/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id<PKSubcredentialProvisioningOperationDelegate>)delegate;
-(void)failWithError:(id)arg1 ;
-(PKSubcredentialProvisioningOperationContext *)context;
-(PKSubcredentialProvisioningConfiguration *)configuration;
-(void)cancelOperation;
-(void)failWithErrorCode:(long long)arg1 description:(id)arg2 ;
-(void)advanceToState:(long long)arg1 ;
-(id)initWithConfiguration:(id)arg1 context:(id)arg2 delegate:(id)arg3 ;
-(void)performOperation;
-(void)failWithErrorCode:(long long)arg1 description:(id)arg2 underlyingError:(id)arg3 ;
-(BOOL)isInProgress;
-(BOOL)canCancelOperation;
-(BOOL)canBeRestarted;
@end

