/*
* Generated on Thursday, January 14, 2021 at 2:20:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/

#import <libobjc.A.dylib/NSSecureCoding.h>

@class AMSBiometricsSignatureRequest, NSString;

@interface AMSBiometricsSignatureResult : NSObject <NSSecureCoding> {

	AMSBiometricsSignatureRequest* _originalRequest;
	NSString* _signature;

}

@property (nonatomic,retain) AMSBiometricsSignatureRequest * originalRequest;              //@synthesize originalRequest=_originalRequest - In the implementation block
@property (nonatomic,retain) NSString * signature;                                         //@synthesize signature=_signature - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSString *)signature;
-(AMSBiometricsSignatureRequest *)originalRequest;
-(void)setOriginalRequest:(AMSBiometricsSignatureRequest *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setSignature:(NSString *)arg1 ;
@end

