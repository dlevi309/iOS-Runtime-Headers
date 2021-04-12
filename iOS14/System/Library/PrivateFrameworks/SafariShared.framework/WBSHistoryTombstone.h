/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSString, NSData, NSDictionary;

@interface WBSHistoryTombstone : NSObject <NSSecureCoding> {

	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;
	double _startTime;
	double _endTime;
	long long _generation;

}

@property (nonatomic,readonly) NSDictionary * dictionaryRepresentation; 
@property (nonatomic,readonly) NSString * urlString;                                 //@synthesize urlString=_urlString - In the implementation block
@property (nonatomic,readonly) NSData * urlHash;                                     //@synthesize urlHash=_urlHash - In the implementation block
@property (nonatomic,readonly) NSData * urlSalt;                                     //@synthesize urlSalt=_urlSalt - In the implementation block
@property (nonatomic,readonly) double startTime;                                     //@synthesize startTime=_startTime - In the implementation block
@property (nonatomic,readonly) double endTime;                                       //@synthesize endTime=_endTime - In the implementation block
@property (nonatomic,readonly) long long generation;                                 //@synthesize generation=_generation - In the implementation block
@property (getter=isSecure,nonatomic,readonly) BOOL secure; 
+(BOOL)supportsSecureCoding;
-(BOOL)isSecure;
-(NSDictionary *)dictionaryRepresentation;
-(NSString *)urlString;
-(long long)generation;
-(NSData *)urlSalt;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSData *)urlHash;
-(id)description;
-(BOOL)matchesVisitTime:(double)arg1 urlString:(id)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6 ;
-(id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2 ;
-(id)secureTombstoneWithSalt:(id)arg1 ;
-(double)endTime;
-(double)startTime;
-(id)initWithStreamedTombstone:(const HistoryStreamedTombstone*)arg1 ;
@end

