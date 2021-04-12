/*
* Generated on Thursday, January 14, 2021 at 2:27:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ActivityRingsUI.framework/ActivityRingsUI
*/


@class ARUISpriteTexture;

@interface ARUISpriteSheetFactory : NSObject {

	ARUISpriteTexture* _defaultSpriteTexture;
	ARUISpriteTexture* _wheelchairSpriteTexture;
	ARUISpriteTexture* _sharingSpriteTexture;
	ARUISpriteTexture* _wheelchairSharingSpriteTexture;

}
+(id)sharedInstance;
+(id)wheelchairSpriteSheet;
+(id)defaultSpriteSheet;
+(id)spriteSheetForRingType:(long long)arg1 ;
+(id)wheelchairSpriteSheetForRingType:(long long)arg1 ;
+(id)sharingSpriteSheet;
+(id)wheelchairSharingSpriteSheet;
-(id)defaultSpriteTexture;
-(id)wheelchairSpriteTexture;
-(id)sharingSpriteTexture;
-(id)wheelchairSharingSpriteTexture;
@end

