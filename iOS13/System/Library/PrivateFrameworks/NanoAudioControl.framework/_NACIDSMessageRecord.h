/*
* Generated on Monday, March 1, 2021 at 2:35:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NanoAudioControl.framework/NanoAudioControl
*/


@class PBCodable, NSString;

@interface _NACIDSMessageRecord : NSObject {

	PBCodable* _message;
	long long _type;
	double _timeout;
	NSString* _queueOne;

}

@property (nonatomic,retain) PBCodable * message;              //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long type;                   //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) double timeout;                   //@synthesize timeout=_timeout - In the implementation block
@property (nonatomic,copy) NSString * queueOne;                //@synthesize queueOne=_queueOne - In the implementation block
-(long long)type;
-(void)setType:(long long)arg1 ;
-(double)timeout;
-(void)setTimeout:(double)arg1 ;
-(PBCodable *)message;
-(void)setMessage:(PBCodable *)arg1 ;
-(NSString *)queueOne;
-(void)setQueueOne:(NSString *)arg1 ;
@end

