/*
* Generated on Monday, March 1, 2021 at 2:33:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UserNotificationsUIKit.framework/UserNotificationsUIKit
*/


@class NSString;

@interface _NCActionButtonDescription : NSObject {

	NSString* _selectorString;
	BOOL _defaultActionButton;
	NSString* _title;

}

@property (nonatomic,copy,readonly) NSString * title;                                              //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) SEL selector; 
@property (getter=isDefaultActionButton,nonatomic,readonly) BOOL defaultActionButton;              //@synthesize defaultActionButton=_defaultActionButton - In the implementation block
-(SEL)selector;
-(NSString *)title;
-(id)initWithTitle:(id)arg1 selector:(SEL)arg2 defaultActionButton:(BOOL)arg3 ;
-(BOOL)isDefaultActionButton;
@end

