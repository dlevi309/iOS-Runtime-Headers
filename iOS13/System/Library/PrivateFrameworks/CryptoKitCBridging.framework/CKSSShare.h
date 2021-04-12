/*
* Generated on Monday, March 1, 2021 at 2:34:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/CryptoKitCBridging.framework/CryptoKitCBridging
*/


#import <CryptoKitCBridging/CryptoKitCBridging-Structs.h>
@interface CKSSShare : NSObject {

	cczp* _field;
	ccss_shamir_share* _share;
	unsigned long long _share_size;

}
-(void)dealloc;
-(unsigned)x;
-(id)y;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 x:(unsigned)arg2 y:(id)arg3 ;
-(id)initWithParams:(ccss_shamir_parameters*)arg1 share:(ccss_shamir_share*)arg2 ;
-(void)loadInitializedccShare:(ccss_shamir_share*)arg1 ;
@end

