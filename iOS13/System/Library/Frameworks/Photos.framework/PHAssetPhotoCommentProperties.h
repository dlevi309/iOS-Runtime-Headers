/*
* Generated on Monday, March 1, 2021 at 2:30:59 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)propertiesToFetch;
+(id)entityName;
+(BOOL)isToMany;
+(id)propertySetName;
+(id)keyPathFromPrimaryObject;
+(id)keyPathToPrimaryObject;
-(id)initWithFetchDictionary:(id)arg1 asset:(id)arg2 prefetched:(BOOL)arg3 ;
-(unsigned long long)commentCount;
-(unsigned long long)likeCount;
-(BOOL)hasUserLiked;
@end

