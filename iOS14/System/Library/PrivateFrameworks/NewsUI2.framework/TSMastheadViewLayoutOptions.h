/*
* Generated on Thursday, January 14, 2021 at 2:24:24 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/


#import <NewsUI2/NewsUI2-Structs.h>
@class UITraitCollection;

@interface TSMastheadViewLayoutOptions : NSObject {

	 bounds;
	 layoutMargins;
	 traitCollection;
	 statusBarFrame;
	 navigationBarFrame;
	 displayOptions;

}

@property (readonly,nonatomic) UIEdgeInsets layoutMargins; 
@property (readonly,nonatomic) UITraitCollection * traitCollection; 
-(UITraitCollection *)traitCollection;
-(id)init;
-(UIEdgeInsets)layoutMargins;
-(id)initWithBounds:(CGRect)arg1 layoutMargins:(UIEdgeInsets)arg2 traitCollection:(id)arg3 statusBarFrame:(CGRect)arg4 navigationBarFrame:(CGRect)arg5 displayOptions:(id)arg6 ;
@end

