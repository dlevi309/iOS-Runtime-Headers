/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunActionEvent : WFEvent {

	BOOL _completed;
	BOOL _didRunRemotely;
	NSString* _key;
	NSString* _shortcutSource;
	NSString* _runSource;
	NSString* _actionIdentifier;
	NSString* _automationType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * shortcutSource;                //@synthesize shortcutSource=_shortcutSource - In the implementation block
@property (nonatomic,copy) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
@property (assign,nonatomic) BOOL didRunRemotely;                    //@synthesize didRunRemotely=_didRunRemotely - In the implementation block
@property (nonatomic,copy) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
+(Class)codableEventClass;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(void)setKey:(NSString *)arg1 ;
-(void)setShortcutSource:(NSString *)arg1 ;
-(BOOL)didRunRemotely;
-(void)setDidRunRemotely:(BOOL)arg1 ;
-(NSString *)shortcutSource;
@end

