/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AuthKit.framework/AuthKit
*/


@class AKAppleIDAuthenticationContext;

@interface AKGrandSlamResponseHandler : NSObject {

	AKAppleIDAuthenticationContext* _context;

}

@property (nonatomic,retain) AKAppleIDAuthenticationContext * context;              //@synthesize context=_context - In the implementation block
-(id)initWithContext:(id)arg1 ;
-(AKAppleIDAuthenticationContext *)context;
-(void)_handleInvalidMasterTokenWithSubErrorCode:(long long)arg1 ;
-(void)_revokeDeviceTrust;
-(void)handleResponseError:(id)arg1 ;
-(void)setContext:(AKAppleIDAuthenticationContext *)arg1 ;
@end

