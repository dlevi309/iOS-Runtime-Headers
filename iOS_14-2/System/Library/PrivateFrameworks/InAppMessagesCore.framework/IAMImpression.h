/*
* Generated on Thursday, January 14, 2021 at 2:27:49 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/InAppMessagesCore.framework/InAppMessagesCore
*/


@class NSString, ICInAppMessageEntry, NSDate;

@interface IAMImpression : NSObject {

	NSString* _targetIdentifier;
	ICInAppMessageEntry* _messageEntry;
	NSDate* _displayStartTime;
	NSDate* _displayEndTime;

}

@property (nonatomic,copy) NSString * targetIdentifier;                     //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,copy) ICInAppMessageEntry * messageEntry;              //@synthesize messageEntry=_messageEntry - In the implementation block
@property (nonatomic,readonly) NSString * messageIdentifier; 
@property (nonatomic,readonly) int messageType; 
@property (nonatomic,copy) NSDate * displayStartTime;                       //@synthesize displayStartTime=_displayStartTime - In the implementation block
@property (nonatomic,copy) NSDate * displayEndTime;                         //@synthesize displayEndTime=_displayEndTime - In the implementation block
-(int)messageType;
-(id)initWithMessageEntry:(id)arg1 targetIdentifier:(id)arg2 ;
-(void)setDisplayStartTime:(NSDate *)arg1 ;
-(void)setDisplayEndTime:(NSDate *)arg1 ;
-(NSDate *)displayStartTime;
-(NSDate *)displayEndTime;
-(ICInAppMessageEntry *)messageEntry;
-(id)reportableMetricsEventDictionary;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(NSString *)messageIdentifier;
-(NSString *)targetIdentifier;
-(void)setMessageEntry:(ICInAppMessageEntry *)arg1 ;
@end

