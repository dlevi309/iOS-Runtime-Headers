/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKResource : NSObject {

	shared_ptr<pxrInternal_v0_19__pxrReserved__usdkit__::ArAsset>* _asset;
	shared_ptr<const char>* _buffer;
	long long _length;

}
+(id)resourceWithResourcePath:(id)arg1 ;
+(id)resourceWithPath:(id)arg1 ;
+(id)resourceWithURL:(id)arg1 ;
+(id)resourceWithUSKScene:(id)arg1 path:(id)arg2 ;
-(void)dealloc;
-(id)dataNoCopy;
@end

