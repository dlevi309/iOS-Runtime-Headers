/*
* Generated on Monday, March 1, 2021 at 2:33:47 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/AppPredictionInternal.framework/AppPredictionInternal
*/


@class NSMutableArray, NSMutableDictionary;

@interface ATXUpcomingMediaContainer : NSObject {

	NSMutableArray* _maybeSortedUpcomingMedia;
	BOOL _sorted;
	BOOL _preferUpcomingMediaForPredictions;
	BOOL _preferenceForUpcomingMediaIsSet;
	BOOL _isInternalApplication;
	NSMutableDictionary* _itemExpiredUpcomingMedia;
	NSMutableDictionary* _itemValidUpcomingMedia;
	NSMutableDictionary* _containerExpiredUpcomingMedia;
	NSMutableDictionary* _containerValidUpcomingMedia;
	NSMutableDictionary* _bucketExpiredUpcomingMedia;
	NSMutableDictionary* _bucketValidUpcomingMedia;

}

@property (nonatomic,readonly) NSMutableDictionary * itemExpiredUpcomingMedia;                   //@synthesize itemExpiredUpcomingMedia=_itemExpiredUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * itemValidUpcomingMedia;                     //@synthesize itemValidUpcomingMedia=_itemValidUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * containerExpiredUpcomingMedia;              //@synthesize containerExpiredUpcomingMedia=_containerExpiredUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * containerValidUpcomingMedia;                //@synthesize containerValidUpcomingMedia=_containerValidUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bucketExpiredUpcomingMedia;                 //@synthesize bucketExpiredUpcomingMedia=_bucketExpiredUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableDictionary * bucketValidUpcomingMedia;                   //@synthesize bucketValidUpcomingMedia=_bucketValidUpcomingMedia - In the implementation block
@property (nonatomic,readonly) NSMutableArray * sortedUpcomingMedia; 
@property (assign,nonatomic) BOOL preferUpcomingMediaForPredictions;                             //@synthesize preferUpcomingMediaForPredictions=_preferUpcomingMediaForPredictions - In the implementation block
@property (assign,nonatomic) BOOL preferenceForUpcomingMediaIsSet;                               //@synthesize preferenceForUpcomingMediaIsSet=_preferenceForUpcomingMediaIsSet - In the implementation block
@property (assign,nonatomic) BOOL isInternalApplication;                                         //@synthesize isInternalApplication=_isInternalApplication - In the implementation block
+(void)addToDictionary:(id)arg1 key:(id)arg2 value:(id)arg3 ;
-(id)init;
-(NSMutableArray *)sortedUpcomingMedia;
-(void)addUpcomingMediaIntent:(id)arg1 withRank:(id)arg2 ;
-(BOOL)appSupportsUpcomingMedia;
-(NSMutableDictionary *)itemExpiredUpcomingMedia;
-(NSMutableDictionary *)itemValidUpcomingMedia;
-(NSMutableDictionary *)containerExpiredUpcomingMedia;
-(NSMutableDictionary *)containerValidUpcomingMedia;
-(NSMutableDictionary *)bucketExpiredUpcomingMedia;
-(NSMutableDictionary *)bucketValidUpcomingMedia;
-(BOOL)preferUpcomingMediaForPredictions;
-(void)setPreferUpcomingMediaForPredictions:(BOOL)arg1 ;
-(BOOL)preferenceForUpcomingMediaIsSet;
-(void)setPreferenceForUpcomingMediaIsSet:(BOOL)arg1 ;
-(BOOL)isInternalApplication;
-(void)setIsInternalApplication:(BOOL)arg1 ;
@end

