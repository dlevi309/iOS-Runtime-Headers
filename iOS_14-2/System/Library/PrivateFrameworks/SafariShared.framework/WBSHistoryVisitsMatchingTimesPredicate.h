/*
* Generated on Thursday, January 14, 2021 at 2:23:14 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <SafariShared/SafariShared-Structs.h>
#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>
#import <libobjc.A.dylib/WBSHistoryStreamedVisitPredicate.h>

@class NSDictionary, NSString;

@interface WBSHistoryVisitsMatchingTimesPredicate : NSObject <WBSHistoryVisitPredicate, WBSHistoryStreamedVisitPredicate> {

	NSDictionary* _itemVisitTimeMap;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithItemVisitTimeMap:(id)arg1 ;
-(BOOL)_evaluateVisitWithItemID:(long long)arg1 visitTime:(double)arg2 ;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(id)initWithCloudVisitIdentifiers:(id)arg1 ;
-(BOOL)evaluateHistoryStreamedVisit:(const HistoryStreamedVisit*)arg1 ;
@end

