/*
* Generated on Thursday, January 14, 2021 at 2:20:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/ContactsUI.framework/ContactsUI
*/


@class NSString, UIView;

@interface CNMeCardSharingRowItem : NSObject {

	BOOL _isSelected;
	NSString* _label;
	UIView* _accessoryView;
	/*^block*/id _confirmationHandler;

}

@property (nonatomic,readonly) NSString * label;                         //@synthesize label=_label - In the implementation block
@property (nonatomic,readonly) UIView * accessoryView;                   //@synthesize accessoryView=_accessoryView - In the implementation block
@property (assign,nonatomic) BOOL isSelected;                            //@synthesize isSelected=_isSelected - In the implementation block
@property (nonatomic,copy,readonly) id confirmationHandler;              //@synthesize confirmationHandler=_confirmationHandler - In the implementation block
-(UIView *)accessoryView;
-(BOOL)isSelected;
-(void)setIsSelected:(BOOL)arg1 ;
-(id)confirmationHandler;
-(id)initWithLabel:(id)arg1 accessoryView:(id)arg2 confirmationHandler:(/*^block*/id)arg3 ;
-(id)initWithLabel:(id)arg1 accessoryView:(id)arg2 ;
-(NSString *)label;
@end

