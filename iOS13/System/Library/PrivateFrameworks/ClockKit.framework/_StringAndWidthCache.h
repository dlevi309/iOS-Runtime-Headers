/*
* Generated on Monday, March 1, 2021 at 2:33:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ClockKit.framework/ClockKit
*/


#import <ClockKit/ClockKit-Structs.h>
@class NSMutableArray;

@interface _StringAndWidthCache : NSObject {

	NSMutableArray* _attributedStrings;
	NSMutableArray* _boxedSizes;

}
-(id)init;
-(void)addAttributedString:(id)arg1 withSize:(CGSize)arg2 ;
-(id)attributedStringAndSize:(CGSize*)arg1 forMaxWidth:(double)arg2 ;
-(id)attributedStringForIndex:(unsigned long long)arg1 ;
-(unsigned long long)attributedStringCount;
-(id)smallestAttributedStringAndSize:(CGSize*)arg1 ;
@end

