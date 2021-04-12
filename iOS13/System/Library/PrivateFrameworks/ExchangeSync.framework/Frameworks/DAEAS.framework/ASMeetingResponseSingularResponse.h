/*
* Generated on Monday, March 1, 2021 at 2:34:49 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ExchangeSync.framework/Frameworks/DAEAS.framework/DAEAS
*/

#import <DAEAS/ASItem.h>

@class NSString, NSNumber;

@interface ASMeetingResponseSingularResponse : ASItem {

	NSString* _requestId;
	NSNumber* _status;
	NSString* _eventId;
	NSString* _instanceId;

}

@property (nonatomic,retain) NSString * requestId;               //@synthesize requestId=_requestId - In the implementation block
@property (nonatomic,retain) NSNumber * status;                  //@synthesize status=_status - In the implementation block
@property (nonatomic,retain) NSString * eventId;                 //@synthesize eventId=_eventId - In the implementation block
@property (nonatomic,retain) NSString * instanceId;              //@synthesize instanceId=_instanceId - In the implementation block
+(BOOL)acceptsTopLevelLeaves;
+(BOOL)parsingLeafNode;
+(BOOL)parsingWithSubItems;
+(BOOL)frontingBasicTypes;
+(BOOL)notifyOfUnknownTokens;
+(id)asParseRules;
-(id)description;
-(NSNumber *)status;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSString *)requestId;
-(NSString *)eventId;
-(void)setEventId:(NSString *)arg1 ;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setInstanceId:(NSString *)arg1 ;
-(NSString *)instanceId;
@end

