/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIAccessibility.framework/UIAccessibility
*/


@class NSString;

@interface UIAccessibilityAutomationAction : NSObject {

	NSString* _identifier;
	SEL _selector;

}

@property (nonatomic,readonly) NSString * identifier;              //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,readonly) SEL selector;                       //@synthesize selector=_selector - In the implementation block
-(SEL)selector;
-(NSString *)identifier;
-(id)initWithIdentifier:(id)arg1 selector:(SEL)arg2 ;
@end

