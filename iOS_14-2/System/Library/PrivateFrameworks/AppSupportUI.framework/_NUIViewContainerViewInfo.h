/*
* Generated on Thursday, January 14, 2021 at 2:23:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface _NUIViewContainerViewInfo : NSObject {

	nui_size_cache* _sizeCache;
	CGSize _minSize;
	CGSize _maxSize;
	UIEdgeInsets _alignmentInsets;
	UIEdgeInsets _cachedAlignmentInsets;
	CGSize _baselines;
	struct {
		unsigned neverCacheLayoutSize : 1;
		unsigned shouldCacheLayoutSize : 1;
		unsigned alsoInvalidateSuperview : 1;
		unsigned cachedAlignmentInsetsAreValid : 1;
		unsigned topBaselineIsCustom : 1;
		unsigned bottomBaselineIsCustom : 1;
	}  _flags;

}
-(id)init;
@end

