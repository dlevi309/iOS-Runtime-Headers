/*
* Generated on Monday, March 1, 2021 at 2:33:17 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/


#import <TSReading/TSReading-Structs.h>
@interface EQKitAdjustableSpace : NSObject {

	double mAscent;
	double mDescent;
	double mWidth;

}

@property (nonatomic,readonly) double ascent; 
@property (nonatomic,readonly) double descent; 
@property (nonatomic,readonly) double width; 
+(void)appendSpaceToAttributedString:(id)arg1 ascent:(double)arg2 descent:(double)arg3 width:(double)arg4 ;
+(CTRunDelegateRef)newRunDelegateWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3 ;
-(double)width;
-(double)ascent;
-(double)descent;
-(id)initWithAscent:(double)arg1 descent:(double)arg2 width:(double)arg3 ;
@end

