/*
* Generated on Thursday, January 14, 2021 at 2:23:57 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/SafariServices.framework/SafariServices
*/


@class NSString;

@interface SFDialogAction : NSObject {

	/*^block*/id _customAction;
	long long _activatingKeyboardShortcut;
	long long _actionType;
	NSString* _title;

}

@property (nonatomic,readonly) long long activatingKeyboardShortcut;              //@synthesize activatingKeyboardShortcut=_activatingKeyboardShortcut - In the implementation block
@property (nonatomic,readonly) long long actionType;                              //@synthesize actionType=_actionType - In the implementation block
@property (nonatomic,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) BOOL hasCustomAction; 
+(id)actionWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(long long)actionType;
-(long long)activatingKeyboardShortcut;
-(BOOL)hasCustomAction;
-(void)triggerCustomAction;
-(id)initWithTitle:(id)arg1 activatingKeyboardShortcut:(long long)arg2 type:(long long)arg3 ;
-(void)setCustomAction:(/*^block*/id)arg1 ;
-(NSString *)title;
@end

