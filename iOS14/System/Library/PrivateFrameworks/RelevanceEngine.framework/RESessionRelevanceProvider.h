/*
* Generated on Thursday, January 14, 2021 at 2:28:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/RelevanceEngine.framework/RelevanceEngine
*/

#import <RelevanceEngine/RelevanceEngine-Structs.h>
#import <RelevanceEngine/RERelevanceProvider.h>

@class NSDate;

@interface RESessionRelevanceProvider : RERelevanceProvider {

	BOOL _historic;
	NSDate* _startDate;
	NSDate* _endDate;

}

@property (nonatomic,readonly) NSDate * startDate;                           //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                             //@synthesize endDate=_endDate - In the implementation block
@property (getter=isHistoric,nonatomic,readonly) BOOL historic;              //@synthesize historic=_historic - In the implementation block
+(id)_simulationDateFormatter;
+(id)relevanceSimulatorID;
-(NSDate *)endDate;
-(id)init;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 ;
-(NSDate *)startDate;
-(id)initWithDictionary:(id)arg1 ;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)_hash;
-(id)dictionaryEncoding;
-(BOOL)isHistoric;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 historic:(BOOL)arg3 ;
@end

