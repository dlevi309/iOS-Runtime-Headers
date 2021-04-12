/*
* Generated on Monday, March 1, 2021 at 2:33:14 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/NewsToday.framework/NewsToday
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSOrderedSet, NSString;

@interface NTPersonalizedSectionLimitTransformation : NSObject <FCFeedTransforming> {

	NSOrderedSet* _mandatoryArticleIDs;
	NSOrderedSet* _personalizedArticleIDs;
	unsigned long long _limit;

}

@property (nonatomic,copy) NSOrderedSet * mandatoryArticleIDs;                 //@synthesize mandatoryArticleIDs=_mandatoryArticleIDs - In the implementation block
@property (nonatomic,copy) NSOrderedSet * personalizedArticleIDs;              //@synthesize personalizedArticleIDs=_personalizedArticleIDs - In the implementation block
@property (assign,nonatomic) unsigned long long limit;                         //@synthesize limit=_limit - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)init;
-(unsigned long long)limit;
-(void)setLimit:(unsigned long long)arg1 ;
-(id)transformFeedItems:(id)arg1 ;
-(NSOrderedSet *)mandatoryArticleIDs;
-(NSOrderedSet *)personalizedArticleIDs;
-(void)setMandatoryArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setPersonalizedArticleIDs:(NSOrderedSet *)arg1 ;
-(id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 limit:(unsigned long long)arg3 ;
@end

