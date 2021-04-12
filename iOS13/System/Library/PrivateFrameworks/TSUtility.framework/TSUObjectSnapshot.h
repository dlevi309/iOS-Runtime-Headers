/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSArray;

@interface TSUObjectSnapshot : NSObject {

	unsigned long long mEntryCount;
	void* mSnapshot;
	NSArray* mCompared;

}
-(id)init;
-(void)dealloc;
-(void)p_clear;
-(void)calibrate:(id)arg1 ;
-(void)compare;
@end

