/*
* Generated on Thursday, January 14, 2021 at 2:24:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
+(id)movie;
+(id)season;
+(id)show;
+(id)episode;
+(id)movieRental;
+(id)homeVideo;
-(unsigned long long)subtype;
-(id)init;
-(BOOL)isRental;
-(void)setRental:(BOOL)arg1 ;
-(id)description;
-(unsigned long long)hash;
-(id)stringDescription;
-(void)setSubtype:(unsigned long long)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)mediaCategoryType;
-(id)_initWithMediaItemCategoryType:(unsigned long long)arg1 isRental:(BOOL)arg2 ;
-(id)_initWithMediaCollectionType:(unsigned long long)arg1 mediaCategoryType:(unsigned long long)arg2 ;
-(unsigned long long)mediaCollectionType;
-(void)setMediaCategoryType:(unsigned long long)arg1 ;
-(void)setMediaCollectionType:(unsigned long long)arg1 ;
@end

