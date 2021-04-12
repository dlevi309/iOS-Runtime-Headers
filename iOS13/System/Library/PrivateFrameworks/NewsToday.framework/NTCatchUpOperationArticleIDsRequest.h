/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <NewsToday/NewsToday-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@protocol NSCopyingNSSecureCoding;
@class NSObject, NSOrderedSet, NSDictionary;

@interface NTCatchUpOperationArticleIDsRequest : NSObject <NSCopying> {

	NSObject*<NSCopying>*<NSSecureCoding> _identifier;
	NSOrderedSet* _articleIDs;
	NSDictionary* _overrideHeadlineMetadataByArticleID;

}

@property (nonatomic,copy) NSObject*<NSCopying>*<NSSecureCoding> identifier;                //@synthesize identifier=_identifier - In the implementation block
@property (nonatomic,copy) NSOrderedSet * articleIDs;                                       //@synthesize articleIDs=_articleIDs - In the implementation block
@property (nonatomic,copy) NSDictionary * overrideHeadlineMetadataByArticleID;              //@synthesize overrideHeadlineMetadataByArticleID=_overrideHeadlineMetadataByArticleID - In the implementation block
-(id)init;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSObject*<NSCopying>*<NSSecureCoding>)identifier;
-(void)setIdentifier:(NSObject*<NSCopying>*<NSSecureCoding>)arg1 ;
-(void)setArticleIDs:(NSOrderedSet *)arg1 ;
-(NSOrderedSet *)articleIDs;
-(id)initWithArticleIDs:(id)arg1 overrideHeadlineMetadataByArticleID:(id)arg2 ;
-(NSDictionary *)overrideHeadlineMetadataByArticleID;
-(void)setOverrideHeadlineMetadataByArticleID:(NSDictionary *)arg1 ;
@end

