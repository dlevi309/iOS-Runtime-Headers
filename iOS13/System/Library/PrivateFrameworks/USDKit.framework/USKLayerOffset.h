/*
* Generated on Monday, March 1, 2021 at 2:35:25 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(double)scale;
-(void)setOffset:(double)arg1 ;
-(void)setScale:(double)arg1 ;
-(double)offset;
-(SdfLayerOffset)sdfLayerOffset;
-(id)initWithSdfLayerOffset:(SdfLayerOffset)arg1 ;
-(id)initWithOffset:(double)arg1 scale:(double)arg2 ;
@end

