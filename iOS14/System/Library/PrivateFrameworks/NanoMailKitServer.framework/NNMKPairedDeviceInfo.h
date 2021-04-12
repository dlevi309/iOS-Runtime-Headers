/*
* Generated on Thursday, January 14, 2021 at 2:26:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@interface NNMKPairedDeviceInfo : NSObject {

	double _screenWidth;
	double _screenScale;

}

@property (assign,nonatomic) double screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2 ;
-(double)screenWidth;
-(void)setScreenScale:(double)arg1 ;
-(void)setScreenWidth:(double)arg1 ;
-(double)screenScale;
@end

