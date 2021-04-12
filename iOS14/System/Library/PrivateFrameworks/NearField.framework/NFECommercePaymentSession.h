/*
* Generated on Thursday, January 14, 2021 at 2:24:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NearField.framework/NearField
*/

#import <NearField/NFSession.h>
#import <libobjc.A.dylib/NFECommercePaymentSessionCallbacks.h>

@class NSDictionary, NSString;

@interface NFECommercePaymentSession : NFSession <NFECommercePaymentSessionCallbacks> {

	NSDictionary* _appletsById;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)appletWithIdentifier:(id)arg1 ;
-(void)didStartSession:(id)arg1 ;
-(id)allApplets;
-(id)performECommercePayment:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(id)performECommercePayment:(id)arg1 request:(id)arg2 ;
@end

