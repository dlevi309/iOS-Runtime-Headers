/*
* Generated on Thursday, January 14, 2021 at 2:23:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/GameCenterUI.framework/GameCenterUI
*/


@class NSString;

@interface GKEditAction : NSObject {

	BOOL _destructive;
	NSString* _name;
	SEL _selector;

}

@property (nonatomic,copy) NSString * name;                 //@synthesize name=_name - In the implementation block
@property (assign,nonatomic) SEL selector;                  //@synthesize selector=_selector - In the implementation block
@property (assign,nonatomic) BOOL destructive;              //@synthesize destructive=_destructive - In the implementation block
+(id)actionWithName:(id)arg1 selector:(SEL)arg2 ;
+(id)deleteActionWithName:(id)arg1 ;
-(SEL)selector;
-(void)setSelector:(SEL)arg1 ;
-(BOOL)destructive;
-(NSString *)name;
-(void)setName:(NSString *)arg1 ;
-(void)setDestructive:(BOOL)arg1 ;
-(void)dealloc;
@end

