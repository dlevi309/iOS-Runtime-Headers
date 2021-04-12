/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)identifier;
-(NTPBTodaySectionConfigWebEmbed *)webEmbed;
-(id)assetHandlesWithOperationInfo:(id)arg1 forLeadingCellAppearance:(BOOL)arg2 ;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 forLeadingCellAppearance:(BOOL)arg6 preferredDynamicSlotAllocation:(unsigned long long)arg7 ;
-(id)initWithIdentifier:(id)arg1 webEmbed:(id)arg2 ;
@end

