/*
* Generated on Thursday, January 14, 2021 at 2:20:45 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@protocol CNContactActionDelegate;
@class CNContact, NSString, UIColor, CNMutableContact;

@interface CNContactAction : NSObject {

	BOOL _destructive;
	BOOL _showBackgroundPlatter;
	BOOL _wrapTitle;
	BOOL _canPerformAction;
	id<CNContactActionDelegate> _delegate;
	CNContact* _contact;
	NSString* _title;
	id _target;
	SEL _selector;
	UIColor* _color;
	UIColor* _glyphColor;
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
@property (nonatomic,retain) UIColor * glyphColor;                                     //@synthesize glyphColor=_glyphColor - In the implementation block
@property (assign,nonatomic) long long transportType;                                  //@synthesize transportType=_transportType - In the implementation block
@property (assign,nonatomic) BOOL showBackgroundPlatter;                               //@synthesize showBackgroundPlatter=_showBackgroundPlatter - In the implementation block
@property (assign,nonatomic) BOOL wrapTitle;                                           //@synthesize wrapTitle=_wrapTitle - In the implementation block
@property (nonatomic,readonly) BOOL canPerformAction;                                  //@synthesize canPerformAction=_canPerformAction - In the implementation block
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
+(id)contactActionWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(CNContact *)contact;
-(BOOL)isDestructive;
-(void)setContact:(CNContact *)arg1 ;
-(SEL)selector;
-(BOOL)wrapTitle;
-(BOOL)canPerformAction;
-(void)performActionWithSender:(id)arg1 ;
-(id)init;
-(void)setGlyphColor:(UIColor *)arg1 ;
-(id<CNContactActionDelegate>)delegate;
-(UIColor *)color;
-(UIColor *)glyphColor;
-(void)setTransportType:(long long)arg1 ;
-(long long)transportType;
-(void)setDelegate:(id<CNContactActionDelegate>)arg1 ;
-(id)description;
-(CNMutableContact *)mutableContact;
-(id)initWithTitle:(id)arg1 target:(id)arg2 selector:(SEL)arg3 destructive:(BOOL)arg4 ;
-(BOOL)showBackgroundPlatter;
-(void)setWrapTitle:(BOOL)arg1 ;
-(void)setShowBackgroundPlatter:(BOOL)arg1 ;
-(void)setColor:(UIColor *)arg1 ;
-(id)initWithContact:(id)arg1 ;
-(id)target;
-(void)setDestructive:(BOOL)arg1 ;
-(NSString *)title;
@end

