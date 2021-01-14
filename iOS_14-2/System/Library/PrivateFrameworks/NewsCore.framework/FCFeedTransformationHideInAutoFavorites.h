/*
* Generated on Thursday, January 14, 2021 at 2:21:51 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/NewsCore.framework/NewsCore
*/

#import <libobjc.A.dylib/FCFeedTransforming.h>

@class NSDictionary, NSSet, NSString;

@interface FCFeedTransformationHideInAutoFavorites : NSObject <FCFeedTransforming> {

	NSDictionary* _feedContextByFeedID;
	NSSet* _autoFavoriteTagIDs;

}

@property (nonatomic,copy) NSDictionary * feedContextByFeedID;              //@synthesize feedContextByFeedID=_feedContextByFeedID - In the implementation block
@property (nonatomic,copy) NSSet * autoFavoriteTagIDs;                      //@synthesize autoFavoriteTagIDs=_autoFavoriteTagIDs - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)transformationWithFeedContextByFeedID:(id)arg1 autoFavoriteTagIDs:(id)arg2 ;
-(void)setFeedContextByFeedID:(NSDictionary *)arg1 ;
-(void)setAutoFavoriteTagIDs:(NSSet *)arg1 ;
-(NSSet *)autoFavoriteTagIDs;
-(NSDictionary *)feedContextByFeedID;
-(id)transformFeedItems:(id)arg1 ;
@end

