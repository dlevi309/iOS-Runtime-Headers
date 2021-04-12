/*
* Generated on Thursday, January 14, 2021 at 2:24:06 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SearchUI.framework/SearchUI
*/

#import <SearchUI/SearchUI-Structs.h>
#import <TemplateKit/TLKProminenceView.h>

@interface SearchUISeparatorView : TLKProminenceView {

	double _separatorHeight;

}

@property (assign,nonatomic) double separatorHeight;              //@synthesize separatorHeight=_separatorHeight - In the implementation block
+(unsigned long long)separatorProminenceForAppearance:(id)arg1 ;
-(double)separatorHeight;
-(CGSize)intrinsicContentSize;
-(id)init;
-(void)_dynamicUserInterfaceTraitDidChange;
-(void)setSeparatorHeight:(double)arg1 ;
-(void)tlk_updateForAppearance:(id)arg1 ;
-(CGSize)effectiveLayoutSizeFittingSize:(CGSize)arg1 ;
-(void)didMoveToWindow;
@end

