/*
* Generated on Thursday, January 14, 2021 at 2:24:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsUI2.framework/NewsUI2
*/

#import <NewsUI2/NewsUI2-Structs.h>
#import <libobjc.A.dylib/NUTitleViewStyler.h>
#import <libobjc.A.dylib/NUFeedTitleViewDelegate.h>

@interface NewsUI2.MiniMastheadViewProvider : NSObject <NUTitleViewStyler, NUFeedTitleViewDelegate> {

	 delegate;
	 compactMiniMastheadView;
	 regularMiniMastheadView;
	 $__lazy_storage_$_regularContainerTitleView;
	 model;
	 refreshStateMachine;
	 renderer;
	 layoutAttributesFactory;

}
-(id)styleTitleText:(id)arg1 styleType:(unsigned long long)arg2 boundingSize:(CGSize)arg3 ;
-(void)feedTitleViewDidTapOnTitleView:(id)arg1 ;
-(id)init;
@end

