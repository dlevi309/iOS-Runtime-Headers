/*
* Generated on Monday, March 1, 2021 at 2:32:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/IconServices.framework/IconServices
*/


#import <IconServices/IconServices-Structs.h>
@interface ISImageSpecification : NSObject {

	double _scale;
	ISImageSpecification* _smallerSpecification;
	ISImageSpecification* _largerSpecification;
	CGSize _size;

}

@property (readonly) CGSize size;                                              //@synthesize size=_size - In the implementation block
@property (readonly) double scale;                                             //@synthesize scale=_scale - In the implementation block
@property (readonly) ISImageSpecification * smallerSpecification;              //@synthesize smallerSpecification=_smallerSpecification - In the implementation block
@property (readonly) ISImageSpecification * largerSpecification;               //@synthesize largerSpecification=_largerSpecification - In the implementation block
-(CGSize)size;
-(double)scale;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
-(void)setLargerSpecification:(ISImageSpecification *)arg1 ;
-(void)setSmallerSpecification:(ISImageSpecification *)arg1 ;
-(ISImageSpecification *)smallerSpecification;
-(ISImageSpecification *)largerSpecification;
@end

