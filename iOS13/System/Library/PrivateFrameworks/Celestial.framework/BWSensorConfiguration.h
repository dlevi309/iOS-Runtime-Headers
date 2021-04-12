/*
* Generated on Monday, March 1, 2021 at 2:31:38 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/Celestial.framework/Celestial
*/


@class NSString, NSDictionary;

@interface BWSensorConfiguration : NSObject {

	NSString* _portType;
	NSString* _sensorIDString;
	NSDictionary* _sensorIDDictionary;
	NSDictionary* _cameraInfo;

}

@property (nonatomic,readonly) NSString * portType;                            //@synthesize portType=_portType - In the implementation block
@property (nonatomic,readonly) NSString * sensorIDString;                      //@synthesize sensorIDString=_sensorIDString - In the implementation block
@property (nonatomic,readonly) NSDictionary * sensorIDDictionary;              //@synthesize sensorIDDictionary=_sensorIDDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * cameraInfo;                      //@synthesize cameraInfo=_cameraInfo - In the implementation block
-(void)dealloc;
-(id)description;
-(NSString *)portType;
-(id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4 ;
-(NSString *)sensorIDString;
-(NSDictionary *)sensorIDDictionary;
-(NSDictionary *)cameraInfo;
@end

