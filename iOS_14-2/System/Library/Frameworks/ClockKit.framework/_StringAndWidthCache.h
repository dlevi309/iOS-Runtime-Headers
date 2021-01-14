/*
* Generated on Thursday, January 14, 2021 at 2:26:53 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ClockKit.framework/ClockKit
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

