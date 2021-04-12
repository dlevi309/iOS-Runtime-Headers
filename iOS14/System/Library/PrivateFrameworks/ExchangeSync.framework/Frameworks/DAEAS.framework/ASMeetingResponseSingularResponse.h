/*
* Generated on Thursday, January 14, 2021 at 2:27:40 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)instanceId;
-(NSString *)eventId;
-(void)setRequestId:(NSString *)arg1 ;
-(void)setEventId:(NSString *)arg1 ;
-(id)description;
-(NSString *)requestId;
-(void)setInstanceId:(NSString *)arg1 ;
-(void)setStatus:(NSNumber *)arg1 ;
-(NSNumber *)status;
@end

