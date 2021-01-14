/*
* Generated on Thursday, January 14, 2021 at 2:27:28 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)deviceIdentifier;
-(void)setDeviceIdentifier:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(CATTaskRequest *)remoteRequest;
-(id)initWithCoder:(id)arg1 ;
-(void)setRemoteRequest:(CATTaskRequest *)arg1 ;
@end

