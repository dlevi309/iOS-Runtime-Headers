/*
* Generated on Thursday, January 14, 2021 at 2:25:00 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

