/*
* Generated on Monday, March 1, 2021 at 2:34:39 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol BCSActionPickerItemDelegate;
@class BCSAction, NSString, UIImage, NSURL;

@interface BCSActionPickerItem : NSObject {

	/*^block*/id _actionHandler;
	BCSAction* _action;
	BOOL _copyActionItem;
	id<BCSActionPickerItemDelegate> _actionPickerItemDelegate;
	NSString* _label;
	UIImage* _icon;
	NSURL* _actionURL;
	NSString* _targetApplicationBundleIdentifier;

}

@property (assign,nonatomic,__weak) id<BCSActionPickerItemDelegate> actionPickerItemDelegate;              //@synthesize actionPickerItemDelegate=_actionPickerItemDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImage * icon;                                                             //@synthesize icon=_icon - In the implementation block
@property (nonatomic,readonly) BOOL shouldDismissAlertWhenActionIsTaken; 
@property (nonatomic,copy,readonly) NSURL * actionURL;                                                     //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetApplicationBundleIdentifier;                          //@synthesize targetApplicationBundleIdentifier=_targetApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long dataType; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionDescription; 
@property (getter=isCopyActionItem,nonatomic,readonly) BOOL copyActionItem;                                //@synthesize copyActionItem=_copyActionItem - In the implementation block
+(id)actionPickerItemWithLabel:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(NSString *)label;
-(long long)dataType;
-(id)initWithAction:(id)arg1 ;
-(UIImage *)icon;
-(void)performAction;
-(NSURL *)actionURL;
-(BOOL)isCopyActionItem;
-(NSString *)localizedDefaultActionDescription;
-(void)didPerformAction;
-(id)initWithLabel:(id)arg1 icon:(id)arg2 actionHandler:(/*^block*/id)arg3 ;
-(id)initWithLabel:(id)arg1 icon:(id)arg2 action:(id)arg3 ;
-(BOOL)shouldDismissAlertWhenActionIsTaken;
-(id<BCSActionPickerItemDelegate>)actionPickerItemDelegate;
-(void)setActionPickerItemDelegate:(id<BCSActionPickerItemDelegate>)arg1 ;
-(NSString *)targetApplicationBundleIdentifier;
@end

