/*
* Generated on Monday, March 1, 2021 at 2:34:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


#import <NewsUI2/NewsUI2-Structs.h>
@class UITraitCollection;

@interface TSMastheadViewLayoutOptions : NSObject {

	 bounds;
	 layoutMargins;
	 traitCollection;
	 statusBarFrame;
	 displayOptions;

}

@property (readonly,nonatomic) UIEdgeInsets layoutMargins; 
@property (readonly,nonatomic) UITraitCollection * traitCollection; 
-(id)init;
-(UITraitCollection *)traitCollection;
-(UIEdgeInsets)layoutMargins;
-(id)initWithBounds:(CGRect)arg1 layoutMargins:(UIEdgeInsets)arg2 traitCollection:(id)arg3 statusBarFrame:(CGRect)arg4 displayOptions:(id)arg5 ;
@end

