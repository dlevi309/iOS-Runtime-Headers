/*
* Generated on Monday, March 1, 2021 at 2:31:00 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BaseBoardUI.framework/BaseBoardUI
*/


@interface BSUIFontProvider : NSObject {

	BOOL _isDefault;

}
+(id)preferredFontProvider;
+(id)defaultFontProvider;
-(id)initForProvidingDefaultFonts:(BOOL)arg1 ;
-(id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 ;
-(id)preferredFontForTextStyle:(id)arg1 hiFontStyle:(long long)arg2 contentSizeCategory:(id)arg3 ;
@end

