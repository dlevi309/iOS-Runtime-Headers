/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@class NSMutableArray;

@interface ISHintedValue : NSObject {

	unsigned long long _options;
	NSMutableArray* _dimensions;
	NSMutableArray* _values;

}

@property (readonly) NSMutableArray * dimensions;              //@synthesize dimensions=_dimensions - In the implementation block
@property (readonly) NSMutableArray * values;                  //@synthesize values=_values - In the implementation block
@property (assign) unsigned long long options;                 //@synthesize options=_options - In the implementation block
-(id)init;
-(unsigned long long)options;
-(id)initWithOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)values;
-(void)setOptions:(unsigned long long)arg1 ;
-(NSMutableArray *)dimensions;
-(long long)indexForSize:(CGSize)arg1 ;
-(id)hintedValueForIndex:(long long)arg1 ;
-(void)addHintedValue:(id)arg1 forSize:(CGSize)arg2 ;
-(id)hintedValueForSize:(CGSize)arg1 ;
-(BOOL)sizeOutsideHintedRange:(CGSize)arg1 ;
-(double)scaleFactorForSize:(CGSize)arg1 ;
-(double)interpolationFactorForSize:(CGSize)arg1 ;
@end

