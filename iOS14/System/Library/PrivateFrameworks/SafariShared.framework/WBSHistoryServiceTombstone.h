/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/WBSHistoryServiceObject.h>

@class NSString, NSData;

@interface WBSHistoryServiceTombstone : WBSHistoryServiceObject {

	NSString* _url;
	NSData* _urlHash;
	NSData* _urlSalt;
	double _startTime;
	double _endTime;
	long long _generation;

}

@property (nonatomic,readonly) NSString * url;                    //@synthesize url=_url - In the implementation block
@property (nonatomic,readonly) NSData * urlHash;                  //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) NSData * urlSalt;                  //@synthesize urlSalt=_urlSalt - In the implementation block
@property (nonatomic,readonly) double startTime;                  //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                    //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long generation;              //@synthesize generation=_generation - In the implementation block
+(BOOL)supportsSecureCoding;
-(long long)generation;
-(NSData *)urlSalt;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)url;
-(NSData *)urlHash;
-(id)initWithDatabaseID:(long long)arg1 url:(id)arg2 urlHash:(id)arg3 urlSalt:(id)arg4 startTime:(double)arg5 endTime:(double)arg6 generation:(long long)arg7 ;
-(id)initWithTombstone:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(double)endTime;
-(double)startTime;
@end

