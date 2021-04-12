/*
* Generated on Thursday, January 14, 2021 at 2:26:39 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/RLMObject.h>
#import <libobjc.A.dylib/WFRecordStorage.h>

@class NSString, NSData, NSDate;

@interface WFTriggerEventRealmObject : RLMObject <WFRecordStorage> {

	BOOL _confirmed;
	NSString* _identifier;
	NSString* _triggerID;
	NSData* _eventInfo;
	NSDate* _dateCreated;

}

@property (nonatomic,copy) NSString * identifier;                   //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSString * triggerID;                    //@synthesize triggerID=_triggerID - In the implementation block
@property (nonatomic,copy) NSData * eventInfo;                      //@synthesize eventInfo=_eventInfo - In the implementation block
@property (nonatomic,copy) NSDate * dateCreated;                    //@synthesize dateCreated=_dateCreated - In the implementation block
@property (assign,nonatomic) BOOL confirmed;                        //@synthesize confirmed=_confirmed - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)primaryKey;
+(id)requiredProperties;
-(NSDate *)dateCreated;
-(void)setDateCreated:(NSDate *)arg1 ;
-(void)setEventInfo:(NSData *)arg1 ;
-(BOOL)confirmed;
-(id)descriptor;
-(NSData *)eventInfo;
-(void)setConfirmed:(BOOL)arg1 ;
-(void)setIdentifier:(NSString *)arg1 ;
-(NSString *)identifier;
-(NSString *)triggerID;
-(void)setTriggerID:(NSString *)arg1 ;
@end

