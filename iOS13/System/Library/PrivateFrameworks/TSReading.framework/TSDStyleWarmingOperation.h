/*
* Generated on Monday, March 1, 2021 at 2:33:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSReading.framework/TSReading
*/

#import <Foundation/NSOperation.h>

@class TSSStyle, TSKAccessController;

@interface TSDStyleWarmingOperation : NSOperation {

	TSSStyle* mStyle;
	int mProperty;
	TSKAccessController* mAccessController;

}
-(void)main;
-(id)initWithStyle:(id)arg1 property:(int)arg2 accessController:(id)arg3 ;
-(void)warm;
@end

