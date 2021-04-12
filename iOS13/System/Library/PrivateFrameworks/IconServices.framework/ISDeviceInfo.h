/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@interface ISDeviceInfo : NSObject {

	unsigned long long _screenClass;
	unsigned long long _deviceClass;
	unsigned long long _deviceSubtype;
	double _screenScale;

}

@property (readonly) int screenClass; 
@property (readonly) int deviceClass; 
@property (readonly) double screenScale;                            //@synthesize screenScale=_screenScale - In the implementation block
@property (readonly) CGSize homeScreenIconSize; 
@property (readonly) CGSize largeHomeScreenIconSize; 
@property (readonly) CGSize messagesLauncherIconSize; 
@property (readonly) unsigned long long ideom; 
@property (readonly) unsigned long long deviceSubtype;              //@synthesize deviceSubtype=_deviceSubtype - In the implementation block
+(id)sharedInstance;
-(id)init;
-(int)deviceClass;
-(double)screenScale;
-(unsigned long long)deviceSubtype;
-(int)screenClass;
-(CGSize)homeScreenIconSize;
-(unsigned long long)ideom;
-(CGSize)largeHomeScreenIconSize;
-(CGSize)messagesLauncherIconSize;
@end

