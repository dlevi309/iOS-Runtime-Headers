/*
* Generated on Thursday, January 14, 2021 at 2:22:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(id)initWithIdentifier:(id)arg1 selector:(SEL)arg2 ;
-(NSString *)identifier;
@end

