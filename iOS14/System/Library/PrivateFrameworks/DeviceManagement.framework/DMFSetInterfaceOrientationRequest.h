/*
* Generated on Thursday, January 14, 2021 at 2:23:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/DeviceManagement.framework/DeviceManagement
*/

#import <DeviceManagement/DMFTaskRequest.h>

@interface DMFSetInterfaceOrientationRequest : DMFTaskRequest {

	BOOL _lockOrientation;
	unsigned long long _interfaceOrientation;

}

@property (assign,nonatomic) BOOL lockOrientation;                                 //@synthesize lockOrientation=_lockOrientation - In the implementation block
@property (assign,nonatomic) unsigned long long interfaceOrientation;              //@synthesize interfaceOrientation=_interfaceOrientation - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(BOOL)lockOrientation;
-(void)setLockOrientation:(BOOL)arg1 ;
-(unsigned long long)interfaceOrientation;
-(id)initWithCoder:(id)arg1 ;
@end

