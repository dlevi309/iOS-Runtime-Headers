/*
* Generated on Monday, March 1, 2021 at 2:31:54 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ReminderKit.framework/ReminderKit
*/

#import <ReminderKit/ReminderKit-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSArray, NSError;

@interface REMChangeSet : NSObject <NSCopying, NSSecureCoding> {

	BOOL _isTruncated;
	BOOL _filterByTransactionAuthorsIsExclusion;
	NSArray* _transactions;
	NSArray* _inserts;
	NSArray* _updates;
	NSArray* _deletes;
	NSError* _error;
	NSArray* _filterByTransactionAuthorStrings;
	NSArray* _unfilteredTransactions;

}

@property (nonatomic,retain) NSError * error;                                         //@synthesize error=_error - In the implementation block
@property (assign,nonatomic) BOOL isTruncated;                                        //@synthesize isTruncated=_isTruncated - In the implementation block
@property (nonatomic,retain) NSArray * inserts;                                       //@synthesize inserts=_inserts - In the implementation block
@property (nonatomic,retain) NSArray * updates;                                       //@synthesize updates=_updates - In the implementation block
@property (nonatomic,retain) NSArray * deletes;                                       //@synthesize deletes=_deletes - In the implementation block
@property (nonatomic,retain) NSArray * filterByTransactionAuthorStrings;              //@synthesize filterByTransactionAuthorStrings=_filterByTransactionAuthorStrings - In the implementation block
@property (assign,nonatomic) BOOL filterByTransactionAuthorsIsExclusion;              //@synthesize filterByTransactionAuthorsIsExclusion=_filterByTransactionAuthorsIsExclusion - In the implementation block
@property (nonatomic,retain) NSArray * unfilteredTransactions;                        //@synthesize unfilteredTransactions=_unfilteredTransactions - In the implementation block
@property (nonatomic,readonly) NSArray * transactions;                                //@synthesize transactions=_transactions - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)errorChangeSetWithError:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSError *)error;
-(void)setError:(NSError *)arg1 ;
-(id)initWithError:(id)arg1 ;
-(NSArray *)updates;
-(NSArray *)inserts;
-(void)setUpdates:(NSArray *)arg1 ;
-(BOOL)isTruncated;
-(NSArray *)deletes;
-(NSArray *)transactions;
-(id)initWithChangeTransactions:(id)arg1 unfilteredTransactions:(id)arg2 ;
-(BOOL)_flattenAndConsolidateChanges;
-(NSArray *)filterByTransactionAuthorStrings;
-(BOOL)filterByTransactionAuthorsIsExclusion;
-(void)setInserts:(NSArray *)arg1 ;
-(void)setDeletes:(NSArray *)arg1 ;
-(void)setFilterByTransactionAuthorStrings:(NSArray *)arg1 ;
-(void)setFilterByTransactionAuthorsIsExclusion:(BOOL)arg1 ;
-(NSArray *)unfilteredTransactions;
-(id)initWithChangeTransactions:(id)arg1 ;
-(BOOL)applyFilterByTransactionAuthors:(id)arg1 isExclusion:(BOOL)arg2 ;
-(BOOL)enumerateChanges:(long long)arg1 forModelsOfClass:(Class)arg2 withBlock:(/*^block*/id)arg3 ;
-(id)lastChangeTokenForAccountID:(id)arg1 ;
-(void)setIsTruncated:(BOOL)arg1 ;
-(void)setUnfilteredTransactions:(NSArray *)arg1 ;
@end

