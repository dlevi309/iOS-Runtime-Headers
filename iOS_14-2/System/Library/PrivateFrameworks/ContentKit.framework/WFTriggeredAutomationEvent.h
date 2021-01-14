/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFEvent.h>

@class NSString;

@interface WFTriggeredAutomationEvent : WFEvent {

	BOOL _requiredRuntimeConfirmation;
	unsigned _batchCount;
	unsigned _batchDroppedCount;
	NSString* _key;
	NSString* _triggerType;

}

@property (nonatomic,copy) NSString * key;                                  //@synthesize key=_key - In the implementation block
@property (nonatomic,copy) NSString * triggerType;                          //@synthesize triggerType=_triggerType - In the implementation block
@property (assign,nonatomic) BOOL requiredRuntimeConfirmation;              //@synthesize requiredRuntimeConfirmation=_requiredRuntimeConfirmation - In the implementation block
@property (assign,nonatomic) unsigned batchCount;                           //@synthesize batchCount=_batchCount - In the implementation block
@property (assign,nonatomic) unsigned batchDroppedCount;                    //@synthesize batchDroppedCount=_batchDroppedCount - In the implementation block
+(Class)codableEventClass;
+(id)serializablePropertyTransformers;
-(void)setTriggerType:(NSString *)arg1 ;
-(NSString *)key;
-(unsigned)batchCount;
-(void)setBatchCount:(unsigned)arg1 ;
-(NSString *)triggerType;
-(void)setKey:(NSString *)arg1 ;
-(void)setRequiredRuntimeConfirmation:(BOOL)arg1 ;
-(void)setBatchDroppedCount:(unsigned)arg1 ;
-(BOOL)requiredRuntimeConfirmation;
-(unsigned)batchDroppedCount;
@end

