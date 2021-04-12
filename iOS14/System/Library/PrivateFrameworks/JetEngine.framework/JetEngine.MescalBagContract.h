/*
* Generated on Thursday, January 14, 2021 at 2:23:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/JetEngine.framework/JetEngine
*/

#import <libobjc.A.dylib/AMSMescalBagContract.h>

@class AMSBagValue;

@interface JetEngine.MescalBagContract : NSObject <AMSMescalBagContract> {

	 backing;

}

@property (readonly,nonatomic) id mescalCertificateURL; 
@property (readonly,nonatomic) id mescalSetupURL; 
@property (readonly,nonatomic) id mescalPrimingURL; 
@property (readonly,nonatomic) id mescalSignedActions; 
@property (readonly,nonatomic) id mescalSignSapRequests; 
@property (readonly,nonatomic) id mescalSignSapResponses; 
-(id)init;
-(id)mescalSignSapRequests;
-(id)mescalSignSapResponses;
-(id)mescalPrimingURL;
-(id)mescalSignedActions;
-(id)mescalSetupURL;
-(id)mescalCertificateURL;
@end

