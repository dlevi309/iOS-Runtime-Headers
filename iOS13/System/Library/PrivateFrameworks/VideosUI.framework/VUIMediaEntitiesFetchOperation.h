/*
* Generated on Monday, March 1, 2021 at 2:35:28 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
*/

#import <Foundation/NSOperation.h>

@class NSArray, NSString, IKAppContext, NSDictionary;

@interface VUIMediaEntitiesFetchOperation : NSOperation {

	NSArray* _mediaEntities;
	NSString* _mediaCategory;
	NSString* _mediaCollectionType;
	IKAppContext* _appContext;
	NSString* _mediaEntitySubtype;
	NSDictionary* _options;

}

@property (nonatomic,retain) IKAppContext * appContext;                   //@synthesize appContext=_appContext - In the implementation block
@property (nonatomic,retain) NSString * mediaEntitySubtype;               //@synthesize mediaEntitySubtype=_mediaEntitySubtype - In the implementation block
@property (nonatomic,copy) NSDictionary * options;                        //@synthesize options=_options - In the implementation block
@property (nonatomic,copy) NSArray * mediaEntities;                       //@synthesize mediaEntities=_mediaEntities - In the implementation block
@property (nonatomic,retain) NSString * mediaCategory;                    //@synthesize mediaCategory=_mediaCategory - In the implementation block
@property (nonatomic,retain) NSString * mediaCollectionType;              //@synthesize mediaCollectionType=_mediaCollectionType - In the implementation block
+(id)_numberForObject:(id)arg1 ;
+(id)_timeIntervalNumberForObject:(id)arg1 ;
+(id)_mpPropertiesForProperties:(id)arg1 ;
+(id)_mpOrderingDirectionMappingForSortDirectionMapping:(id)arg1 ;
-(id)init;
-(NSDictionary *)options;
-(void)main;
-(void)setOptions:(NSDictionary *)arg1 ;
-(BOOL)_prepare;
-(id)_mediaQuery;
-(IKAppContext *)appContext;
-(void)setAppContext:(IKAppContext *)arg1 ;
-(NSString *)mediaCategory;
-(void)setMediaCategory:(NSString *)arg1 ;
-(NSArray *)mediaEntities;
-(void)setMediaEntities:(NSArray *)arg1 ;
-(BOOL)_isItemsFetch;
-(BOOL)_isCollectionsFetch;
-(void)setMediaEntitySubtype:(NSString *)arg1 ;
-(id)initWithAppContext:(id)arg1 options:(id)arg2 ;
-(NSString *)mediaCollectionType;
-(void)setMediaCollectionType:(NSString *)arg1 ;
-(id)_baseMediaQuery;
-(NSString *)mediaEntitySubtype;
-(void)_addPredicatesToMediaQuery:(id)arg1 withFilters:(id)arg2 ;
-(void)_setSortOrderingForMediaQuery:(id)arg1 withSortProperties:(id)arg2 sortDirectionMapping:(id)arg3 ;
-(void)_addPrefetchPropertiesToMediaQuery:(id)arg1 prefetchProperties:(id)arg2 ;
@end

