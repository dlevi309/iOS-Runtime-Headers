/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)dealloc;
-(id)appletWithIdentifier:(id)arg1 ;
-(id)allApplets;
-(id)performECommercePayment:(id)arg1 request:(id)arg2 error:(id*)arg3 ;
-(void)didStartSession:(id)arg1 ;
-(id)performECommercePayment:(id)arg1 request:(id)arg2 ;
@end

