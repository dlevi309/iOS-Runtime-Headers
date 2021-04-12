/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>

@class NSString, NSData;

@interface WBSHistoryVisitsInTimeRangePredicate : NSObject <WBSHistoryVisitPredicate> {

	double _startTime;
	double _endTime;
	NSString* _urlString;
	NSData* _urlHash;
	NSData* _urlSalt;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 urlString:(id)arg3 urlHash:(id)arg4 urlSalt:(id)arg5 ;
@end

