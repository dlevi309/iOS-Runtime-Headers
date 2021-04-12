/*
* Generated on Monday, March 1, 2021 at 2:35:23 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TouchML.framework/TouchML
*/


@class NSObject, NSString;

@interface TMLAspect : NSObject {

	int _advice;
	NSObject* _target;
	NSString* _signalName;
	NSString* _registrationKey;
	/*^block*/id _block;
	/*^block*/id _unregisterBlock;

}

@property (assign,nonatomic,__weak) NSObject * target;                  //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) int advice;                                //@synthesize advice=_advice - In the implementation block
@property (nonatomic,copy) NSString * signalName;                       //@synthesize signalName=_signalName - In the implementation block
@property (nonatomic,copy) id block;                                    //@synthesize block=_block - In the implementation block
@property (nonatomic,copy) id unregisterBlock;                          //@synthesize unregisterBlock=_unregisterBlock - In the implementation block
@property (nonatomic,readonly) NSString * registrationKey;              //@synthesize registrationKey=_registrationKey - In the implementation block
+(id)aspectForRegistrationKey:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(/*^block*/id)jsConvertedBlock:(id)arg1 ;
+(id)aspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)aspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)aspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 block:(/*^block*/id)arg4 ;
+(id)tmlAspectForObjectsImplementingProtocolNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
+(id)tmlAspectForObjectsWithClassNamed:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
+(id)tmlAspectForTarget:(id)arg1 signalOrMethodName:(id)arg2 advice:(int)arg3 ;
-(void)dealloc;
-(void)setTarget:(NSObject *)arg1 ;
-(NSObject *)target;
-(id)block;
-(void)setBlock:(id)arg1 ;
-(void)unregister;
-(id)unregisterBlock;
-(void)setUnregisterBlock:(id)arg1 ;
-(int)advice;
-(void)setAdvice:(int)arg1 ;
-(void)tmlDispose;
-(NSString *)signalName;
-(void)setSignalName:(NSString *)arg1 ;
-(void)activateWithObject:(id)arg1 arguments:(id)arg2 returnValue:(id)arg3 newArguments:(id*)arg4 newReturnValue:(id*)arg5 ;
-(NSString *)registrationKey;
@end

