/*
* Generated on Thursday, January 14, 2021 at 2:22:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppleAccount.framework/AppleAccount
*/

#import <AppleAccount/AAResponse.h>

@class NSNumber, NSString, NSDictionary, AALoginResponseAppleAccountInfo, AALoginResponseiCloudTokens, AALoginResponseDataclasses;

@interface AALoginAccountResponse : AAResponse {

	NSNumber* _status;
	NSString* _statusMessage;
	NSDictionary* _responseForDelegates;
	NSString* _dsid;
	AALoginResponseAppleAccountInfo* _appleAccountInfo;
	AALoginResponseiCloudTokens* _iCloudTokens;
	AALoginResponseDataclasses* _dataclasses;

}

@property (nonatomic,readonly) NSNumber * status;                                               //@synthesize status=_status - In the implementation block
@property (nonatomic,readonly) NSString * statusMessage;                                        //@synthesize statusMessage=_statusMessage - In the implementation block
@property (nonatomic,readonly) NSDictionary * responseForDelegates;                             //@synthesize responseForDelegates=_responseForDelegates - In the implementation block
@property (nonatomic,readonly) NSString * dsid;                                                 //@synthesize dsid=_dsid - In the implementation block
@property (nonatomic,readonly) AALoginResponseAppleAccountInfo * appleAccountInfo;              //@synthesize appleAccountInfo=_appleAccountInfo - In the implementation block
@property (nonatomic,readonly) AALoginResponseiCloudTokens * iCloudTokens;                      //@synthesize iCloudTokens=_iCloudTokens - In the implementation block
@property (nonatomic,readonly) AALoginResponseDataclasses * dataclasses;                        //@synthesize dataclasses=_dataclasses - In the implementation block
-(NSString *)dsid;
-(id)initWithHTTPResponse:(id)arg1 data:(id)arg2 ;
-(NSString *)statusMessage;
-(AALoginResponseiCloudTokens *)iCloudTokens;
-(void)_parseResponse:(long long)arg1 responseBody:(id)arg2 ;
-(NSDictionary *)responseForDelegates;
-(id)responseParametersForServiceIdentifier:(id)arg1 ;
-(id)initWithHttpStatus:(long long)arg1 responseBody:(id)arg2 ;
-(AALoginResponseAppleAccountInfo *)appleAccountInfo;
-(id)convertToProvisioningResponse;
-(id)convertToLoginDelegatesResponse;
-(AALoginResponseDataclasses *)dataclasses;
-(NSNumber *)status;
@end

