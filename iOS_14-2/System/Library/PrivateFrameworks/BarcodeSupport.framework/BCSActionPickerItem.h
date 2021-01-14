/*
* Generated on Thursday, January 14, 2021 at 2:26:50 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/BarcodeSupport.framework/BarcodeSupport
*/


@protocol BCSActionPickerItemDelegate;
@class BCSAction, NSString, NSURL, UIImage;

@interface BCSActionPickerItem : NSObject {

	/*^block*/id _actionHandler;
	BCSAction* _action;
	BOOL _copyActionItem;
	id<BCSActionPickerItemDelegate> _actionPickerItemDelegate;
	NSString* _label;
	NSURL* _actionURL;
	NSString* _targetApplicationBundleIdentifier;

}

@property (assign,nonatomic,__weak) id<BCSActionPickerItemDelegate> actionPickerItemDelegate;              //@synthesize actionPickerItemDelegate=_actionPickerItemDelegate - In the implementation block
@property (nonatomic,copy,readonly) NSString * label;                                                      //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIImage * icon; 
@property (nonatomic,readonly) BOOL shouldDismissAlertWhenActionIsTaken; 
@property (nonatomic,copy,readonly) NSURL * actionURL;                                                     //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * targetApplicationBundleIdentifier;                          //@synthesize targetApplicationBundleIdentifier=_targetApplicationBundleIdentifier - In the implementation block
@property (nonatomic,readonly) long long dataType; 
@property (nonatomic,copy,readonly) NSString * localizedDefaultActionDescription; 
@property (getter=isCopyActionItem,nonatomic,readonly) BOOL copyActionItem;                                //@synthesize copyActionItem=_copyActionItem - In the implementation block
+(id)actionPickerItemWithLabel:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(long long)dataType;
-(void)performAction;
-(NSString *)targetApplicationBundleIdentifier;
-(UIImage *)icon;
-(id)initWithAction:(id)arg1 ;
-(NSString *)localizedDefaultActionDescription;
-(BOOL)isCopyActionItem;
-(NSURL *)actionURL;
-(NSString *)label;
-(void)didPerformAction;
-(id)initWithLabel:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)initWithLabel:(id)arg1 action:(id)arg2 ;
-(BOOL)shouldDismissAlertWhenActionIsTaken;
-(id<BCSActionPickerItemDelegate>)actionPickerItemDelegate;
-(void)setActionPickerItemDelegate:(id<BCSActionPickerItemDelegate>)arg1 ;
@end

