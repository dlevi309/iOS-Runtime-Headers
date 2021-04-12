/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)deviceSubtype;
-(id)init;
-(CGSize)largeHomeScreenIconSize;
-(int)deviceClass;
-(unsigned long long)ideom;
-(int)screenClass;
-(CGSize)homeScreenIconSize;
-(CGSize)messagesLauncherIconSize;
-(double)screenScale;
@end

