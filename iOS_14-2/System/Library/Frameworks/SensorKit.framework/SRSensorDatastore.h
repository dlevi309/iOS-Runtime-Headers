/*
* Generated on Thursday, January 14, 2021 at 2:26:31 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SensorKit.framework/SensorKit
*/


@class SRDefaults, SRFrameStore;

@interface SRSensorDatastore : NSObject {

	unsigned long long _permission;
	unsigned long long _maxAllowedPages;
	float _segmentResizeFactor;
	SRDefaults* _defaults;
	SRFrameStore* _framesStore;
	SRFrameStore* _metadata;

}
+(void)initialize;
-(void)dealloc;
@end

