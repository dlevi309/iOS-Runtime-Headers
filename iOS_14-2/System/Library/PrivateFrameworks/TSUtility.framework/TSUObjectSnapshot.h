/*
* Generated on Thursday, January 14, 2021 at 2:28:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/


@class NSArray;

@interface TSUObjectSnapshot : NSObject {

	unsigned long long mEntryCount;
	void* mSnapshot;
	NSArray* mCompared;

}
-(id)init;
-(void)p_clear;
-(void)compare;
-(void)dealloc;
-(void)calibrate:(id)arg1 ;
@end

