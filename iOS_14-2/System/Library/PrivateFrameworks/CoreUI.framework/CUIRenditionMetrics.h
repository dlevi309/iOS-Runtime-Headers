/*
* Generated on Thursday, January 14, 2021 at 2:21:55 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CoreUI.framework/CoreUI
*/


#import <CoreUI/CoreUI-Structs.h>
@interface CUIRenditionMetrics : NSObject {

	CGSize _imageSize;
	CGSize _edgeBottomLeftMargin;
	CGSize _edgeTopRightMargin;
	CGSize _contentBottomLeftMargin;
	CGSize _contentTopRightMargin;
	double _baseline;
	CGSize _auxiliary1BottomLeftMargin;
	CGSize _auxiliary1TopRightMargin;
	CGSize _auxiliary2BottomLeftMargin;
	CGSize _auxiliary2TopRightMargin;
	double _scale;
	struct {
		unsigned scalesVertically : 1;
		unsigned scalesHorizontally : 1;
		unsigned reserved : 14;
	}  _crmFlags;

}
-(CGSize)imageSize;
-(CGSize)edgeBottomLeftMargin;
-(double)baseline;
-(CGRect)contentRect;
-(CGRect)insetContentRectWithMetrics:(CGRect)arg1 ;
-(double)scale;
-(BOOL)hasAlignmentEdgeMargins;
-(CGSize)auxiliary2TopRightMargin;
-(CGSize)contentTopRightMargin;
-(BOOL)scalesVertically;
-(CGSize)auxiliary1BottomLeftMargin;
-(CGSize)auxiliary1TopRightMargin;
-(CGRect)edgeRect;
-(CGRect)insetRectWithMetrics:(CGRect)arg1 ;
-(CGSize)auxiliary2BottomLeftMargin;
-(CGSize)contentBottomLeftMargin;
-(CGSize)edgeTopRightMargin;
-(BOOL)scalesHorizontally;
-(BOOL)hasOpaqueContentBounds;
@end

