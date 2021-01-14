/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class CNContact;

@interface PKAccountWebServiceAccountUserInfoResponse : PKAccountWebServiceResponse {

	CNContact* _userInfo;

}

@property (nonatomic,readonly) CNContact * userInfo;              //@synthesize userInfo=_userInfo - In the implementation block
-(CNContact *)userInfo;
-(id)initWithData:(id)arg1 ;
-(id)_stringValueFromDictionary:(id)arg1 key:(id)arg2 isOptional:(BOOL)arg3 ;
@end

