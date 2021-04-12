/*
* Generated on Thursday, January 14, 2021 at 2:26:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ARKitCore.framework/ARKitCore
*/


@class NSString;

@interface ARSessionReplayStats : NSObject {

	int _recordingFormat;
	NSString* _deviceModel;
	NSString* _osVersion;
	NSString* _arkitVersion;
	NSString* _fileName;
	unsigned long long _recordedSensorTypes;

}

@property (assign,nonatomic) int recordingFormat;                                 //@synthesize recordingFormat=_recordingFormat - In the implementation block
@property (nonatomic,retain) NSString * deviceModel;                              //@synthesize deviceModel=_deviceModel - In the implementation block
@property (nonatomic,retain) NSString * osVersion;                                //@synthesize osVersion=_osVersion - In the implementation block
@property (nonatomic,retain) NSString * arkitVersion;                             //@synthesize arkitVersion=_arkitVersion - In the implementation block
@property (nonatomic,retain) NSString * fileName;                                 //@synthesize fileName=_fileName - In the implementation block
@property (assign,nonatomic) unsigned long long recordedSensorTypes;              //@synthesize recordedSensorTypes=_recordedSensorTypes - In the implementation block
-(void)setDeviceModel:(NSString *)arg1 ;
-(void)setOsVersion:(NSString *)arg1 ;
-(NSString *)deviceModel;
-(void)setFileName:(NSString *)arg1 ;
-(NSString *)osVersion;
-(NSString *)fileName;
-(NSString *)arkitVersion;
-(int)recordingFormat;
-(void)setRecordingFormat:(int)arg1 ;
-(void)setArkitVersion:(NSString *)arg1 ;
-(unsigned long long)recordedSensorTypes;
-(void)setRecordedSensorTypes:(unsigned long long)arg1 ;
@end

