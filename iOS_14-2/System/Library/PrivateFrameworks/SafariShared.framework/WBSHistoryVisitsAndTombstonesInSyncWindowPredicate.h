/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>
#import <libobjc.A.dylib/WBSHistoryTombstonePredicate.h>

@class NSString;

@interface WBSHistoryVisitsAndTombstonesInSyncWindowPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryTombstonePredicate> {

	double _referenceDate;
	long long _lastSyncedGeneration;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(BOOL)evaluateServiceTombstone:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)evaluateTombstone:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(id)initWithSyncWindow:(double)arg1 lastSyncedGeneration:(long long)arg2 ;
@end

