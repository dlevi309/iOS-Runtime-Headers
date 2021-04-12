/*
* Generated on Monday, March 1, 2021 at 2:32:52 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ControlCenterUIKit.framework/ControlCenterUIKit
*/


@class NSString;

@interface CCUIMenuModuleItem : NSObject {

	BOOL _busy;
	BOOL _selected;
	BOOL _placeholder;
	NSString* _identifier;
	NSString* _title;
	NSString* _subtitle;
	/*^block*/id _handler;

}

@property (nonatomic,copy) NSString * identifier;                                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * title;                                     //@synthesize title=_title - In the implementation block
@property (nonatomic,copy) id handler;                                           //@synthesize handler=_handler - In the implementation block
@property (assign,getter=isPlaceholder,nonatomic) BOOL placeholder;              //@synthesize placeholder=_placeholder - In the implementation block
@property (nonatomic,copy) NSString * subtitle;                                  //@synthesize subtitle=_subtitle - In the implementation block
@property (assign,getter=isBusy,nonatomic) BOOL busy;                            //@synthesize busy=_busy - In the implementation block
@property (assign,getter=isSelected,nonatomic) BOOL selected;                    //@synthesize selected=_selected - In the implementation block
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)handler;
-(NSString *)identifier;
-(void)setHandler:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)title;
-(void)setTitle:(NSString *)arg1 ;
-(BOOL)isPlaceholder;
-(NSString *)subtitle;
-(BOOL)isBusy;
-(BOOL)isSelected;
-(void)setSubtitle:(NSString *)arg1 ;
-(void)setPlaceholder:(BOOL)arg1 ;
-(BOOL)performAction;
-(void)setSelected:(BOOL)arg1 ;
-(id)initWithTitle:(id)arg1 identifier:(id)arg2 handler:(/*^block*/id)arg3 ;
-(void)setBusy:(BOOL)arg1 ;
@end

