/*
* Generated on Thursday, January 14, 2021 at 2:22:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/Photos.framework/Photos
*/

#import <Photos/PHAssetPropertySet.h>

@interface PHAssetPhotoCommentProperties : PHAssetPropertySet {

	BOOL _hasUserLiked;
	unsigned long long _commentCount;
	unsigned long long _likeCount;

}

@property (nonatomic,readonly) unsigned long long commentCount;              //@synthesize commentCount=_commentCount - In the implementation block
@property (nonatomic,readonly) unsigned long long likeCount;                 //@synthesize likeCount=_likeCount - In the implementation block
@property (nonatomic,readonly) BOOL hasUserLiked;                            //@synthesize hasUserLiked=_hasUserLiked - In the implementation block
+(BOOL)isToMany;
+(id)entityName;
+(id)keyPathFromPrimaryObject;
+(id)propertySetName;
+(id)propertiesToFetch;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(unsigned long long)likeCount;
-(unsigned long long)commentCount;
-(BOOL)hasUserLiked;
@end

