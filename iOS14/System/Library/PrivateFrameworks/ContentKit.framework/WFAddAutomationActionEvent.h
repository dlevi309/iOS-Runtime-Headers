/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFAddAutomationActionEvent : WFEvent {

	unsigned _actionIndex;
	NSString* _actionIdentifier;
	NSString* _shortcutIdentifier;

}

@property (nonatomic,copy) NSString * actionIdentifier;                //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (nonatomic,copy) NSString * shortcutIdentifier;              //@synthesize shortcutIdentifier=_shortcutIdentifier - In the implementation block
@property (assign,nonatomic) unsigned actionIndex;                     //@synthesize actionIndex=_actionIndex - In the implementation block
+(Class)codableEventClass;
-(unsigned)actionIndex;
-(void)setActionIndex:(unsigned)arg1 ;
-(void)setShortcutIdentifier:(NSString *)arg1 ;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)actionIdentifier;
-(NSString *)shortcutIdentifier;
@end

