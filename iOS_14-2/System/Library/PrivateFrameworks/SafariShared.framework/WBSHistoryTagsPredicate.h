/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/

#import <libobjc.A.dylib/WBSHistoryPredicate.h>

@class NSDate, NSSet, NSString;

@interface WBSHistoryTagsPredicate : NSObject <WBSHistoryPredicate> {

	NSDate* _startDate;
	NSDate* _endDate;
	unsigned long long _tagType;
	NSSet* _identifiers;
	unsigned long long _limit;
	unsigned long long _minimumItemCount;
	long long _sortOrder;

}

@property (nonatomic,readonly) NSDate * startDate;                             //@synthesize startDate=_startDate - In the implementation block
@property (nonatomic,readonly) NSDate * endDate;                               //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long tagType;                     //@synthesize tagType=_tagType - In the implementation block
@property (nonatomic,copy) NSSet * identifiers;                                //@synthesize identifiers=_identifiers - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (assign,nonatomic) unsigned long long minimumItemCount;              //@synthesize minimumItemCount=_minimumItemCount - In the implementation block
@property (assign,nonatomic) long long sortOrder;                              //@synthesize sortOrder=_sortOrder - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)supportsSecureCoding;
-(long long)sortOrder;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSDate *)endDate;
-(unsigned long long)limit;
-(NSSet *)identifiers;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(NSDate *)startDate;
-(void)encodeWithCoder:(id)arg1 ;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 tagType:(unsigned long long)arg3 ;
-(void)setSortOrder:(long long)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(void)setMinimumItemCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumItemCount;
-(unsigned long long)tagType;
@end

