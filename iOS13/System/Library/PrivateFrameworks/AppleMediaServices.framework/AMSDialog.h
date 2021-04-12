/*
* Generated on Monday, March 1, 2021 at 2:31:07 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppleMediaServices.framework/AppleMediaServices
*/


@protocol OS_dispatch_queue;
@class NSObject, NSArray, NSImage, NSString;

@interface AMSDialog : NSObject {

	NSObject*<OS_dispatch_queue> _systemDialogQueue;
	NSArray* _buttons;
	/*^block*/id _completionHandler;
	NSImage* _icon;
	NSString* _message;
	long long _selectedButtonIndex;
	long long _style;
	NSArray* _textFields;
	NSString* _title;

}

@property (nonatomic,copy) NSArray * buttons;                            //@synthesize buttons=_buttons - In the implementation block
@property (nonatomic,copy) id completionHandler;                         //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,copy) NSImage * icon;                               //@synthesize icon=_icon - In the implementation block
@property (nonatomic,copy) NSString * message;                           //@synthesize message=_message - In the implementation block
@property (assign,nonatomic) long long selectedButtonIndex;              //@synthesize selectedButtonIndex=_selectedButtonIndex - In the implementation block
@property (assign,nonatomic) long long style;                            //@synthesize style=_style - In the implementation block
@property (nonatomic,copy) NSArray * textFields;                         //@synthesize textFields=_textFields - In the implementation block
@property (nonatomic,copy) NSString * title;                             //@synthesize title=_title - In the implementation block
+(id)dialogWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 ;
+(id)dialogWithTitle:(id)arg1 message:(id)arg2 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(long long)style;
-(void)setStyle:(long long)arg1 ;
-(NSString *)message;
-(void)setMessage:(NSString *)arg1 ;
-(id)completionHandler;
-(void)setCompletionHandler:(id)arg1 ;
-(NSArray *)textFields;
-(void)present;
-(NSImage *)icon;
-(void)setIcon:(NSImage *)arg1 ;
-(void)setButtons:(NSArray *)arg1 ;
-(NSArray *)buttons;
-(void)addButton:(id)arg1 ;
-(id)initWithTitle:(id)arg1 message:(id)arg2 style:(long long)arg3 ;
-(void)setTextFields:(NSArray *)arg1 ;
-(void)addTextField:(id)arg1 ;
-(void)presentFromViewController:(id)arg1 ;
-(void)presentSheetFromWindow:(id)arg1 ;
-(void)presentSystemDialog;
-(long long)selectedButtonIndex;
-(void)setSelectedButtonIndex:(long long)arg1 ;
@end

