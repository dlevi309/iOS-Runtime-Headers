/*
* Generated on Thursday, January 14, 2021 at 2:21:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)lastUpdated;
-(NSArray *)accounts;
-(id)initWithData:(id)arg1 ;
@end

