/*
* Generated on Thursday, January 14, 2021 at 2:28:20 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RemoteUI.framework/RemoteUI
*/

#import <RemoteUI/RUIElement.h>

@protocol RUIPresentationHandling, RUIAlertViewDelegate;
@class UIAlertController, RUIObjectModel, NSString;

@interface RUIAlertView : RUIElement {

	UIAlertController* _alertController;
	id<RUIPresentationHandling> _presentationContext;
	RUIObjectModel*<RUIAlertViewDelegate> _objectModel;
	NSString* _title;
	NSString* _message;
	long long _buttonIndex;
	/*^block*/id _completion;

}

@property (nonatomic,copy) id completion;                                                           //@synthesize completion=_completion - In the implementation block
@property (assign,nonatomic,__weak) RUIObjectModel*<RUIAlertViewDelegate> objectModel;              //@synthesize objectModel=_objectModel - In the implementation block
@property (nonatomic,retain) NSString * title;                                                      //@synthesize title=_title - In the implementation block
@property (nonatomic,retain) NSString * message;                                                    //@synthesize message=_message - In the implementation block
@property (nonatomic,readonly) long long buttonIndex;                                               //@synthesize buttonIndex=_buttonIndex - In the implementation block
+(void)_enableTestMode;
-(void)setMessage:(NSString *)arg1 ;
-(void)setCompletion:(id)arg1 ;
-(NSString *)message;
-(RUIObjectModel*<RUIAlertViewDelegate>)objectModel;
-(void)_dismissAlertController;
-(void)setTitle:(NSString *)arg1 ;
-(id)completion;
-(id)alertController;
-(long long)buttonIndex;
-(NSString *)title;
-(void)dealloc;
-(void)setObjectModel:(RUIObjectModel*<RUIAlertViewDelegate>)arg1 ;
-(id)initWithAttributes:(id)arg1 parent:(id)arg2 ;
-(void)runAlertInController:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)addButtonWithTitle:(id)arg1 URL:(id)arg2 style:(long long)arg3 attributes:(id)arg4 ;
@end

