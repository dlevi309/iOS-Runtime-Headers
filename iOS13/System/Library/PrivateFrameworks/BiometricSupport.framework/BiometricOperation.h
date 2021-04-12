/*
* Generated on Monday, March 1, 2021 at 2:34:02 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BiometricSupport.framework/BiometricSupport
*/


@class BiometricKitXPCExportedClientObject;

@interface BiometricOperation : NSObject {

	int _status;
	unsigned _cancelledMessage;
	BiometricKitXPCExportedClientObject* _client;
	long long _priority;

}

@property (nonatomic,readonly) int type; 
@property (nonatomic,retain) BiometricKitXPCExportedClientObject * client;              //@synthesize client=_client - In the implementation block
@property (assign,nonatomic) int status;                                                //@synthesize status=_status - In the implementation block
@property (assign,nonatomic) long long priority;                                        //@synthesize priority=_priority - In the implementation block
@property (nonatomic,readonly) unsigned taskPausedMessage; 
@property (nonatomic,readonly) unsigned taskResumedMessage; 
@property (nonatomic,readonly) unsigned taskResumeFailedMessage; 
@property (nonatomic,readonly) unsigned cancelledMessage;                               //@synthesize cancelledMessage=_cancelledMessage - In the implementation block
-(id)init;
-(id)description;
-(int)type;
-(int)status;
-(long long)priority;
-(BiometricKitXPCExportedClientObject *)client;
-(void)setClient:(BiometricKitXPCExportedClientObject *)arg1 ;
-(void)setPriority:(long long)arg1 ;
-(void)setStatus:(int)arg1 ;
-(unsigned)taskPausedMessage;
-(unsigned)taskResumedMessage;
-(unsigned)taskResumeFailedMessage;
-(unsigned)cancelledMessage;
@end

