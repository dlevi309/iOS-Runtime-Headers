/*
* Generated on Thursday, January 14, 2021 at 2:24:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)setLimit:(unsigned long long)arg1 ;
-(unsigned long long)limit;
-(id)init;
-(id)transformFeedItems:(id)arg1 ;
-(NSOrderedSet *)mandatoryArticleIDs;
-(NSOrderedSet *)personalizedArticleIDs;
-(void)setMandatoryArticleIDs:(NSOrderedSet *)arg1 ;
-(void)setPersonalizedArticleIDs:(NSOrderedSet *)arg1 ;
-(id)initWithMandatoryArticleIDs:(id)arg1 personalizedArticleIDs:(id)arg2 limit:(unsigned long long)arg3 ;
@end

