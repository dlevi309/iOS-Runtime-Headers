/*
* Generated on Monday, March 1, 2021 at 2:33:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
*/


@class ATAsset, NSFileHandle;

@interface ATLocalCloudAssetRequest : NSObject {

	ATAsset* _asset;
	NSFileHandle* _fileHandle;
	double _startTime;

}

@property (nonatomic,retain) ATAsset * asset;                        //@synthesize asset=_asset - In the implementation block
@property (nonatomic,retain) NSFileHandle * fileHandle;              //@synthesize fileHandle=_fileHandle - In the implementation block
@property (assign,nonatomic) double startTime;                       //@synthesize startTime=_startTime - In the implementation block
-(NSFileHandle *)fileHandle;
-(ATAsset *)asset;
-(void)setAsset:(ATAsset *)arg1 ;
-(double)startTime;
-(void)setStartTime:(double)arg1 ;
-(void)setFileHandle:(NSFileHandle *)arg1 ;
@end

