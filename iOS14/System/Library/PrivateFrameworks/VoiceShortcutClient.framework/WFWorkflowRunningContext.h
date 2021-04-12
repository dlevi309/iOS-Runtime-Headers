/*
* Generated on Thursday, January 14, 2021 at 2:22:08 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/VoiceShortcutClient.framework/VoiceShortcutClient
*/

#import <VoiceShortcutClient/VoiceShortcutClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSDate, NSData;

@interface WFWorkflowRunningContext : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isShortcutsApp;
	NSString* _identifier;
	NSString* _workflowIdentifier;
	NSDate* _creationDate;
	NSString* _automationType;
	NSString* _progressCategory;
	NSData* _serializedWorkflowControllerState;

}

@property (nonatomic,copy) NSString * identifier;                                     //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * workflowIdentifier;                             //@synthesize workflowIdentifier=_workflowIdentifier - In the implementation block
@property (nonatomic,retain) NSDate * creationDate;                                   //@synthesize creationDate=_creationDate - In the implementation block
@property (nonatomic,copy,readonly) NSString * progressCategory;                      //@synthesize progressCategory=_progressCategory - In the implementation block
@property (assign,nonatomic) BOOL isShortcutsApp;                                     //@synthesize isShortcutsApp=_isShortcutsApp - In the implementation block
@property (nonatomic,retain) NSData * serializedWorkflowControllerState;              //@synthesize serializedWorkflowControllerState=_serializedWorkflowControllerState - In the implementation block
@property (nonatomic,retain) NSString * automationType;                               //@synthesize automationType=_automationType - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)removeProgressSubscriber:(id)arg1 ;
-(void)setCreationDate:(NSDate *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSDate *)creationDate;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(id)initWithWorkflowIdentifier:(id)arg1 ;
-(NSString *)automationType;
-(void)setAutomationType:(NSString *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)addProgressSubscriberUsingPublishingHandler:(/*^block*/id)arg1 ;
-(id)progressForPublishingWithTotalUnitCount:(long long)arg1 cancellationHandler:(/*^block*/id)arg2 ;
-(NSString *)workflowIdentifier;
-(void)setWorkflowIdentifier:(NSString *)arg1 ;
-(NSString *)progressCategory;
-(BOOL)isShortcutsApp;
-(void)setIsShortcutsApp:(BOOL)arg1 ;
-(NSData *)serializedWorkflowControllerState;
-(void)setSerializedWorkflowControllerState:(NSData *)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

