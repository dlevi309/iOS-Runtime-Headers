/*
* Generated on Thursday, January 14, 2021 at 2:25:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIIndexBarEntry.h>

@class UIImage;

@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry {

	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(id)initWithImage:(id)arg1 ;
-(UIImage *)image;
-(id)description;
-(unsigned long long)hash;
-(BOOL)isEqual:(id)arg1 ;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)entryImage;
@end

