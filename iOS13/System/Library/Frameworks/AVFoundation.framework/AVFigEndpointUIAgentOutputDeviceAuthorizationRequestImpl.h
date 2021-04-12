/*
* Generated on Monday, March 1, 2021 at 2:30:51 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/AVFoundation.framework/AVFoundation
*/

#import <AVFoundation/AVOutputDeviceAuthorizationRequestImpl.h>

@class NSString, AVOutputDevice, AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl;

@interface AVFigEndpointUIAgentOutputDeviceAuthorizationRequestImpl : NSObject <AVOutputDeviceAuthorizationRequestImpl> {

	AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl* _parentSession;
	NSString* _uniqueID;
	AVOutputDevice* _outputDevice;
	NSString* _tokenType;
	/*^block*/id _completionHandler;

}

@property (__weak) AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl * parentAuthorizationSessionImpl;              //@synthesize parentSession=_parentSession - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) NSString * ID;                                                                              //@synthesize uniqueID=_uniqueID - In the implementation block
@property (nonatomic,readonly) AVOutputDevice * outputDevice;                                                              //@synthesize outputDevice=_outputDevice - In the implementation block
@property (nonatomic,readonly) NSString * authorizationTokenType;                                                          //@synthesize tokenType=_tokenType - In the implementation block
-(void)dealloc;
-(void)cancel;
-(NSString *)ID;
-(AVOutputDevice *)outputDevice;
-(NSString *)authorizationTokenType;
-(void)respondWithAuthorizationToken:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)initWithID:(id)arg1 outputDevice:(id)arg2 authorizationTokenType:(id)arg3 ;
-(void)setParentAuthorizationSessionImpl:(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)arg1 ;
-(void)enterTerminalStatus:(long long)arg1 error:(id)arg2 ;
-(AVFigEndpointUIAgentOutputDeviceAuthorizationSessionImpl *)parentAuthorizationSessionImpl;
@end

