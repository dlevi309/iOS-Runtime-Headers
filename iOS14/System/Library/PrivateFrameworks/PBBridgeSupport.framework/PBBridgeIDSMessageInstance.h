/*
* Generated on Thursday, January 14, 2021 at 2:28:09 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PBBridgeSupport.framework/PBBridgeSupport
*/


@class NSNumber;

@interface PBBridgeIDSMessageInstance : NSObject {

	unsigned short _typeID;
	NSNumber* _sentAbsoluteTime;
	long long _retryCount;
	double _retryInterval;
	/*^block*/id _retryAction;

}

@property (nonatomic,retain) NSNumber * sentAbsoluteTime;              //@synthesize sentAbsoluteTime=_sentAbsoluteTime - In the implementation block
@property (assign,nonatomic) unsigned short typeID;                    //@synthesize typeID=_typeID - In the implementation block
@property (assign,nonatomic) long long retryCount;                     //@synthesize retryCount=_retryCount - In the implementation block
@property (assign,nonatomic) double retryInterval;                     //@synthesize retryInterval=_retryInterval - In the implementation block
@property (nonatomic,copy) id retryAction;                             //@synthesize retryAction=_retryAction - In the implementation block
+(id)newMessageInstanceOfType:(unsigned short)arg1 retryCount:(long long)arg2 retryInterval:(double)arg3 withAction:(/*^block*/id)arg4 ;
-(void)setRetryCount:(long long)arg1 ;
-(long long)retryCount;
-(id)init;
-(double)retryInterval;
-(id)description;
-(unsigned short)typeID;
-(id)retryAction;
-(void)setRetryInterval:(double)arg1 ;
-(void)setRetryAction:(id)arg1 ;
-(void)setSentAbsoluteTime:(NSNumber *)arg1 ;
-(void)setTypeID:(unsigned short)arg1 ;
-(NSNumber *)sentAbsoluteTime;
@end

