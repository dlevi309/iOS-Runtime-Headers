/*
* Generated on Thursday, January 14, 2021 at 2:25:07 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIStorePageItemPinningLayoutInformation : NSObject {

	double _afterPinningLocationYAdditions;
	double _beforePinningLocationYAdditions;
	CGRect _availablePinningFrame;
	CGRect _layoutAttributesFrame;

}

@property (assign,nonatomic) CGRect availablePinningFrame;                        //@synthesize availablePinningFrame=_availablePinningFrame - In the implementation block
@property (assign,nonatomic) CGRect layoutAttributesFrame;                        //@synthesize layoutAttributesFrame=_layoutAttributesFrame - In the implementation block
@property (assign,nonatomic) double afterPinningLocationYAdditions;               //@synthesize afterPinningLocationYAdditions=_afterPinningLocationYAdditions - In the implementation block
@property (assign,nonatomic) double beforePinningLocationYAdditions;              //@synthesize beforePinningLocationYAdditions=_beforePinningLocationYAdditions - In the implementation block
-(CGRect)availablePinningFrame;
-(void)setAvailablePinningFrame:(CGRect)arg1 ;
-(void)setLayoutAttributesFrame:(CGRect)arg1 ;
-(void)setAfterPinningLocationYAdditions:(double)arg1 ;
-(void)setBeforePinningLocationYAdditions:(double)arg1 ;
-(CGRect)layoutAttributesFrame;
-(double)afterPinningLocationYAdditions;
-(double)beforePinningLocationYAdditions;
@end

