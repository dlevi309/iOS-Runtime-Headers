/*
* Generated on Monday, March 1, 2021 at 2:31:33 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppSupportUI.framework/AppSupportUI
*/


#import <AppSupportUI/AppSupportUI-Structs.h>
@interface _NUIViewContainerViewInfo : NSObject {

	nui_size_cache* _sizeCache;
	CGSize _minSize;
	CGSize _maxSize;
	UIEdgeInsets _alignmentInsets;
	CGSize _baselines;
	struct {
		unsigned alsoInvalidateSuperview : 1;
		unsigned alignmentInsetsAreCustom : 1;
		unsigned topBaselineIsCustom : 1;
		unsigned bottomBaselineIsCustom : 1;
	}  _flags;

}
-(id)init;
-(void)resetCaches;
@end

