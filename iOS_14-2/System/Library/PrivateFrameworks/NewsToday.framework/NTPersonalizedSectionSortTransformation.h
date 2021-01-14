/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@protocol FCFeedTransforming;
@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionSortTransformation : NSObject <FCFeedTransforming> {

	NSOrderedSet* _mandatoryArticleIDs;
	NSOrderedSet* _personalizedArticleIDs;
	id<FCFeedTransforming> _sortTransformation;

}

@property (nonatomic,copy) NSOrderedSet * mandatoryArticleIDs;                       //@synthesize mandatoryArticleIDs=_mandatoryArticleIDs - In the implementation block
@property (nonatomic,copy) NSOrderedSet * personalizedArticleIDs;                    //@synthesize personalizedArticleIDs=_personalizedArticleIDs - In the implementation block
@property (nonatomic,retain) id<FCFeedTransforming> sortTransformation;              //@synthesize sortTransformation=_sortTransformation - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSOrderedSet *)mandatoryArticleIDs;
-(NSOrderedSet *)personalizedArticleIDs;
-(id<FCFeedTransforming>)sortTransformation;
-(id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 sortTransformation:(id)arg3 ;
-(void)setMandatoryArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setPersonalizedArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setSortTransformation:(id<FCFeedTransforming>)arg1 ;
@end

