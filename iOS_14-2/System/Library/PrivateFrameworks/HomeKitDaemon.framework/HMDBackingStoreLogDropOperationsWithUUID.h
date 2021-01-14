/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSUUID;

@interface HMDBackingStoreLogDropOperationsWithUUID : HMDBackingStoreOperation {

	NSUUID* _uuid;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,retain) NSUUID * uuid;                       //@synthesize uuid=_uuid - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(NSUUID *)uuid;
-(void)setUuid:(NSUUID *)arg1 ;
-(id)mainReturningError;
-(long long)maskValue;
-(long long)compareValue;
-(void)setMaskValue:(long long)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
-(id)initWithUUID:(id)arg1 pushingTo:(unsigned long long)arg2 resultBlock:(/*^block*/id)arg3 ;
@end

