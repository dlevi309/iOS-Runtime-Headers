/*
* Generated on Thursday, January 14, 2021 at 2:27:36 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
*/


#import <CryptoKitCBridging/CryptoKitCBridging-Structs.h>
@interface CKSSShare : NSObject {

	cczp* _field;
	ccss_shamir_share* _share;
	unsigned long long _share_size;

}
-(unsigned)x;
-(id)y;
-(void)dealloc;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 x:(unsigned)arg2 y:(id)arg3 ;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 share:(ccss_shamir_share*)arg2 ;
-(void)loadInitializedccShare:(ccss_shamir_share*)arg1 ;
@end

