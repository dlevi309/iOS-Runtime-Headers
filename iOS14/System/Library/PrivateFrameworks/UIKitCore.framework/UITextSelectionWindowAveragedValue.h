/*
* Generated on Thursday, January 14, 2021 at 2:20:35 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSMutableArray;

@interface UITextSelectionWindowAveragedValue : NSObject {

	unsigned long long _depth;
	NSMutableArray* _values;

}
-(void)addValue:(double)arg1 ;
-(id)initWithDepth:(unsigned long long)arg1 ;
-(void)flushValues;
-(double)windowAveragedValue;
@end

