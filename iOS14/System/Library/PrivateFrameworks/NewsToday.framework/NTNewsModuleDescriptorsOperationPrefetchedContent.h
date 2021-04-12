/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NFCopying.h>

@protocol FCNewsAppConfiguration, FCTodayPrivateData;
@class NSDictionary;

@interface NTNewsModuleDescriptorsOperationPrefetchedContent : NSObject <NFCopying> {

	id<FCNewsAppConfiguration> _appConfiguration;
	id<FCTodayPrivateData> _privateData;
	NSDictionary* _todayConfigsByRequestID;
	NSDictionary* _prefetchedHeldRecordsByType;

}

@property (nonatomic,copy,readonly) id<FCNewsAppConfiguration> appConfiguration;              //@synthesize appConfiguration=_appConfiguration - In the implementation block
@property (nonatomic,copy,readonly) id<FCTodayPrivateData> privateData;                       //@synthesize privateData=_privateData - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * todayConfigsByRequestID;                   //@synthesize todayConfigsByRequestID=_todayConfigsByRequestID - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * prefetchedHeldRecordsByType;               //@synthesize prefetchedHeldRecordsByType=_prefetchedHeldRecordsByType - In the implementation block
-(id)init;
-(id<FCNewsAppConfiguration>)appConfiguration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)todayConfigsByRequestID;
-(id<FCTodayPrivateData>)privateData;
-(NSDictionary *)prefetchedHeldRecordsByType;
-(id)initWithAppConfiguration:(id)arg1 privateData:(id)arg2 todayConfigsByRequestID:(id)arg3 prefetchedHeldRecordsByType:(id)arg4 ;
@end

