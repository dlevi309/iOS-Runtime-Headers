/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <NewsCore/FCFeedGroupEmittingCursor.h>

@class NSArray;

@interface FCTopStoriesFeedGroupCursor : FCFeedGroupEmittingCursor {

	NSArray* _articleIDs;

}

@property (nonatomic,copy) NSArray * articleIDs;              //@synthesize articleIDs=_articleIDs - In the implementation block
+(BOOL)supportsSecureCoding;
-(void)setArticleIDs:(NSArray *)arg1 ;
-(NSArray *)articleIDs;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
@end

