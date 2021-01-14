/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFSetupSuggestedAutomationEvent : WFEvent {

	BOOL _completed;
	unsigned _currentStep;
	NSString* _key;
	NSString* _suggestedAutomationIdentifier;

}

@property (nonatomic,copy) NSString * key;                                        //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * suggestedAutomationIdentifier;              //@synthesize suggestedAutomationIdentifier=_suggestedAutomationIdentifier - In the implementation block
@property (assign,nonatomic) unsigned currentStep;                                //@synthesize currentStep=_currentStep - In the implementation block
@property (assign,nonatomic) BOOL completed;                                      //@synthesize completed=_completed - In the implementation block
+(Class)codableEventClass;
-(unsigned)currentStep;
-(BOOL)completed;
-(void)setCompleted:(BOOL)arg1 ;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(void)setSuggestedAutomationIdentifier:(NSString *)arg1 ;
-(NSString *)suggestedAutomationIdentifier;
-(void)setCurrentStep:(unsigned)arg1 ;
@end

