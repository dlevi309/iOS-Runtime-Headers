/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@class NSDictionary, BiometricKitXPCExportedObject;

@interface BiometricKitXPCExportedClientObject : NSObject {

	unsigned long long _clientID;
	NSDictionary* _clientInfo;
	BiometricKitXPCExportedObject* _exportedObject;
	BOOL _delegateRegistered;
	BOOL _clientAppIsBackground;
	BOOL _clientAppIsInactive;

}

@property (nonatomic,readonly) unsigned long long clientID;                                        //@synthesize clientID=_clientID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * clientInfo;                                     //@synthesize clientInfo=_clientInfo - In the implementation block
@property (nonatomic,readonly) BOOL delegateRegistered;                                            //@synthesize delegateRegistered=_delegateRegistered - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsBackground;                                         //@synthesize clientAppIsBackground=_clientAppIsBackground - In the implementation block
@property (nonatomic,readonly) BOOL clientAppIsInactive;                                           //@synthesize clientAppIsInactive=_clientAppIsInactive - In the implementation block
@property (nonatomic,__weak,readonly) BiometricKitXPCExportedObject * exportedObject; 
-(unsigned long long)clientID;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 ;
-(BiometricKitXPCExportedObject *)exportedObject;
-(NSDictionary *)clientInfo;
-(void)enrollUpdate:(id)arg1 ;
-(void)setClientAppIsInactive:(BOOL)arg1 ;
-(BOOL)clientAppIsInactive;
-(void)statusMessage:(unsigned)arg1 ;
-(id)description;
-(void)touchIDButtonPressed:(BOOL)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)setDelegateRegistered:(BOOL)arg1 ;
-(void)taskResumeStatus:(int)arg1 ;
-(void)homeButtonPressed;
-(void)setClientAppIsBackground:(BOOL)arg1 ;
-(BOOL)clientAppIsBackground;
-(void)matchResult:(id)arg1 details:(id)arg2 ;
-(BOOL)delegateRegistered;
-(void)enrollFeedback:(id)arg1 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 ;
-(id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3 ;
@end

