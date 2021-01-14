/*
* Generated on Thursday, January 14, 2021 at 2:25:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PersonalizationPortraitInternals.framework/PersonalizationPortraitInternals
*/

#import <PersonalizationPortraitInternals/PersonalizationPortraitInternals-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDate, NSSet, NSString;

@interface PPSourceQuery : NSObject <NSCopying, NSSecureCoding> {

	unsigned long long _limit;
	NSDate* _fromDate;
	NSDate* _toDate;
	NSSet* _matchingBundleIds;
	NSSet* _matchingDocumentIds;
	NSString* _matchingContactHandle;

}

@property (assign,nonatomic) unsigned long long limit;                      //@synthesize limit=_limit - In the implementation block
@property (nonatomic,retain) NSDate * fromDate;                             //@synthesize fromDate=_fromDate - In the implementation block
@property (nonatomic,retain) NSDate * toDate;                               //@synthesize toDate=_toDate - In the implementation block
@property (nonatomic,retain) NSSet * matchingBundleIds;                     //@synthesize matchingBundleIds=_matchingBundleIds - In the implementation block
@property (nonatomic,retain) NSSet * matchingDocumentIds;                   //@synthesize matchingDocumentIds=_matchingDocumentIds - In the implementation block
@property (nonatomic,retain) NSString * matchingContactHandle;              //@synthesize matchingContactHandle=_matchingContactHandle - In the implementation block
+(BOOL)supportsSecureCoding;
-(NSDate *)toDate;
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)init;
-(void)setMatchingContactHandle:(NSString *)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)description;
-(NSSet *)matchingDocumentIds;
-(void)setMatchingDocumentIds:(NSSet *)arg1 ;
-(unsigned long long)hash;
-(id)initWithCoder:(id)arg1 ;
-(void)setFromDate:(NSDate *)arg1 ;
-(NSString *)matchingContactHandle;
-(NSDate *)fromDate;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(void)setToDate:(NSDate *)arg1 ;
-(NSSet *)matchingBundleIds;
-(BOOL)isEqualToSourceQuery:(id)arg1 ;
-(void)setMatchingBundleIds:(NSSet *)arg1 ;
@end

