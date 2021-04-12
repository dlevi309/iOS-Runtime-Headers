/*
* Generated on Thursday, January 14, 2021 at 2:22:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

