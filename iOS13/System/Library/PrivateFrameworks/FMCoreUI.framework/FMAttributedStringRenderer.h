/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/FMCoreUI.framework/FMCoreUI
*/


#import <FMCoreUI/FMCoreUI-Structs.h>
@class FMAttributedStringRendererOptions;

@interface FMAttributedStringRenderer : NSObject {

	FMAttributedStringRendererOptions* _options;

}

@property (nonatomic,readonly) FMAttributedStringRendererOptions * options;              //@synthesize options=_options - In the implementation block
-(id)init;
-(FMAttributedStringRendererOptions *)options;
-(id)initWithOptions:(id)arg1 ;
-(id)imageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3 ;
-(id)imageForAttributedString:(id)arg1 width:(double)arg2 showExclusionPaths:(BOOL)arg3 options:(id)arg4 ;
-(id)_textStorageForAttributedString:(id)arg1 width:(double)arg2 options:(id)arg3 ;
-(id)_imageFromTextStorage:(id)arg1 width:(double)arg2 showExclusionPaths:(BOOL)arg3 ;
-(CGSize)_sizeFromTextStorage:(id)arg1 ;
-(id)imageForAttributedString:(id)arg1 width:(double)arg2 ;
@end

