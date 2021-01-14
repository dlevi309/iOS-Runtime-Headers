/*
* Generated on Thursday, January 14, 2021 at 2:29:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/AccessibilityBundles/QuickSpeak.bundle/QuickSpeak
*/

#import <UIKitCore/UIMenuItem.h>

@class AXDialectMap;

@interface QuickSpeakLanguageMenuItem : UIMenuItem {

	AXDialectMap* _dialect;

}

@property (nonatomic,retain) AXDialectMap * dialect;              //@synthesize dialect=_dialect - In the implementation block
-(AXDialectMap *)dialect;
-(id)description;
-(id)accessibilityLanguage;
-(void)setDialect:(AXDialectMap *)arg1 ;
@end

