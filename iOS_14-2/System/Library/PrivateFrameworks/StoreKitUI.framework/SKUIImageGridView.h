/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <UIKitCore/UIView.h>
#import <libobjc.A.dylib/SKUIViewElementView.h>

@class NSArray, SKUIImageGridViewReuseView, NSString;

@interface SKUIImageGridView : UIView <SKUIViewElementView> {

	long long _columnCount;
	UIEdgeInsets _contentInset;
	NSArray* _imageViews;
	SKUIImageGridViewReuseView* _reuseView;
	CGSize _size;

}

@property (assign,nonatomic) long long columnCount;                  //@synthesize columnCount=_columnCount - In the implementation block
@property (assign,nonatomic) UIEdgeInsets contentInset;              //@synthesize contentInset=_contentInset - In the implementation block
@property (nonatomic,retain) NSArray * imageViews;                   //@synthesize imageViews=_imageViews - In the implementation block
@property (assign,nonatomic) CGSize size;                            //@synthesize size=_size - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3 ;
+(CGSize)preferredSizeForViewElement:(id)arg1 context:(id)arg2 ;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
+(CGSize)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)contentInset;
-(CGSize)size;
-(void)setSize:(CGSize)arg1 ;
-(void)layoutSubviews;
-(void)setColumnCount:(long long)arg1 ;
-(CGSize)sizeThatFits:(CGSize)arg1 ;
-(long long)columnCount;
-(NSArray *)imageViews;
-(void)setImageViews:(NSArray *)arg1 ;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3 ;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3 ;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3 ;
-(id)viewForElementIdentifier:(id)arg1 ;
@end

