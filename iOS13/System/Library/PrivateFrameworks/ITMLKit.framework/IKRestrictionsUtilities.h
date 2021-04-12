/*
* Generated on Monday, March 1, 2021 at 2:31:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ITMLKit.framework/ITMLKit
*/

#import <libobjc.A.dylib/NSCacheDelegate.h>

@class NSString;

@interface IKRestrictionsUtilities : NSObject <NSCacheDelegate>

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)ratingForRestrictionRanking:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3 ;
+(id)_ratingDictionaryForDomain:(id)arg1 countryCode:(id)arg2 ;
+(id)_purgableRatingsDictionary;
+(id)orderedRankingsInDomain:(id)arg1 countryCode:(id)arg2 ;
+(id)rankingForRestrictionRating:(id)arg1 inDomain:(id)arg2 countryCode:(id)arg3 ;
-(void)cache:(id)arg1 willEvictObject:(id)arg2 ;
@end

