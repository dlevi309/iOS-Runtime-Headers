/*
* Generated on Thursday, January 14, 2021 at 2:26:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TipsDaemon.framework/TipsDaemon
*/

#import <TipsDaemon/TPSTargetingValidation.h>

@protocol TPSCloudDeviceDataSource;
@class TPSCloudDeviceInfo;

@interface TPSCloudDeviceValidation : TPSTargetingValidation {

	TPSCloudDeviceInfo* _deviceInfo;
	id<TPSCloudDeviceDataSource> _dataSource;

}

@property (nonatomic,retain) TPSCloudDeviceInfo * deviceInfo;                             //@synthesize deviceInfo=_deviceInfo - In the implementation block
@property (assign,nonatomic,__weak) id<TPSCloudDeviceDataSource> dataSource;              //@synthesize dataSource=_dataSource - In the implementation block
-(TPSCloudDeviceInfo *)deviceInfo;
-(void)setDeviceInfo:(TPSCloudDeviceInfo *)arg1 ;
-(id<TPSCloudDeviceDataSource>)dataSource;
-(id)description;
-(void)setDataSource:(id<TPSCloudDeviceDataSource>)arg1 ;
-(id)initWithDeviceInfo:(id)arg1 ;
-(void)validateWithCompletion:(/*^block*/id)arg1 ;
@end

