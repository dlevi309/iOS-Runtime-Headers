/*
* Generated on Thursday, January 14, 2021 at 2:26:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <VoiceShortcutClient/WFDatabaseObjectDescriptor.h>

@class NSString, NSData, NSDate;

@interface WFTriggerEvent : WFDatabaseObjectDescriptor {

	BOOL _confirmed;
	NSString* _triggerID;
	NSData* _eventInfo;
	NSDate* _dateCreated;

}

@property (nonatomic,copy,readonly) NSString * triggerID;              //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,copy,readonly) NSData * eventInfo;                //@synthesize eventInfo=_eventInfo - In the implementation block
@property (nonatomic,readonly) NSDate * dateCreated;                   //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                           //@synthesize confirmed=_confirmed - In the implementation block
-(NSDate *)dateCreated;
-(BOOL)confirmed;
-(NSData *)eventInfo;
-(void)setConfirmed:(BOOL)arg1 ;
-(NSString *)triggerID;
-(id)initWithIdentifier:(id)arg1 triggerID:(id)arg2 eventInfo:(id)arg3 confirmed:(BOOL)arg4 dateCreated:(id)arg5 ;
@end

