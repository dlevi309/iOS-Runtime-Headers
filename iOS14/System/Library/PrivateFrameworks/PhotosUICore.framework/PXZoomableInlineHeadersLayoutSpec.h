/*
* Generated on Thursday, January 14, 2021 at 2:22:37 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <PhotosUICore/PXFeatureSpec.h>

@interface PXZoomableInlineHeadersLayoutSpec : PXFeatureSpec {

	UIEdgeInsets _headerFloatMargins;
	UIEdgeInsets _headerFloatMarginsWithTallSafeAreaInsets;
	unsigned long long _style;
	double _headerOffsetY;

}

@property (nonatomic,readonly) unsigned long long style;              //@synthesize style=_style - In the implementation block
@property (nonatomic,readonly) double headerOffsetY;                  //@synthesize headerOffsetY=_headerOffsetY - In the implementation block
-(id)initWithExtendedTraitCollection:(id)arg1 options:(unsigned long long)arg2 ;
-(double)headerOffsetY;
-(UIEdgeInsets)headerFloatMarginsForSafeAreaInsets:(UIEdgeInsets)arg1 ;
-(unsigned long long)style;
@end

