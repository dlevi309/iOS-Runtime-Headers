/*
* Generated on Thursday, January 14, 2021 at 2:25:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
*/

#import <HomeKitDaemon/HMDBackingStoreOperation.h>

@class NSArray;

@interface HMDBackingStoreLogUpdateOperation : HMDBackingStoreOperation {

	NSArray* _values;
	long long _maskValue;
	long long _setValue;

}

@property (nonatomic,retain) NSArray * values;                 //@synthesize values=_values - In the implementation block
@property (assign,nonatomic) long long maskValue;              //@synthesize maskValue=_maskValue - In the implementation block
@property (assign,nonatomic) long long setValue;               //@synthesize setValue=_setValue - In the implementation block
-(long long)setValue;
-(NSArray *)values;
-(void)setSetValue:(long long)arg1 ;
-(void)setValues:(NSArray *)arg1 ;
-(id)initWithRowIDs:(id)arg1 successfullyPushedTo:(unsigned long long)arg2 ;
-(id)mainReturningError;
-(long long)maskValue;
-(void)setMaskValue:(long long)arg1 ;
-(id)initWithRowIDs:(id)arg1 mask:(long long)arg2 set:(long long)arg3 ;
-(id)initWithRowIDs:(id)arg1 failedPushedTo:(unsigned long long)arg2 ;
@end

