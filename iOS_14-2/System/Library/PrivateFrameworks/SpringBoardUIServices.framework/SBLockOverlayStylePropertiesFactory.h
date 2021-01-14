/*
* Generated on Thursday, January 14, 2021 at 2:23:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoardUIServices.framework/SpringBoardUIServices
*/


@class NSMutableDictionary;

@interface SBLockOverlayStylePropertiesFactory : NSObject {

	NSMutableDictionary* _deviceQualityToProperties;
	unsigned long long _style;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
+(id)overlayPropertiesFactoryWithStyle:(unsigned long long)arg1 ;
-(id)initWithStyle:(unsigned long long)arg1 ;
-(id)propertiesWithGraphicsQuality:(long long)arg1 ;
-(id)_fetchAndCachePropsForDeviceQuality:(long long)arg1 ;
-(id)propertiesWithDeviceDefaultGraphicsQuality;
-(unsigned long long)style;
@end

