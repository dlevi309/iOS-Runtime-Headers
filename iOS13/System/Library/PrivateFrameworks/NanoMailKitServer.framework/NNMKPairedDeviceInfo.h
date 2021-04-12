/*
* Generated on Monday, March 1, 2021 at 2:35:42 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoMailKitServer.framework/NanoMailKitServer
*/


@interface NNMKPairedDeviceInfo : NSObject {

	double _screenWidth;
	double _screenScale;

}

@property (assign,nonatomic) double screenWidth;              //@synthesize screenWidth=_screenWidth - In the implementation block
@property (assign,nonatomic) double screenScale;              //@synthesize screenScale=_screenScale - In the implementation block
+(id)pairedDeviceInfoWithScreenWidth:(double)arg1 screenScale:(double)arg2 ;
-(void)setScreenScale:(double)arg1 ;
-(double)screenScale;
-(double)screenWidth;
-(void)setScreenWidth:(double)arg1 ;
@end

