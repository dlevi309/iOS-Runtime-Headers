/*
* Generated on Monday, March 1, 2021 at 2:34:48 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Espresso.framework/Espresso
*/


#import <Espresso/Espresso-Structs.h>
@class NSString;

@interface TwoNetsStyleTransfer : NSObject {

	void* ctx;
	void* plan;
	SCD_Struct_Es48* net;
	basic_string<char, std::__1::char_traits<char>, std::__1::allocator<char> > output_layer_name;
	unsigned long long dim_data0[5];
	unsigned long long dim_data0__small[5];
	unsigned long long dim_data2[5];
	unsigned long long dim_data2__small[5];
	IOSurfaceRef result;
	postprocessing_settings_t current_postprocessing_settings;
	NSString* currentNetworkPath;

}
+(BOOL)supportsANE;
-(id)init;
-(void)dealloc;
-(int)load:(id)arg1 outputName:(id)arg2 ;
-(int)widthSmall;
-(int)widthBig;
-(int)heightSmall;
-(int)heightBig;
-(IOSurfaceRef)executeSyncWithImage:(CVBufferRef)arg1 smallImage:(CVBufferRef)arg2 ;
@end

