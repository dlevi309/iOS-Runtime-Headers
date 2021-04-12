/*
* Generated on Monday, March 1, 2021 at 2:34:35 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AccessibilityPlatformTranslation.framework/AccessibilityPlatformTranslation
*/

#import <UIKitCore/UIAccessibilityElement.h>
#import <libobjc.A.dylib/AXPTranslationElementProtocol.h>

@class AXPTranslationObject, NSString;

@interface AXPIOSPlatformElement : UIAccessibilityElement <AXPTranslationElementProtocol> {

	AXPTranslationObject* translation;

}

@property (nonatomic,retain) AXPTranslationObject * translation; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)platformElementWithTranslationObject:(id)arg1 ;
+(id)platformElementWithTranslationObject:(id)arg1 rootParent:(id)arg2 ;
-(AXPTranslationObject *)translation;
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
@end

