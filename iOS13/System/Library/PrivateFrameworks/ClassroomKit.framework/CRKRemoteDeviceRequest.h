/*
* Generated on Monday, March 1, 2021 at 2:34:13 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClassroomKit.framework/ClassroomKit
*/

#import <Catalyst/CATTaskRequest.h>

@class NSString, CATTaskRequest;

@interface CRKRemoteDeviceRequest : CATTaskRequest {

	NSString* _deviceIdentifier;
	CATTaskRequest* _remoteRequest;

}

@property (nonatomic,copy) NSString * deviceIdentifier;                   //@synthesize deviceIdentifier=_deviceIdentifier - In the implementation block
@property (nonatomic,retain) CATTaskRequest * remoteRequest;              //@synthesize remoteRequest=_remoteRequest - In the implementation block
+(BOOL)supportsSecureCoding;
+(Class)whitelistedClassForResultObject;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(CATTaskRequest *)remoteRequest;
-(void)setRemoteRequest:(CATTaskRequest *)arg1 ;
@end

