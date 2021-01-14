/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSuggestAutomationEvent : WFEvent {

	BOOL _interacted;
	BOOL _completed;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;
	NSString* _source;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) BOOL interacted;                                     //@synthesize interacted=_interacted - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
@property (nonatomic,copy) NSString * source;                                     //@synthesize source=_source - In the implementation block
+(Class)codableEventClass;
-(BOOL)completed;
-(void)setSource:(NSString *)arg1 ;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)source;
-(void)setInteracted:(BOOL)arg1 ;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(NSString *)suggestedAutomationIdentifier;
-(BOOL)interacted;
@end

