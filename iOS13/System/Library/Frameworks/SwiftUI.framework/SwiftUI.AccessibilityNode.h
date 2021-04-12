/*
* Generated on Monday, March 1, 2021 at 2:35:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SwiftUI.framework/SwiftUI
*/

#import <SwiftUI/SwiftUI-Structs.h>
#import <UIKit/UIAccessibilityIdentification.h>

@class NSString, NSAttributedString, NSArray, UIBezierPath;

@interface SwiftUI.AccessibilityNode : NSObject <UIAccessibilityIdentification> {

	 children;
	 parent;
	 viewRendererHost;
	 oldAttachmentForNotification;
	 skipNotifyForAttachmentChanged;
	 attachmentsStorage;
	 cachedCombinedAttachment;
	 focusableAncestor;

}

@property (copy,nonatomic) NSString * accessibilityIdentifier; 
@property (assign,nonatomic) BOOL isAccessibilityElement; 
@property (assign,nonatomic) unsigned long long accessibilityTraits; 
@property (copy,nonatomic) NSString * accessibilityLabel; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedLabel; 
@property (copy,nonatomic) NSString * accessibilityValue; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedValue; 
@property (copy,nonatomic) NSString * accessibilityHint; 
@property (retain,nonatomic) NSAttributedString * accessibilityAttributedHint; 
@property (copy,nonatomic) NSString * accessibilityLanguage; 
@property (assign,nonatomic) CGRect accessibilityFrame; 
@property (copy,nonatomic) NSArray * accessibilityElements; 
@property (assign,nonatomic) CGPoint accessibilityActivationPoint; 
@property (assign,nonatomic) BOOL accessibilityViewIsModal; 
@property (assign,nonatomic) BOOL accessibilityElementsHidden; 
@property (assign,nonatomic) BOOL shouldGroupAccessibilityChildren; 
@property (retain,nonatomic) UIBezierPath * accessibilityPath; 
@property (copy,nonatomic) NSArray * accessibilityCustomActions; 
@property (readonly,nonatomic) NSString * description; 
-(unsigned long long)_accessibilityAutomationType;
-(BOOL)_internal_handleCustomActionWithUiAction:(id)arg1 ;
-(void)setAccessibilityIdentifier:(NSString *)arg1 ;
-(NSString *)accessibilityIdentifier;
-(CGRect)accessibilityFrame;
-(NSString *)accessibilityLabel;
-(NSAttributedString *)accessibilityAttributedLabel;
-(NSString *)accessibilityValue;
-(NSAttributedString *)accessibilityAttributedValue;
-(NSString *)accessibilityHint;
-(NSAttributedString *)accessibilityAttributedHint;
-(CGPoint)accessibilityActivationPoint;
-(unsigned long long)accessibilityTraits;
-(BOOL)isAccessibilityElement;
-(NSString *)accessibilityLanguage;
-(UIBezierPath *)accessibilityPath;
-(BOOL)accessibilityViewIsModal;
-(BOOL)accessibilityElementsHidden;
-(BOOL)shouldGroupAccessibilityChildren;
-(void)setAccessibilityElementsHidden:(BOOL)arg1 ;
-(void)setAccessibilityViewIsModal:(BOOL)arg1 ;
-(void)setAccessibilityLabel:(NSString *)arg1 ;
-(void)setAccessibilityAttributedLabel:(NSAttributedString *)arg1 ;
-(void)setAccessibilityValue:(NSString *)arg1 ;
-(void)setAccessibilityAttributedValue:(NSAttributedString *)arg1 ;
-(void)setAccessibilityHint:(NSString *)arg1 ;
-(void)setAccessibilityAttributedHint:(NSAttributedString *)arg1 ;
-(void)setAccessibilityFrame:(CGRect)arg1 ;
-(void)setAccessibilityPath:(UIBezierPath *)arg1 ;
-(void)setAccessibilityActivationPoint:(CGPoint)arg1 ;
-(void)setAccessibilityTraits:(unsigned long long)arg1 ;
-(void)setIsAccessibilityElement:(BOOL)arg1 ;
-(void)setAccessibilityLanguage:(NSString *)arg1 ;
-(void)setShouldGroupAccessibilityChildren:(BOOL)arg1 ;
-(void)accessibilityElementDidBecomeFocused;
-(void)accessibilityElementDidLoseFocus;
-(void)accessibilityIncrement;
-(void)accessibilityDecrement;
-(BOOL)accessibilityScroll:(long long)arg1 ;
-(BOOL)accessibilityPerformEscape;
-(BOOL)accessibilityPerformMagicTap;
-(BOOL)accessibilityActivate;
-(void)setAccessibilityCustomActions:(NSArray *)arg1 ;
-(NSArray *)accessibilityCustomActions;
-(NSArray *)accessibilityElements;
-(void)setAccessibilityElements:(NSArray *)arg1 ;
-(BOOL)_accessibilityScrollToVisible;
-(NSString *)description;
-(id)init;
-(void)dealloc;
@end

