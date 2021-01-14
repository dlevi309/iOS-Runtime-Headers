/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKResource : NSObject {

	shared_ptr<pxrInternal_v0_20__pxrReserved__usdkit__::ArAsset>* _asset;
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

