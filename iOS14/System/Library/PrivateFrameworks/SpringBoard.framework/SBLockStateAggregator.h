/*
* Generated on Thursday, January 14, 2021 at 2:25:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SpringBoard.framework/SpringBoard
*/


@interface SBLockStateAggregator : NSObject {

	unsigned long long _lockState;

}
+(id)sharedInstance;
-(unsigned long long)lockState;
-(id)init;
-(id)description;
-(id)_descriptionForLockState:(unsigned long long)arg1 ;
-(void)_updateLockState;
-(BOOL)hasAnyLockState;
-(void)dealloc;
@end

