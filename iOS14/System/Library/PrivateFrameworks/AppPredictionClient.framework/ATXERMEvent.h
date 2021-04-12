/*
* Generated on Thursday, January 14, 2021 at 2:24:12 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <libobjc.A.dylib/BMStoreData.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSDate, ATXEngagementRecordEntry, NSArray, NSString;

@interface ATXERMEvent : NSObject <BMStoreData, ATXProtoBufWrapper> {

	NSDate* _eventDate;
	unsigned long long _eventType;
	ATXEngagementRecordEntry* _entry;
	NSArray* _clientModelIds;

}

@property (nonatomic,readonly) NSDate * eventDate;                            //@synthesize eventDate=_eventDate - In the implementation block
@property (nonatomic,readonly) unsigned long long eventType;                  //@synthesize eventType=_eventType - In the implementation block
@property (nonatomic,readonly) ATXEngagementRecordEntry * entry;              //@synthesize entry=_entry - In the implementation block
@property (nonatomic,readonly) NSArray * clientModelIds;                      //@synthesize clientModelIds=_clientModelIds - In the implementation block
@property (nonatomic,readonly) unsigned dataVersion; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)eventWithData:(id)arg1 dataVersion:(unsigned)arg2 ;
-(id)jsonDict;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(unsigned)dataVersion;
-(id)serialize;
-(unsigned long long)eventType;
-(id)json;
-(id)proto;
-(id)init;
-(id)encodeAsProto;
-(ATXEngagementRecordEntry *)entry;
-(NSArray *)clientModelIds;
-(NSDate *)eventDate;
-(BOOL)isEqual:(id)arg1 ;
-(id)initWithEventDate:(id)arg1 eventType:(unsigned long long)arg2 recordEntry:(id)arg3 clientModelIds:(id)arg4 ;
-(BOOL)isEqualToATXERMEvent:(id)arg1 ;
@end

