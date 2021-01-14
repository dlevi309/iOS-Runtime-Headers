/*
* Generated on Thursday, January 14, 2021 at 2:23:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SPOwner.framework/SPOwner
*/


@protocol OS_dispatch_queue;
@class NSString, NSObject;

@interface SPPowerAssertion : NSObject {

	unsigned _powerAssertionId;
	NSString* _reason;
	double _timeout;
	unsigned long long _type;
	NSObject*<OS_dispatch_queue> _queue;

}

@property (nonatomic,copy) NSString * reason;                                 //@synthesize reason=_reason - In the implementation block
@property (assign,nonatomic) double timeout;                                  //@synthesize timeout=_timeout - In the implementation block
@property (assign,nonatomic) unsigned long long type;                         //@synthesize type=_type - In the implementation block
@property (assign,nonatomic) unsigned powerAssertionId;                       //@synthesize powerAssertionId=_powerAssertionId - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> queue;              //@synthesize queue=_queue - In the implementation block
-(id)assertionName;
-(void)setTimeout:(double)arg1 ;
-(void)drop;
-(id)initWithReason:(id)arg1 type:(unsigned long long)arg2 timeout:(double)arg3 ;
-(double)timeout;
-(void)setType:(unsigned long long)arg1 ;
-(unsigned)powerAssertionId;
-(void)setPowerAssertionId:(unsigned)arg1 ;
-(id)assertionType;
-(void)hold;
-(NSString *)reason;
-(unsigned long long)type;
-(NSObject*<OS_dispatch_queue>)queue;
-(id)powerAssertionOption;
-(void)setReason:(NSString *)arg1 ;
-(void)setQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)_drop;
-(void)dealloc;
@end

