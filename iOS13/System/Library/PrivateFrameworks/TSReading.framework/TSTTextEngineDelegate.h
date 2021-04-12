/*
* Generated on Monday, March 1, 2021 at 2:33:19 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <TSReading/TSReading-Structs.h>
#import <TSReading/TSWPTextDelegate.h>

@class TSWPPadding;

@interface TSTTextEngineDelegate : NSObject <TSWPTextDelegate> {

	TSWPPadding* mPadding;
	unsigned mVerticalAlignment;

}
-(void)dealloc;
-(unsigned)verticalAlignment;
-(id)padding;
-(BOOL)forceWesternLineBreaking;
-(id)initWithPadding:(UIEdgeInsets)arg1 verticalAlignment:(unsigned)arg2 ;
@end

