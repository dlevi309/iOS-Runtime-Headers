/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTTodayProtoitem.h>

@class NSString, NTPBTodaySectionConfigWebEmbed;

@interface NTTodayWebEmbedProtoitem : NSObject <NTTodayProtoitem> {

	NSString* _identifier;
	NTPBTodaySectionConfigWebEmbed* _webEmbed;

}

@property (nonatomic,copy,readonly) NTPBTodaySectionConfigWebEmbed * webEmbed;              //@synthesize webEmbed=_webEmbed - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                                  //@synthesize identifier=_identifier - In the implementation block
-(id)init;
-(NTPBTodaySectionConfigWebEmbed *)webEmbed;
-(unsigned long long)hash;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)assetHandlesWithOperationInfo:(id)arg1 ;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6 ;
-(id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2 ;
@end

