/*
* Generated on Monday, March 1, 2021 at 2:33:20 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/TSUtility.framework/TSUtility
*/

#import <Foundation/NSFormatter.h>

@class NSNumberFormatter;

@interface TSUNumberOrDateOrDurationFormatter : NSFormatter {

	NSNumberFormatter* mNumberFormatter;

}
-(id)init;
-(void)dealloc;
-(id)stringForObjectValue:(id)arg1 ;
-(BOOL)getObjectValue:(id*)arg1 forString:(id)arg2 errorDescription:(id*)arg3 ;
@end

