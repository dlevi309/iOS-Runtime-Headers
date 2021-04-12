/*
* Generated on Monday, March 1, 2021 at 2:31:58 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class UIColor;

@interface SKUIImagePlaceholder : NSObject {

	UIColor* _backgroundColor;
	UIColor* _borderColor;
	double _borderWidth;
	/*^block*/id _cornerPathBlock;

}

@property (nonatomic,readonly) UIColor * backgroundColor;              //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (nonatomic,readonly) UIColor * borderColor;                  //@synthesize borderColor=_borderColor - In the implementation block
@property (nonatomic,readonly) double borderWidth;                     //@synthesize borderWidth=_borderWidth - In the implementation block
@property (nonatomic,copy,readonly) id cornerPathBlock;                //@synthesize cornerPathBlock=_cornerPathBlock - In the implementation block
-(UIColor *)backgroundColor;
-(double)borderWidth;
-(UIColor *)borderColor;
-(id)cornerPathBlock;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerRadius:(double)arg4 ;
-(id)initWithBackgroundColor:(id)arg1 borderColor:(id)arg2 borderWidth:(double)arg3 cornerPathBlock:(/*^block*/id)arg4 ;
@end

