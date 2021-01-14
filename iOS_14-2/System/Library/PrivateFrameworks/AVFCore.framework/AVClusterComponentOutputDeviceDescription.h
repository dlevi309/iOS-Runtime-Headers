/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceDescription.h>

@class NSString;

@interface AVClusterComponentOutputDeviceDescription : NSObject <AVOutputDeviceDescription> {

	NSString* _deviceID;
	NSString* _deviceName;
	long long _deviceType;
	long long _deviceSubType;
	BOOL _isClusterLeader;

}

@property (nonatomic,readonly) NSString * deviceName;                //@synthesize deviceName=_deviceName - In the implementation block
@property (nonatomic,readonly) NSString * deviceID;                  //@synthesize deviceID=_deviceID - In the implementation block
@property (nonatomic,readonly) long long deviceType;                 //@synthesize deviceType=_deviceType - In the implementation block
@property (nonatomic,readonly) long long deviceSubType;              //@synthesize deviceSubType=_deviceSubType - In the implementation block
@property (nonatomic,readonly) BOOL isClusterLeader;                 //@synthesize isClusterLeader=_isClusterLeader - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(BOOL)isClusterLeader;
-(long long)deviceType;
-(NSString *)deviceName;
-(NSString *)deviceID;
-(long long)deviceSubType;
-(id)initWithDeviceID:(id)arg1 deviceName:(id)arg2 deviceSubType:(long long)arg3 isClusterLeader:(BOOL)arg4 ;
-(void)dealloc;
@end

