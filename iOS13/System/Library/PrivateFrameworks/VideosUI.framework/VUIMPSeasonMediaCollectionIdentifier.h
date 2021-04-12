/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <VideosUI/VUIMPMediaEntityIdentifier.h>

@class NSNumber;

@interface VUIMPSeasonMediaCollectionIdentifier : VUIMPMediaEntityIdentifier {

	NSNumber* _seasonNumber;

}

@property (nonatomic,copy) NSNumber * seasonNumber;              //@synthesize seasonNumber=_seasonNumber - In the implementation block
+(id)requiredMPPropertyNames;
+(id)seasonIdentifierWithMediaItem:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSNumber *)seasonNumber;
-(void)setSeasonNumber:(NSNumber *)arg1 ;
-(id)initWithPersistentID:(id)arg1 mediaEntityType:(id)arg2 ;
-(id)initWithPersistentID:(id)arg1 seasonNumber:(id)arg2 ;
@end

