/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

