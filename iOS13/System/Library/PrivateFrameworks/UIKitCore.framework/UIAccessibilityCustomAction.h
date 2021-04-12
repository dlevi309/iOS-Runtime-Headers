/*
* Generated on Monday, March 1, 2021 at 2:30:09 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/UIKitCore.framework/UIKitCore
*/


@class NSAttributedString, NSString;

@interface UIAccessibilityCustomAction : NSObject {

	NSAttributedString* _attributedName;
	id _target;
	SEL _selector;
	/*^block*/id _actionHandler;

}

@property (nonatomic,copy) NSString * name; 
@property (nonatomic,copy) NSAttributedString * attributedName;              //@synthesize attributedName=_attributedName - In the implementation block
@property (assign,nonatomic,__weak) id target;                               //@synthesize target=_target - In the implementation block
@property (assign,nonatomic) SEL selector;                                   //@synthesize selector=_selector - In the implementation block
@property (nonatomic,copy) id actionHandler;                                 //@synthesize actionHandler=_actionHandler - In the implementation block
-(id)init;
-(NSString *)name;
-(SEL)selector;
-(void)setTarget:(id)arg1 ;
-(id)target;
-(void)setSelector:(SEL)arg1 ;
-(void)setName:(NSString *)arg1 ;
-(void)setAttributedName:(NSAttributedString *)arg1 ;
-(void)setActionHandler:(id)arg1 ;
-(NSAttributedString *)attributedName;
-(id)initWithName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithAttributedName:(id)arg1 target:(id)arg2 selector:(SEL)arg3 ;
-(id)initWithName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)initWithAttributedName:(id)arg1 actionHandler:(/*^block*/id)arg2 ;
-(id)actionHandler;
@end

