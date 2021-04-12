/*
* Generated on Monday, March 1, 2021 at 2:30:57 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactActionDelegate;
@class CNContact, NSString, UIColor, CNMutableContact;

@interface CNContactAction : NSObject {

	BOOL _destructive;
	BOOL _showBackgroundPlatter;
	BOOL _canPerformAction;
	id<CNContactActionDelegate> _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;
	UIColor* _color;
	long long _transportType;

}

@property (assign,nonatomic,__weak) id<CNContactActionDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) CNContact * contact;                                      //@synthesize contact=_contact - In the implementation block
@property (nonatomic,readonly) CNMutableContact * mutableContact; 
@property (nonatomic,copy,readonly) NSString * title;                                  //@synthesize title=_title - In the implementation block
@property (nonatomic,readonly) id target;                                              //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) SEL selector;                                           //@synthesize selector=_selector - In the implementation block
@property (assign,getter=isDestructive,nonatomic) BOOL destructive;                    //@synthesize destructive=_destructive - In the implementation block
@property (nonatomic,retain) UIColor * color;                                          //@synthesize color=_color - In the implementation block
@property (assign,nonatomic) long long transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                               //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAction;                                  //@synthesize canPerformAction=_canPerformAction - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(id)init;
-(id)description;
-(SEL)selector;
-(id<CNContactActionDelegate>)delegate;
-(void)setDelegate:(id<CNContactActionDelegate>)arg1 ;
-(id)target;
-(NSString *)title;
-(UIColor *)color;
-(void)setColor:(UIColor *)arg1 ;
-(long long)transportType;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(BOOL)isDestructive;
-(void)setTransportType:(long long)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(CNMutableContact *)mutableContact;
-(BOOL)showBackgroundPlatter;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
@end

