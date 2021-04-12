/*
* Generated on Thursday, January 14, 2021 at 2:24:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(ISImageSpecification *)smallerSpecification;
-(CGSize)size;
-(double)scale;
-(ISImageSpecification *)largerSpecification;
-(void)setLargerSpecification:(ISImageSpecification *)arg1 ;
-(void)setSmallerSpecification:(ISImageSpecification *)arg1 ;
-(id)initWithSize:(CGSize)arg1 scale:(double)arg2 ;
@end

