/*
* Generated on Thursday, January 14, 2021 at 2:25:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(BiometricKitXPCExportedClientObject *)client;
-(void)setClient:(BiometricKitXPCExportedClientObject *)arg1 ;
-(id)init;
-(id)description;
-(int)type;
-(void)setStatus:(int)arg1 ;
-(long long)priority;
-(void)setPriority:(long long)arg1 ;
-(int)status;
-(unsigned)taskPausedMessage;
-(unsigned)taskResumedMessage;
-(unsigned)taskResumeFailedMessage;
-(unsigned)cancelledMessage;
@end

