/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSDate *)startDate;
-(NSDate *)endDate;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(NSSet *)identifiers;
-(void)setIdentifiers:(NSSet *)arg1 ;
-(long long)sortOrder;
-(void)setSortOrder:(long long)arg1 ;
-(unsigned long long)tagType;
-(id)initWithStartDate:(id)arg1 endDate:(id)arg2 tagType:(unsigned long long)arg3 ;
-(id)statementForDatabase:(id)arg1 cache:(id)arg2 fetchOptions:(unsigned long long)arg3 error:(id*)arg4 ;
-(void)setMinimumItemCount:(unsigned long long)arg1 ;
-(unsigned long long)minimumItemCount;
@end

