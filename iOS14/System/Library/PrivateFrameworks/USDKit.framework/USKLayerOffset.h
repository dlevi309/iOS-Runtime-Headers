/*
* Generated on Thursday, January 14, 2021 at 2:28:42 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/USDKit.framework/USDKit
*/


#import <USDKit/USDKit-Structs.h>
@interface USKLayerOffset : NSObject {

	SdfLayerOffset _layerOffset;
	double _offset;
	double _scale;

}

@property (assign,nonatomic) double offset;              //@synthesize offset=_offset - In the implementation block
@property (assign,nonatomic) double scale;               //@synthesize scale=_scale - In the implementation block
-(id)init;
-(double)scale;
-(double)offset;
-(void)setScale:(double)arg1 ;
-(unsigned long long)hash;
-(void)setOffset:(double)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(SdfLayerOffset)sdfLayerOffset;
-(id)initWithSdfLayerOffset:(SdfLayerOffset)arg1 ;
-(id)initWithOffset:(double)arg1 scale:(double)arg2 ;
@end

