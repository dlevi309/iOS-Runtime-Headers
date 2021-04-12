/*
* Generated on Monday, March 1, 2021 at 2:35:27 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <VideosUI/VideosUI-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>

@interface VUIMediaEntityType : NSObject <NSCopying> {

	BOOL _rental;
	unsigned long long _subtype;
	unsigned long long _mediaCategoryType;
	unsigned long long _mediaCollectionType;

}

@property (assign,nonatomic) unsigned long long subtype;                          //@synthesize subtype=_subtype - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCategoryType;                //@synthesize mediaCategoryType=_mediaCategoryType - In the implementation block
@property (assign,nonatomic) unsigned long long mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
@property (assign,getter=isRental,nonatomic) BOOL rental;                         //@synthesize rental=_rental - In the implementation block
+(id)show;
+(id)movie;
+(id)season;
+(id)episode;
+(id)movieRental;
+(id)homeVideo;
-(id)init;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(unsigned long long)subtype;
-(void)setSubtype:(unsigned long long)arg1 ;
-(BOOL)isRental;
-(void)setRental:(BOOL)arg1 ;
-(id)stringDescription;
-(unsigned long long)mediaCategoryType;
-(unsigned long long)mediaCollectionType;
-(id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(BOOL)arg2 ;
-(id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
@end

