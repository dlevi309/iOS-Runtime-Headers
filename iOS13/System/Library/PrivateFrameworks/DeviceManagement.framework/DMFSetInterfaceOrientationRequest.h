/*
* Generated on Monday, March 1, 2021 at 2:32:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)initWithCoder:(id)arg1 ;
-(unsigned long long)interfaceOrientation;
-(void)setInterfaceOrientation:(unsigned long long)arg1 ;
-(BOOL)lockOrientation;
-(void)setLockOrientation:(BOOL)arg1 ;
@end

