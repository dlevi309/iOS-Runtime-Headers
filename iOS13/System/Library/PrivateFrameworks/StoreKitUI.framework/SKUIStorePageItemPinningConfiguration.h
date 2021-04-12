/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


#import <StoreKitUI/StoreKitUI-Structs.h>
@interface SKUIStorePageItemPinningConfiguration : NSObject {

	BOOL _hasValidPinningContentInset;
	BOOL _hasValidPinningStyle;
	BOOL _hasValidPinningGroup;
	BOOL _hasValidPinningTransitionStyle;
	long long _pinningStyle;
	long long _pinningGroup;
	long long _pinningTransitionStyle;
	UIEdgeInsets _pinningContentInset;

}

@property (assign,nonatomic) UIEdgeInsets pinningContentInset;                   //@synthesize pinningContentInset=_pinningContentInset - In the implementation block
@property (nonatomic,readonly) BOOL hasValidPinningContentInset;                 //@synthesize hasValidPinningContentInset=_hasValidPinningContentInset - In the implementation block
@property (assign,nonatomic) long long pinningStyle;                             //@synthesize pinningStyle=_pinningStyle - In the implementation block
@property (assign,nonatomic) long long pinningGroup;                             //@synthesize pinningGroup=_pinningGroup - In the implementation block
@property (nonatomic,readonly) BOOL hasValidPinningStyle;                        //@synthesize hasValidPinningStyle=_hasValidPinningStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasValidPinningGroup;                        //@synthesize hasValidPinningGroup=_hasValidPinningGroup - In the implementation block
@property (assign,nonatomic) long long pinningTransitionStyle;                   //@synthesize pinningTransitionStyle=_pinningTransitionStyle - In the implementation block
@property (nonatomic,readonly) BOOL hasValidPinningTransitionStyle;              //@synthesize hasValidPinningTransitionStyle=_hasValidPinningTransitionStyle - In the implementation block
-(void)setPinningTransitionStyle:(long long)arg1 ;
-(long long)pinningTransitionStyle;
-(BOOL)hasValidPinningContentInset;
-(void)setPinningContentInset:(UIEdgeInsets)arg1 ;
-(UIEdgeInsets)pinningContentInset;
-(BOOL)hasValidPinningStyle;
-(void)setPinningStyle:(long long)arg1 ;
-(long long)pinningStyle;
-(BOOL)hasValidPinningGroup;
-(void)setPinningGroup:(long long)arg1 ;
-(long long)pinningGroup;
-(BOOL)hasValidPinningTransitionStyle;
-(void)invalidatePinningContentInset;
-(void)invalidatePinningStyle;
-(void)invalidatePinningGroup;
-(void)invalidatePinningTransitionStyle;
@end

