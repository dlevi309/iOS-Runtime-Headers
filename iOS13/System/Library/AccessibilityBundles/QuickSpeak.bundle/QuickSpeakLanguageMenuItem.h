/*
* Generated on Monday, March 1, 2021 at 2:35:41 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
*/

#import <UIKitCore/UIMenuItem.h>

@class AXDialectMap;

@interface QuickSpeakLanguageMenuItem : UIMenuItem {

	AXDialectMap* _dialect;

}

@property (nonatomic,retain) AXDialectMap * dialect;              //@synthesize dialect=_dialect - In the implementation block
-(id)description;
-(id)accessibilityLanguage;
-(AXDialectMap *)dialect;
-(void)setDialect:(AXDialectMap *)arg1 ;
@end

