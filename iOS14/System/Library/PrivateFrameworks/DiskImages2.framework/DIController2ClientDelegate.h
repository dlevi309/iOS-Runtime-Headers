/*
* Generated on Thursday, January 14, 2021 at 2:27:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DiskImages2.framework/DiskImages2
*/

#import <libobjc.A.dylib/DIController2ClientProtocol.h>

@class DIDeviceHandle;

@interface DIController2ClientDelegate : NSObject <DIController2ClientProtocol> {

	DIDeviceHandle* _deviceHandle;

}

@property (nonatomic,retain) DIDeviceHandle * deviceHandle;              //@synthesize deviceHandle=_deviceHandle - In the implementation block
-(DIDeviceHandle *)deviceHandle;
-(void)setDeviceHandle:(DIDeviceHandle *)arg1 ;
-(void)attachCompletedWithHandle:(id)arg1 reply:(/*^block*/id)arg2 ;
@end

