/*
* Generated on Monday, March 1, 2021 at 2:34:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/InAppMessages.framework/InAppMessages
*/


@class NSString, ICInAppMessageEntry, NSDate, NSDictionary;

@interface IAMImpression : NSObject {

	NSString* _targetIdentifier;
	ICInAppMessageEntry* _messageEntry;
	NSDate* _displayStartTime;
	NSDate* _displayEndTime;

}

@property (nonatomic,readonly) NSDictionary * eventDictionary; 
@property (nonatomic,copy) NSString * targetIdentifier;                       //@synthesize targetIdentifier=_targetIdentifier - In the implementation block
@property (nonatomic,retain) ICInAppMessageEntry * messageEntry;              //@synthesize messageEntry=_messageEntry - In the implementation block
@property (nonatomic,readonly) NSString * messageIdentifier; 
@property (nonatomic,readonly) int messageType; 
@property (nonatomic,copy) NSDate * displayStartTime;                         //@synthesize displayStartTime=_displayStartTime - In the implementation block
@property (nonatomic,copy) NSDate * displayEndTime;                           //@synthesize displayEndTime=_displayEndTime - In the implementation block
-(int)messageType;
-(NSString *)messageIdentifier;
-(NSDictionary *)eventDictionary;
-(NSString *)targetIdentifier;
-(void)setTargetIdentifier:(NSString *)arg1 ;
-(id)initWithMessageEntry:(id)arg1 targetIdentifier:(id)arg2 ;
-(ICInAppMessageEntry *)messageEntry;
-(void)setMessageEntry:(ICInAppMessageEntry *)arg1 ;
-(NSDate *)displayStartTime;
-(void)setDisplayStartTime:(NSDate *)arg1 ;
-(NSDate *)displayEndTime;
-(void)setDisplayEndTime:(NSDate *)arg1 ;
@end

