/*
* Generated on Thursday, January 14, 2021 at 2:23:54 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/CryptoTokenKit.framework/CryptoTokenKit
*/

#import <CryptoTokenKit/TKSmartCard.h>

@class TKSmartCard, NSError;

@interface TKSmartCardWithError : TKSmartCard {

	TKSmartCard* _parentCard;
	NSError* _error;

}
-(id)initWithCard:(id)arg1 error:(id)arg2 ;
-(void)transmitRequest:(id)arg1 reply:(/*^block*/id)arg2 ;
-(void)sendIns:(unsigned char)arg1 p1:(unsigned char)arg2 p2:(unsigned char)arg3 data:(id)arg4 le:(id)arg5 reply:(/*^block*/id)arg6 ;
-(void)beginSessionWithReply:(/*^block*/id)arg1 ;
@end

