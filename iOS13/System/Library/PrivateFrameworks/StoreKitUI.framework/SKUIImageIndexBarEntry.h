/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/

#import <StoreKitUI/StoreKitUI-Structs.h>
#import <StoreKitUI/SKUIIndexBarEntry.h>

@class UIImage;

@interface SKUIImageIndexBarEntry : SKUIIndexBarEntry {

	UIImage* _image;

}

@property (nonatomic,readonly) UIImage * image;              //@synthesize image=_image - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(UIImage *)image;
-(id)initWithImage:(id)arg1 ;
-(CGSize)_calculatedContentSize;
-(void)_drawContentInRect:(CGRect)arg1 ;
-(id)entryImage;
@end

