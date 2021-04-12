/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AARequest.h>

@class NSString, NSData;

@interface AADeviceProvisioningRequest : AARequest {

	NSString* _dsid;
	NSString* _url;
	NSData* _data;

}
-(id)urlString;
-(id)urlRequest;
-(id)initWithDSID:(id)arg1 URLString:(id)arg2 requestData:(id)arg3 ;
@end

