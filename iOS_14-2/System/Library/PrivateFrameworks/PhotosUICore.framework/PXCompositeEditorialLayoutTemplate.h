/*
* Generated on Thursday, January 14, 2021 at 2:22:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/


#import <PhotosUICore/PhotosUICore-Structs.h>
@interface PXCompositeEditorialLayoutTemplate : NSObject {

	CGRect* _rects;
	double* _rectWeights;
	BOOL _shouldIgnoreWeights;
	long long _identifier;
	long long _numberOfRects;
	long long _numberOfColumns;
	double _tileAspectRatio;

}

@property (nonatomic,readonly) long long identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) long long numberOfRects;                //@synthesize numberOfRects=_numberOfRects - In the implementation block
@property (nonatomic,readonly) long long numberOfColumns;              //@synthesize numberOfColumns=_numberOfColumns - In the implementation block
@property (nonatomic,readonly) double tileAspectRatio;                 //@synthesize tileAspectRatio=_tileAspectRatio - In the implementation block
-(id)init;
-(id)initWithDescriptorDictionary:(id)arg1 ;
-(void)_initRectsStorageWithDescriptors:(id)arg1 ;
-(long long)numberOfRects;
-(void)_enumerateRectsUsingBlock:(/*^block*/id)arg1 ;
-(void)getComputedRects:(out CGRect*)arg1 contentSize:(out CGSize*)arg2 forReferenceSize:(CGSize)arg3 interTileSpacing:(double)arg4 ;
-(double)costForFittingLayoutItemInputs:(id)arg1 inRange:(NSRange)arg2 ofTotalItemCount:(long long)arg3 normalizedWeights:(nd*)arg4 useSaliency:(BOOL)arg5 ;
-(double)tileAspectRatio;
-(long long)numberOfColumns;
-(long long)identifier;
-(void)dealloc;
@end

