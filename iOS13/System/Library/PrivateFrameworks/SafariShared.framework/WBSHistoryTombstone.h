/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

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
-(id)description;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSDictionary *)dictionaryRepresentation;
-(long long)generation;
-(double)startTime;
-(double)endTime;
-(BOOL)isSecure;
-(NSString *)urlString;
-(BOOL)matchesVisitTime:(double)arg1 urlString:(id)arg2 ;
-(id)initWithURLString:(id)arg1 urlHash:(id)arg2 urlSalt:(id)arg3 startTime:(double)arg4 endTime:(double)arg5 generation:(long long)arg6 ;
-(id)secureTombstoneWithSalt:(id)arg1 ;
-(id)initWithSQLiteRow:(id)arg1 crypto:(id)arg2 ;
-(NSData *)urlHash;
-(NSData *)urlSalt;
@end

