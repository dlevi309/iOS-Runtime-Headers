/*
* Generated on Thursday, January 14, 2021 at 2:27:04 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(unsigned long long)fetchLimit;
-(NSPredicate *)predicate;
-(id)init;
-(VSOptional *)itemKind;
-(void)setPredicate:(NSPredicate *)arg1 ;
-(NSArray *)sortDescriptors;
-(void)setFetchLimit:(unsigned long long)arg1 ;
-(void)setSortDescriptors:(NSArray *)arg1 ;
-(void)setItemKind:(VSOptional *)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setIncludesDataValues:(BOOL)arg1 ;
-(BOOL)includesDataValues;
@end

