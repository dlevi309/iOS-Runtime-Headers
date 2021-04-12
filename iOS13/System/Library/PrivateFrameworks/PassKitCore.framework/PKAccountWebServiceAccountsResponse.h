/*
* Generated on Monday, March 1, 2021 at 2:31:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PassKitCore.framework/PassKitCore
*/

#import <PassKitCore/PKAccountWebServiceResponse.h>

@class NSArray, NSString;

@interface PKAccountWebServiceAccountsResponse : PKAccountWebServiceResponse {

	NSArray* _accounts;
	NSString* _lastUpdated;

}

@property (nonatomic,copy,readonly) NSArray * accounts;                  //@synthesize accounts=_accounts - In the implementation block
@property (nonatomic,copy,readonly) NSString * lastUpdated;              //@synthesize lastUpdated=_lastUpdated - In the implementation block
-(id)initWithData:(id)arg1 ;
-(NSArray *)accounts;
-(NSString *)lastUpdated;
@end

