/*
* Generated on Thursday, January 14, 2021 at 2:22:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@class NSMutableDictionary;

@interface PXDisplayAssetCountsByPlaybackStyle : NSObject <NSCopying> {

	NSMutableDictionary* _countsByPlaybackStyle;

}

@property (nonatomic,readonly) long long totalCount; 
-(id)init;
-(long long)totalCount;
-(id)initWithAssetFetchResult:(id)arg1 ;
-(id)initWithCountsByPlaybackStyle:(id)arg1 ;
-(long long)countForPlaybackStyle:(long long)arg1 ;
-(void)addPlaybackStyle:(long long)arg1 ;
-(void)setCount:(long long)arg1 forPlaybackStyle:(long long)arg2 ;
-(void)enumerateCountsUsingBlock:(/*^block*/id)arg1 ;
-(unsigned long long)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
@end

