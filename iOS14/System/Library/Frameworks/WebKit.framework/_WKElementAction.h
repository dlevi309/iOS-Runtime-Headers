/*
* Generated on Thursday, January 14, 2021 at 2:21:56 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/WebKit.framework/WebKit
*/


#import <WebKit/WebKit-Structs.h>
@class NSString;

@interface _WKElementAction : NSObject {

	RetainPtr<NSString>* _title;
	/*^block*/id _actionHandler;
	/*^block*/id _dismissalHandler;
	WeakObjCPtr<WKActionSheetAssistant> _defaultActionSheetAssistant;
	long long _type;

}

@property (nonatomic,readonly) long long type;                //@synthesize type=_type - In the implementation block
@property (nonatomic,readonly) NSString * title; 
@property (nonatomic,copy) id dismissalHandler;               //@synthesize dismissalHandler=_dismissalHandler - In the implementation block
+(id)_elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
+(id)_elementActionWithType:(long long)arg1 customTitle:(id)arg2 assistant:(id)arg3 ;
+(id)elementActionWithType:(long long)arg1 customTitle:(id)arg2 ;
+(id)elementActionWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
+(id)elementActionWithType:(long long)arg1 title:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
+(id)elementActionWithType:(long long)arg1 ;
+(id)_elementActionWithType:(long long)arg1 assistant:(id)arg2 ;
+(long long)elementActionTypeForUIActionIdentifier:(id)arg1 ;
+(id)imageForElementActionType:(long long)arg1 ;
-(long long)type;
-(id)_initWithTitle:(id)arg1 actionHandler:(/*^block*/id)arg2 type:(long long)arg3 assistant:(id)arg4 ;
-(id)uiActionForElementInfo:(id)arg1 ;
-(void)_runActionWithElementInfo:(id)arg1 forActionSheetAssistant:(id)arg2 ;
-(void)runActionWithElementInfo:(id)arg1 ;
-(id)dismissalHandler;
-(void)setDismissalHandler:(id)arg1 ;
-(NSString *)title;
-(void)dealloc;
@end

