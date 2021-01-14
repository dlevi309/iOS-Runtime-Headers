/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

@class NSString, AVOutputDevice;


@protocol AVOutputDeviceAuthorizationRequestImpl <NSObject>
@property (nonatomic,readonly) NSString * ID; 
@property (nonatomic,readonly) AVOutputDevice * outputDevice; 
@property (nonatomic,readonly) NSString * authorizationTokenType; 
@required
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2;
-(void)cancel;

@end

