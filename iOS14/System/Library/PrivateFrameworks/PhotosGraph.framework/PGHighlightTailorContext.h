/*
* Generated on Thursday, January 14, 2021 at 2:25:43 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGHighlightModel;
@class PGGraphHighlightNode, NSSet, NSDictionary, CLSInvestigationPhotoKitFeeder, NSString, NSArray;

@interface PGHighlightTailorContext : NSObject {

	BOOL _babyIsPresent;
	BOOL _petIsPresent;
	id<PGHighlightModel> _highlight;
	PGGraphHighlightNode* _highlightNode;
	NSSet* _meaningLabels;
	NSDictionary* _meaningLabelsByChildHighlightUUID;
	NSSet* _momentNodes;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSString* _keyAssetUUID;
	double _promotionScore;
	unsigned long long numberOfExtendedAssets;
	NSArray* _childHighlights;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) NSSet * meaningLabels;                                           //@synthesize meaningLabels=_meaningLabels - In the implementation block
@property (nonatomic,readonly) id<PGHighlightModel> highlight;                                //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,readonly) PGGraphHighlightNode * highlightNode;                          //@synthesize highlightNode=_highlightNode - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                           //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) NSDictionary * meaningLabelsByChildHighlightUUID;              //@synthesize meaningLabelsByChildHighlightUUID=_meaningLabelsByChildHighlightUUID - In the implementation block
@property (nonatomic,readonly) BOOL babyIsPresent;                                            //@synthesize babyIsPresent=_babyIsPresent - In the implementation block
@property (nonatomic,readonly) BOOL petIsPresent;                                             //@synthesize petIsPresent=_petIsPresent - In the implementation block
@property (nonatomic,readonly) CLSInvestigationPhotoKitFeeder * feeder;                       //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) double promotionScore;                                           //@synthesize promotionScore=_promotionScore - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfExtendedAssets; 
@property (nonatomic,retain) NSArray * childHighlights;                                       //@synthesize childHighlights=_childHighlights - In the implementation block
@property (nonatomic,retain) NSSet * verifiedPersonLocalIdentifiers;                          //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * keyAssetUUID;                                           //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
-(BOOL)babyIsPresent;
-(NSSet *)meaningLabels;
-(BOOL)petIsPresent;
-(PGGraphHighlightNode *)highlightNode;
-(id<PGHighlightModel>)highlight;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(NSSet *)momentNodes;
-(unsigned long long)numberOfExtendedAssets;
-(id)initWithHighlight:(id)arg1 forManager:(id)arg2 ;
-(id)initForTestingWithHighlight:(id)arg1 ;
-(NSArray *)childHighlights;
-(void)setMeaningLabels:(NSSet *)arg1 ;
-(NSDictionary *)meaningLabelsByChildHighlightUUID;
-(void)setNumberOfExtendedAssets:(unsigned long long)arg1 ;
-(void)setChildHighlights:(NSArray *)arg1 ;
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
@end

