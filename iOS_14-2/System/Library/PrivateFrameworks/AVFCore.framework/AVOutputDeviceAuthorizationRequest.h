/*
* Generated on Thursday, January 14, 2021 at 2:21:19 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/


@class AVOutputDeviceAuthorizationRequestInternal, NSError, NSString, AVOutputDevice;

@interface AVOutputDeviceAuthorizationRequest : NSObject {

	AVOutputDeviceAuthorizationRequestInternal* _ivars;

}

@property (readonly) long long status; 
@property (readonly) NSError * error; 
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,readonly) NSString * authorizationTokenType; 
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1 ;
-(NSError *)error;
-(id)description;
-(void)cancel;
-(long long)status;
-(void)dealloc;
-(id)impl;
@end

