/*
* Generated on Monday, March 1, 2021 at 2:31:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSArray;

@interface MKTextItemViewModel : NSObject {

	NSArray* _values;

}

@property (nonatomic,copy) NSArray * values;              //@synthesize values=_values - In the implementation block
-(void)setValues:(NSArray *)arg1 ;
-(NSArray *)values;
-(unsigned long long)numberOfRows;
-(id)initWithTextItemContainer:(id)arg1 labelsFont:(id)arg2 labelsSpacing:(double)arg3 maxWidth:(double)arg4 ;
-(id)stringsForRowAtIndex:(unsigned long long)arg1 ;
@end

