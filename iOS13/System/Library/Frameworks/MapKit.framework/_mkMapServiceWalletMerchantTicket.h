/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/

#import <libobjc.A.dylib/MKMapServiceWalletMerchantTicket.h>

@protocol GEOMapServiceTicket;
@class NSString;

@interface _mkMapServiceWalletMerchantTicket : NSObject <MKMapServiceWalletMerchantTicket> {

	id<GEOMapServiceTicket> _ticket;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancel;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
-(void)submitWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
@end

