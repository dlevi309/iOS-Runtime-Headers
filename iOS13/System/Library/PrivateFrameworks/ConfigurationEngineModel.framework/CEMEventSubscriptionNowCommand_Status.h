/*
* Generated on Monday, March 1, 2021 at 2:34:12 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ConfigurationEngineModel.framework/ConfigurationEngineModel
*/

#import <ConfigurationEngineModel/CEMPayloadBase.h>

@class NSArray;

@interface CEMEventSubscriptionNowCommand_Status : CEMPayloadBase {

	NSArray* _statusInactiveEvents;
	NSArray* _statusUnknownEvents;

}

@property (nonatomic,copy) NSArray * statusInactiveEvents;              //@synthesize statusInactiveEvents=_statusInactiveEvents - In the implementation block
@property (nonatomic,copy) NSArray * statusUnknownEvents;               //@synthesize statusUnknownEvents=_statusUnknownEvents - In the implementation block
+(id)allowedStatusKeys;
+(id)allowedReasons;
+(id)buildRequiredOnly;
+(id)buildWithInactiveEvents:(id)arg1 withUnknownEvents:(id)arg2 ;
-(BOOL)loadPayload:(id)arg1 error:(id*)arg2 ;
-(id)serializePayload;
-(void)setStatusInactiveEvents:(NSArray *)arg1 ;
-(void)setStatusUnknownEvents:(NSArray *)arg1 ;
-(NSArray *)statusInactiveEvents;
-(NSArray *)statusUnknownEvents;
@end

