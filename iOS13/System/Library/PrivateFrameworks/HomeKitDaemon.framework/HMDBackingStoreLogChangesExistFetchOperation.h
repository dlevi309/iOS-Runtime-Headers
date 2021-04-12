/*
* Generated on Monday, March 1, 2021 at 2:33:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@interface HMDBackingStoreLogChangesExistFetchOperation : HMDBackingStoreOperation {

	/*^block*/id _fetchBlock;
	long long _maskValue;
	long long _compareValue;

}

@property (nonatomic,copy) id fetchBlock;                         //@synthesize fetchBlock=_fetchBlock - In the implementation block
@property (assign,nonatomic) long long maskValue;                 //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long compareValue;              //@synthesize compareValue=_compareValue - In the implementation block
-(id)fetchBlock;
-(void)setMaskValue:(long long)arg1 ;
-(long long)maskValue;
-(id)initWithNeedsPushTo:(unsigned long long)arg1 result:(/*^block*/id)arg2 ;
-(id)mainReturningError;
-(long long)compareValue;
-(void)setFetchBlock:(id)arg1 ;
-(void)setCompareValue:(long long)arg1 ;
@end

