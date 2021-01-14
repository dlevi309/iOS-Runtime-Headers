/*
* Generated on Thursday, January 14, 2021 at 2:25:03 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@protocol SKUIViewElementView <NSObject>
@optional
+(id)textPropertiesForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;

@required
+(BOOL)prefetchResourcesForViewElement:(id)arg1 reason:(long long)arg2 context:(id)arg3;
+(CGSize*)preferredSizeForViewElement:(id)arg1 context:(id)arg2;
+(void)requestLayoutForViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
+(CGSize*)sizeThatFitsWidth:(double)arg1 viewElement:(id)arg2 context:(id)arg3;
-(void)setContentInset:(UIEdgeInsets)arg1;
-(void)reloadWithViewElement:(id)arg1 width:(double)arg2 context:(id)arg3;
-(BOOL)setImage:(id)arg1 forArtworkRequest:(id)arg2 context:(id)arg3;
-(BOOL)updateWithItemState:(id)arg1 context:(id)arg2 animated:(BOOL)arg3;
-(id)viewForElementIdentifier:(id)arg1;

@end

