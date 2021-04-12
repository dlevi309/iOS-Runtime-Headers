/*
* Generated on Thursday, January 14, 2021 at 2:23:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CMCapture.framework/CMCapture
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
-(NSString *)portType;
-(id)initWithPortType:(id)arg1 sensorIDString:(id)arg2 sensorIDDictionary:(id)arg3 cameraInfo:(id)arg4 ;
-(NSDictionary *)sensorIDDictionary;
-(id)description;
-(NSDictionary *)cameraInfo;
-(NSString *)sensorIDString;
-(void)dealloc;
@end

