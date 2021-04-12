/*
* Generated on Thursday, January 14, 2021 at 2:27:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setTranslation:(AXPTranslationObject *)arg1 ;
-(AXPTranslationObject *)translation;
@end

