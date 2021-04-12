/*
* Generated on Thursday, January 14, 2021 at 2:27:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AirPlayRoutePrediction.framework/AirPlayRoutePrediction
*/

#import <AirPlayRoutePrediction/AirPlayRoutePrediction-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSDictionary;

@interface ARPHomeControlCorrelationsArchive : NSObject <NSCopying, NSSecureCoding> {

	NSDate* _archiveDate;
	NSDictionary* _microlocationCorrelationsDictionary;
	NSDictionary* _nextActionCorrelationsDictionary;

}

@property (nonatomic,readonly) NSDate * archiveDate;                                            //@synthesize archiveDate=_archiveDate - In the implementation block
@property (nonatomic,readonly) NSDictionary * microlocationCorrelationsDictionary;              //@synthesize microlocationCorrelationsDictionary=_microlocationCorrelationsDictionary - In the implementation block
@property (nonatomic,readonly) NSDictionary * nextActionCorrelationsDictionary;                 //@synthesize nextActionCorrelationsDictionary=_nextActionCorrelationsDictionary - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDictionary *)microlocationCorrelationsDictionary;
-(NSDate *)archiveDate;
-(NSDictionary *)nextActionCorrelationsDictionary;
-(id)initWithMicrolocationsCorrelationsDictionary:(id)arg1 nextActionCorrelationsDictionary:(id)arg2 archiveDate:(id)arg3 ;
@end

