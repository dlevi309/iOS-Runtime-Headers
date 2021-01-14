/*
* Generated on Thursday, January 14, 2021 at 2:21:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKApplyWebServiceRequest.h>

@class NSURL;

@interface PKApplyWebServiceApplicationsRequest : PKApplyWebServiceRequest {

	NSURL* _applyServiceURL;

}

@property (nonatomic,retain) NSURL * applyServiceURL;              //@synthesize applyServiceURL=_applyServiceURL - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)applyServiceURL;
-(id)_urlRequestWithServiceURL:(id)arg1 appleAccountInformation:(id)arg2 ;
-(void)setApplyServiceURL:(NSURL *)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

