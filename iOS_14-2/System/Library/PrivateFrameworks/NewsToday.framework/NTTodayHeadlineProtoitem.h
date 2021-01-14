/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NTTodayProtoitem.h>

@protocol FCHeadlineProviding;
@class NSString, SFSearchResult, NSURL;

@interface NTTodayHeadlineProtoitem : NSObject <NTTodayProtoitem> {

	NSString* _identifier;
	id<FCHeadlineProviding> _headline;
	SFSearchResult* _searchResult;
	NSURL* _actionURL;

}

@property (nonatomic,copy,readonly) id<FCHeadlineProviding> headline;              //@synthesize headline=_headline - In the implementation block
@property (nonatomic,copy,readonly) SFSearchResult * searchResult;                 //@synthesize searchResult=_searchResult - In the implementation block
@property (nonatomic,copy,readonly) NSURL * actionURL;                             //@synthesize actionURL=_actionURL - In the implementation block
@property (nonatomic,copy,readonly) NSString * identifier;                         //@synthesize identifier=_identifier - In the implementation block
-(id<FCHeadlineProviding>)headline;
-(SFSearchResult *)searchResult;
-(id)init;
-(unsigned long long)hash;
-(NSURL *)actionURL;
-(NSString *)identifier;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)assetHandlesWithOperationInfo:(id)arg1 ;
-(id)itemWithContentContext:(id)arg1 operationInfo:(id)arg2 sectionDescriptor:(id)arg3 todayData:(id)arg4 assetFileURLsByRemoteURL:(id)arg5 preferredDynamicSlotAllocation:(unsigned long long)arg6 ;
-(id)initWithIdentifier:(id)arg1 headline:(id)arg2 searchResult:(id)arg3 actionURL:(id)arg4 ;
@end

