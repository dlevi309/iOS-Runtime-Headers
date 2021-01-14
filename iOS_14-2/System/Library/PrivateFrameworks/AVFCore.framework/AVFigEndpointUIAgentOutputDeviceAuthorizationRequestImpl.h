/*
* Generated on Thursday, January 14, 2021 at 2:21:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AVFCore.framework/AVFCore
*/

#import <AVFCore/AVOutputDeviceAuthorizationRequestImpl.h>

@class NSString, AVOutputDevice, AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl> {

	AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl* _parentSession;
	NSString* _uniqueID;
	AVOutputDevice* _outputDevice;
	NSString* _tokenType;
	/*^block*/id _completionHandler;

}

@property (__weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl * parentAuthorizationSessionImpl;              //@synthesize parentSession=_parentSession - In the implementation block
@property (nonatomic,readonly) NSString * ID;                                                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) AVOutputDevice * outputDevice;                                                              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSString * authorizationTokenType;                                                          //@synthesize tokenType=_tokenType - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)enterTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(void)setParentAuthorizationSessionImpl:(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)arg1 ;
-(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)parentAuthorizationSessionImpl;
-(id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3 ;
-(void)cancel;
-(void)dealloc;
@end

