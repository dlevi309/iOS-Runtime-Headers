/*
* Generated on Thursday, January 14, 2021 at 2:22:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MapKit.framework/MapKit
*/


@class NSArray;

@interface MKVKImageSourceCalculationParameters : NSObject {

	NSArray* _imageSourceKeys;
	double _scale;

}

@property (nonatomic,copy,readonly) NSArray * imageSourceKeys;              //@synthesize imageSourceKeys=_imageSourceKeys - In the implementation block
@property (nonatomic,readonly) double scale;                                //@synthesize scale=_scale - In the implementation block
-(double)scale;
-(NSArray *)imageSourceKeys;
-(id)initWithImageSourceKeys:(id)arg1 scale:(double)arg2 ;
@end

