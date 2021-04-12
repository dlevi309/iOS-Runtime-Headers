/*
* Generated on Monday, March 1, 2021 at 2:35:11 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGHighlightModel;
@class NSString, PHAsset, NSArray, NSDictionary, NSMapTable;

@interface PGHighlightEnrichmentValues : NSObject {

	BOOL _clearCurations;
	unsigned short _enrichmentState;
	id<PGHighlightModel> _highlight;
	double _promotionScore;
	NSString* _smartDescription;
	NSString* _dateDescription;
	NSString* _verboseSmartDescription;
	PHAsset* _keyAsset;
	NSArray* _extendedCuration;
	NSDictionary* _curatedAssetsByCurationType;
	NSDictionary* _momentTitleByMomentUUID;
	unsigned long long _mood;
	NSMapTable* _visibilityScoreByAsset;

}

@property (readonly) id<PGHighlightModel> highlight;                                  //@synthesize highlight=_highlight - In the implementation block
@property (assign,nonatomic) BOOL clearCurations;                                     //@synthesize clearCurations=_clearCurations - In the implementation block
@property (assign,nonatomic) double promotionScore;                                   //@synthesize promotionScore=_promotionScore - In the implementation block
@property (nonatomic,copy) NSString * smartDescription;                               //@synthesize smartDescription=_smartDescription - In the implementation block
@property (nonatomic,copy) NSString * dateDescription;                                //@synthesize dateDescription=_dateDescription - In the implementation block
@property (nonatomic,copy) NSString * verboseSmartDescription;                        //@synthesize verboseSmartDescription=_verboseSmartDescription - In the implementation block
@property (nonatomic,retain) PHAsset * keyAsset;                                      //@synthesize keyAsset=_keyAsset - In the implementation block
@property (nonatomic,retain) NSArray * extendedCuration;                              //@synthesize extendedCuration=_extendedCuration - In the implementation block
@property (nonatomic,retain) NSDictionary * curatedAssetsByCurationType;              //@synthesize curatedAssetsByCurationType=_curatedAssetsByCurationType - In the implementation block
@property (nonatomic,retain) NSDictionary * momentTitleByMomentUUID;                  //@synthesize momentTitleByMomentUUID=_momentTitleByMomentUUID - In the implementation block
@property (assign,nonatomic) unsigned long long mood;                                 //@synthesize mood=_mood - In the implementation block
@property (nonatomic,retain) NSMapTable * visibilityScoreByAsset;                     //@synthesize visibilityScoreByAsset=_visibilityScoreByAsset - In the implementation block
@property (assign,nonatomic) unsigned short enrichmentState;                          //@synthesize enrichmentState=_enrichmentState - In the implementation block
@property (readonly) BOOL hasChanges; 
-(BOOL)hasChanges;
-(id<PGHighlightModel>)highlight;
-(PHAsset *)keyAsset;
-(void)setKeyAsset:(PHAsset *)arg1 ;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(unsigned short)enrichmentState;
-(void)setEnrichmentState:(unsigned short)arg1 ;
-(unsigned long long)mood;
-(NSString *)verboseSmartDescription;
-(NSString *)dateDescription;
-(void)setDateDescription:(NSString *)arg1 ;
-(NSString *)smartDescription;
-(void)setSmartDescription:(NSString *)arg1 ;
-(void)setVerboseSmartDescription:(NSString *)arg1 ;
-(void)setMood:(unsigned long long)arg1 ;
-(id)initWithHighlight:(id)arg1 ;
-(BOOL)clearCurations;
-(void)setClearCurations:(BOOL)arg1 ;
-(NSArray *)extendedCuration;
-(void)setExtendedCuration:(NSArray *)arg1 ;
-(NSDictionary *)curatedAssetsByCurationType;
-(void)setCuratedAssetsByCurationType:(NSDictionary *)arg1 ;
-(NSDictionary *)momentTitleByMomentUUID;
-(void)setMomentTitleByMomentUUID:(NSDictionary *)arg1 ;
-(NSMapTable *)visibilityScoreByAsset;
-(void)setVisibilityScoreByAsset:(NSMapTable *)arg1 ;
@end

