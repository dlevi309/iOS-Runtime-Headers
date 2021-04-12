/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@class AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject {

	AMSBiometricsSignatureRequest* _originalRequest;
	NSString* _signature;

}

@property (nonatomic,retain) AMSBiometricsSignatureRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
-(AMSBiometricsSignatureRequest *)originalRequest;
-(NSString *)signature;
-(void)setOriginalRequest:(AMSBiometricsSignatureRequest *)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
@end

