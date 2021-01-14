/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)submitWithCompletionQueue:(id)arg1 handler:(/*^block*/id)arg2 ;
-(void)cancel;
-(id)initWithRequest:(id)arg1 traits:(id)arg2 ;
@end

