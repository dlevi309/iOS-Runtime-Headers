/*
* Generated on Thursday, January 14, 2021 at 2:20:25 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/

#import <UIKitCore/UIKitCore-Structs.h>
#import <UIKitCore/UIImageView.h>

@interface _UIPageIndicatorView : UIImageView {

	long long _page;

}

@property (assign,nonatomic) long long page;              //@synthesize page=_page - In the implementation block
-(void)setPage:(long long)arg1 ;
-(long long)page;
-(void)setImage:(id)arg1 ;
-(BOOL)isInvalidated;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithImage:(id)arg1 ;
-(id)debugDescription;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(void)updateSymbolConfigurationForTraitCollection;
-(id)initWithCoder:(id)arg1 ;
-(void)invalidate;
-(CGSize)sizeForImage:(id)arg1 withTraitCollection:(id)arg2 ;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)prepare;
@end

