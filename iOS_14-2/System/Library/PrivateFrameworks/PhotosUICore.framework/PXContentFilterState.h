/*
* Generated on Thursday, January 14, 2021 at 2:22:34 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosUICore.framework/PhotosUICore
*/

#import <PhotosUICore/PhotosUICore-Structs.h>
#import <libobjc.A.dylib/NSCopying.h>
#import <libobjc.A.dylib/PXFilterState.h>

@class NSString, NSArray;

@interface PXContentFilterState : NSObject <NSCopying, PXFilterState> {

	BOOL _favorite;
	BOOL _edited;
	BOOL _image;
	BOOL _video;
	NSArray* _keywords;
	NSArray* _uuids;

}

@property (assign,nonatomic) BOOL favorite;                                                  //@synthesize favorite=_favorite - In the implementation block
@property (assign,nonatomic) BOOL edited;                                                    //@synthesize edited=_edited - In the implementation block
@property (assign,nonatomic) BOOL image;                                                     //@synthesize image=_image - In the implementation block
@property (assign,nonatomic) BOOL video;                                                     //@synthesize video=_video - In the implementation block
@property (nonatomic,copy) NSArray * keywords;                                               //@synthesize keywords=_keywords - In the implementation block
@property (nonatomic,copy) NSArray * uuids;                                                  //@synthesize uuids=_uuids - In the implementation block
@property (nonatomic,readonly) NSString * localizedDescriptionForFilters; 
@property (nonatomic,readonly) NSString * localizedFooterDescriptionForFilters; 
@property (nonatomic,readonly) BOOL hasRules; 
@property (nonatomic,readonly) BOOL isFiltering; 
@property (nonatomic,readonly) NSString * localizedDescription; 
@property (nonatomic,readonly) NSString * localizedFooterDescription; 
-(void)setFavorite:(BOOL)arg1 ;
-(void)setVideo:(BOOL)arg1 ;
-(void)setImage:(BOOL)arg1 ;
-(void)setKeywords:(NSArray *)arg1 ;
-(BOOL)edited;
-(NSArray *)keywords;
-(BOOL)isFilterActive:(long long)arg1 ;
-(BOOL)video;
-(BOOL)image;
-(id)description;
-(NSString *)localizedDescription;
-(NSString *)localizedDescriptionForFilters;
-(NSString *)localizedFooterDescription;
-(id)predicateForUseCase:(unsigned long long)arg1 ;
-(unsigned long long)hash;
-(NSString *)localizedFooterDescriptionForFilters;
-(NSArray *)uuids;
-(BOOL)hasRules;
-(long long)ruleCount;
-(BOOL)favorite;
-(void)setEdited:(BOOL)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isFiltering;
-(BOOL)isEqual:(id)arg1 ;
-(void)setUuids:(NSArray *)arg1 ;
@end

