/*
* Generated on Monday, March 1, 2021 at 2:34:22 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFTriggeredAutomationEvent : WFEvent {

	BOOL _requiredRuntimeConfirmation;
	NSString* _key;
	NSString* _triggerType;

}

@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                          //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;              //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
+(Class)codableEventClass;
-(NSString *)key;
-(void)setKey:(NSString *)arg1 ;
-(NSString *)triggerType;
-(void)setTriggerType:(NSString *)arg1 ;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(BOOL)requiredRuntimeConfirmation;
@end

