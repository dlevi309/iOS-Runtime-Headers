/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryVisitPredicate.h>

@class WBSSetInt64, NSString;

@interface WBSHistoryVisitsInRedirectChainPredicate : NSObject <WBSHistoryVisitPredicate> {

	WBSSetInt64* _visitIdentifiers;
	WBSSetInt64* _ignoredItemIdentifiers;
	long long _direction;

}

@property (nonatomic,readonly) WBSSetInt64 * visitIdentifiers;                    //@synthesize visitIdentifiers=_visitIdentifiers - In the implementation block
@property (nonatomic,readonly) WBSSetInt64 * ignoredItemIdentifiers;              //@synthesize ignoredItemIdentifiers=_ignoredItemIdentifiers - In the implementation block
@property (nonatomic,readonly) long long direction;                               //@synthesize direction=_direction - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)direction;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)encodeWithCoder:(id)arg1 ;
-(NSString *)description;
-(id)initWithCoder:(id)arg1 ;
-(WBSSetInt64 *)visitIdentifiers;
-(WBSSetInt64 *)ignoredItemIdentifiers;
-(BOOL)evaluateServiceVisit:(id)arg1 ;
-(BOOL)evaluateVisit:(id)arg1 ;
-(id)initWithHistoryVisits:(id)arg1 ignoredItems:(id)arg2 direction:(long long)arg3 ;
@end

