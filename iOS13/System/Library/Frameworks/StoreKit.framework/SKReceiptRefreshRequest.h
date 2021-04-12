/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/StoreKit.framework/StoreKit
*/

#import <StoreKit/SKRequest.h>

@class NSDictionary;

@interface SKReceiptRefreshRequest : SKRequest {

	NSDictionary* _properties;

}

@property (nonatomic,readonly) NSDictionary * receiptProperties;              //@synthesize properties=_properties - In the implementation block
-(void)_start;
-(void)_handleReply:(id)arg1 ;
-(BOOL)_wantsExpired;
-(BOOL)_wantsRevoked;
-(BOOL)_wantsVPP;
-(void)_requestCompletedWithError:(id)arg1 ;
-(id)initWithReceiptProperties:(id)arg1 ;
-(NSDictionary *)receiptProperties;
@end

