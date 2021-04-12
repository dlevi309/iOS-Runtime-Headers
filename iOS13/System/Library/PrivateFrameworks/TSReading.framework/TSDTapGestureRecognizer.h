/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <UIKitCore/UITapGestureRecognizer.h>

@interface TSDTapGestureRecognizer : UITapGestureRecognizer {

	CGPoint mFirstTapLocation;
	BOOL mSavedFirstTapLocation;
	unsigned long long mTapCount;

}

@property (nonatomic,readonly) CGPoint firstTapLocation; 
@property (nonatomic,readonly) unsigned long long tapCount; 
-(void)reset;
-(void)touchesBegan:(id)arg1 withEvent:(id)arg2 ;
-(unsigned long long)tapCount;
-(CGPoint)firstTapLocation;
@end

