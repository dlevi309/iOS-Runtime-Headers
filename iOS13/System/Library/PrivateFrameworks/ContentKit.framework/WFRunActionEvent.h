/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFRunActionEvent : WFEvent {

	BOOL _completed;
	int _source;
	NSString* _key;
	NSString* _runSource;
	NSString* _actionIdentifier;
	NSString* _automationType;

}

@property (nonatomic,copy) NSString * key;                           //@synthesize key=_key - In the implementation block
@property (assign,nonatomic) int source;                             //@synthesize source=_source - In the implementation block
@property (nonatomic,copy) NSString * runSource;                     //@synthesize runSource=_runSource - In the implementation block
@property (nonatomic,copy) NSString * actionIdentifier;              //@synthesize actionIdentifier=_actionIdentifier - In the implementation block
@property (assign,nonatomic) BOOL completed;                         //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSString * automationType;                //@synthesize automationType=_automationType - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setSource:(int)arg1 ;
-(int)source;
-(void)setKey:(NSString *)arg1 ;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)actionIdentifier;
-(void)setActionIdentifier:(NSString *)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(NSString *)runSource;
-(void)setRunSource:(NSString *)arg1 ;
@end

