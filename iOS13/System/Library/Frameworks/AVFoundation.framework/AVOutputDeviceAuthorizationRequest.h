/*
* Generated on Monday, March 1, 2021 at 2:30:50 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
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
-(void)dealloc;
-(id)description;
-(NSError *)error;
-(void)cancel;
-(long long)status;
-(id)impl;
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithOutputDeviceAuthorizationRequestImpl:(id)arg1 ;
@end

