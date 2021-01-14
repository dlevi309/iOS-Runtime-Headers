/*
* Generated on Thursday, January 14, 2021 at 2:24:27 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/Silex.framework/Silex
*/


#import <Silex/Silex-Structs.h>
@interface SXMosaicGalleryColumnLayout : NSObject {

	double _width;
	double _gutter;

}

@property (nonatomic,readonly) double width;               //@synthesize width=_width - In the implementation block
@property (nonatomic,readonly) double gutter;              //@synthesize gutter=_gutter - In the implementation block
-(double)width;
-(double)gutter;
-(double)widthForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)positionForColumnRange:(NSRange)arg1 numberOfColumns:(unsigned long long)arg2 ;
-(double)positionOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(double)widthOfColumn:(unsigned long long)arg1 inNumberOfColumns:(unsigned long long)arg2 ;
-(id)initWithWidth:(double)arg1 gutter:(double)arg2 ;
@end

