/*
* Generated on Thursday, January 14, 2021 at 2:25:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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

