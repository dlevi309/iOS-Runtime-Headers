/*
* Generated on Monday, March 1, 2021 at 2:31:46 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface SFDialogAction : NSObject {

	long long _activatingKeyboardShortcut;
	long long _actionType;
	NSString* _title;

}

@property (nonatomic,readonly) long long activatingKeyboardShortcut;              //@synthesize activatingKeyboardShortcut=_activatingKeyboardShortcut - In the implementation block
@property (nonatomic,readonly) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
+(id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(NSString *)title;
-(long long)actionType;
-(long long)activatingKeyboardShortcut;
-(id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
@end

