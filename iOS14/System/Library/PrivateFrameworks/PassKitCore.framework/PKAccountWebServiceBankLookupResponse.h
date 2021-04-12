/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSString;

@interface PKAccountWebServiceBankLookupResponse : PKAccountWebServiceResponse {

	BOOL _success;
	NSString* _displayName;

}

@property (nonatomic,readonly) BOOL success;                             //@synthesize success=_success - In the implementation block
@property (nonatomic,copy,readonly) NSString * displayName;              //@synthesize displayName=_displayName - In the implementation block
-(BOOL)success;
-(id)initWithData:(id)arg1 ;
-(NSString *)displayName;
@end

