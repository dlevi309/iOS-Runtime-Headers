/*
* Generated on Thursday, January 14, 2021 at 2:22:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/LinkPresentation.framework/LinkPresentation
*/

#import <LinkPresentation/LinkPresentation-Structs.h>
#import <LinkPresentation/LPComponentView.h>
#import <libobjc.A.dylib/LPContentInsettable.h>

@class NSMutableArray, LPVerticalTextStackViewStyle;

@interface LPVerticalTextStackView : LPComponentView <LPContentInsettable> {

	NSMutableArray* _items;
	BOOL _hasEverBuilt;
	UIEdgeInsets _contentInset;
	LPVerticalTextStackViewStyle* _style;

}
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(id)init;
-(id)initWithStyle:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(CGSize)_layoutTextStackForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
@end

