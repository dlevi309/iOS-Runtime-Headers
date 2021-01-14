/*
* Generated on Thursday, January 14, 2021 at 2:24:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionClient.framework/AppPredictionClient
*/

#import <AppPredictionClient/AppPredictionClient-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/ATXProtoBufWrapper.h>

@class NSDate, NSPredicate, NSDateInterval;

@interface ATXActionCriteria : NSObject <NSCopying, NSSecureCoding, ATXProtoBufWrapper> {

	BOOL _lockScreenEligible;
	NSDate* _startDate;
	NSDate* _endDate;
	NSPredicate* _predicate;

}

@property (nonatomic,readonly) NSDate * startDate;                         //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                           //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) BOOL lockScreenEligible;                    //@synthesize lockScreenEligible=_lockScreenEligible - In the implementation block
@property (nonatomic,readonly) NSDateInterval * dateInterval; 
@property (nonatomic,readonly) NSPredicate * predicate;                    //@synthesize predicate=_predicate - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDateInterval *)dateInterval;
-(id)initWithProto:(id)arg1 ;
-(id)initWithProtoData:(id)arg1 ;
-(NSDate *)endDate;
-(id)json;
-(id)proto;
-(NSPredicate *)predicate;
-(id)init;
-(id)encodeAsProto;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 lockScreenEligible:(BOOL)arg3 predicate:(id)arg4 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(BOOL)lockScreenEligible;
-(id)initWithCoder:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isRelevant:(id)arg1 ;
@end

