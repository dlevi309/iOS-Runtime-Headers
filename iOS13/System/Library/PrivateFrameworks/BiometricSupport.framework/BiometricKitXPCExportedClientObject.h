/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)description;
-(BiometricKitXPCExportedObject *)exportedObject;
-(unsigned long long)clientID;
-(NSDictionary *)clientInfo;
-(void)statusMessage:(unsigned)arg1 ;
-(void)enrollResult:(id)arg1 ;
-(void)homeButtonPressed;
-(void)touchIDButtonPressed:(BOOL)arg1 ;
-(void)taskResumeStatus:(int)arg1 ;
-(id)initWithClientID:(unsigned long long)arg1 clientInfo:(id)arg2 exportedObject:(id)arg3 ;
-(void)setDelegateRegistered:(BOOL)arg1 ;
-(void)setClientAppIsBackground:(BOOL)arg1 ;
-(void)setClientAppIsInactive:(BOOL)arg1 ;
-(void)enrollUpdate:(id)arg1 ;
-(void)enrollFeedback:(id)arg1 ;
-(void)matchResult:(id)arg1 details:(id)arg2 ;
-(void)statusMessage:(unsigned)arg1 details:(id)arg2 ;
-(void)templateUpdate:(id)arg1 details:(id)arg2 ;
-(BOOL)delegateRegistered;
-(BOOL)clientAppIsBackground;
-(BOOL)clientAppIsInactive;
@end

