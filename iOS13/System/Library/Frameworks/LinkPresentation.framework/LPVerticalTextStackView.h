/*
* Generated on Monday, March 1, 2021 at 2:31:43 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(id)init;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(void)addArrangedSubview:(id)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)layoutComponentView;
-(CGSize)_layoutTextStackForSize:(CGSize)arg1 applyingLayout:(BOOL)arg2 ;
@end

