/*
* Generated on Monday, March 1, 2021 at 2:31:01 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject {

	AKAppleIDAuthenticationContext* _context;

}

@property (nonatomic,retain) AKAppleIDAuthenticationContext * context;              //@synthesize context=_context - In the implementation block
-(AKAppleIDAuthenticationContext *)context;
-(void)setContext:(AKAppleIDAuthenticationContext *)arg1 ;
-(id)initWithContext:(id)arg1 ;
-(void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1 ;
-(void)_revokeDeviceTrust;
-(void)handleResponseError:(id)arg1 ;
@end

