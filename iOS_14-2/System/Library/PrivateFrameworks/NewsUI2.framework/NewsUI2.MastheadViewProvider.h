/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/TSMastheadViewProviderType.h>

@class UIView;

@interface NewsUI2.MastheadViewProvider : NSObject <TSMastheadViewProviderType> {

	 mastheadView;
	 titleViewStyler;
	 layoutAttributesFactory;
	 model;

}

@property (readonly,nonatomic) UIView * view; 
-(UIView *)view;
-(id)init;
-(void)layoutWithBridgedLayoutOptions:(id)arg1 ;
-(double)heightForLayoutOptions:(id)arg1 ;
-(UIEdgeInsets)layoutMarginForLayoutOptions:(id)arg1 ;
-(long long)layoutVariantForTraitCollection:(id)arg1 ;
@end

