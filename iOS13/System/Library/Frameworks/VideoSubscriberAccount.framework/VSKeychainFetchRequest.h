/*
* Generated on Monday, March 1, 2021 at 2:32:55 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/VideoSubscriberAccount.framework/VideoSubscriberAccount
*/

#import <VideoSubscriberAccount/VideoSubscriberAccount-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class VSOptional, NSPredicate, NSArray;

@interface VSKeychainFetchRequest : NSObject <NSCopying> {

	BOOL _includesDataValues;
	VSOptional* _itemKind;
	NSPredicate* _predicate;
	NSArray* _sortDescriptors;
	unsigned long long _fetchLimit;

}

@property (nonatomic,retain) VSOptional * itemKind;                      //@synthesize itemKind=_itemKind - In the implementation block
@property (nonatomic,copy) NSPredicate * predicate;                      //@synthesize predicate=_predicate - In the implementation block
@property (nonatomic,copy) NSArray * sortDescriptors;                    //@synthesize sortDescriptors=_sortDescriptors - In the implementation block
@property (assign,nonatomic) unsigned long long fetchLimit;              //@synthesize fetchLimit=_fetchLimit - In the implementation block
@property (assign,nonatomic) BOOL includesDataValues;                    //@synthesize includesDataValues=_includesDataValues - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSPredicate *)predicate;
-(NSArray *)sortDescriptors;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(unsigned long long)fetchLimit;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(VSOptional *)itemKind;
-(void)setItemKind:(VSOptional *)arg1 ;
-(void)setIncludesDataValues:(BOOL)arg1 ;
-(BOOL)includesDataValues;
@end

