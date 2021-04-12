/*
* Generated on Monday, March 1, 2021 at 2:34:37 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {

	ARUISpriteTexture* _defaultSpriteTexture;
	ARUISpriteTexture* _sharingSpriteTexture;

}
+(id)sharedInstance;
+(id)defaultSpriteSheet;
+(id)spriteSheetForRingType:(long long)arg1 ;
+(id)sharingSpriteSheet;
-(id)defaultSpriteTexture;
-(id)sharingSpriteTexture;
@end

