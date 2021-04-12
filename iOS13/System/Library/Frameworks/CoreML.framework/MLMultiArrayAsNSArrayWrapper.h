/*
* Generated on Monday, March 1, 2021 at 2:30:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/CoreML.framework/CoreML
*/

#import <CoreFoundation/NSArray.h>

@class MLMultiArray;

@interface MLMultiArrayAsNSArrayWrapper : NSArray {

	MLMultiArray* _multiArray;

}

@property (retain) MLMultiArray * multiArray;              //@synthesize multiArray=_multiArray - In the implementation block
-(unsigned long long)count;
-(id)objectAtIndex:(unsigned long long)arg1 ;
-(void)setMultiArray:(MLMultiArray *)arg1 ;
-(MLMultiArray *)multiArray;
-(id)initWrappingMultiArray:(id)arg1 ;
@end

