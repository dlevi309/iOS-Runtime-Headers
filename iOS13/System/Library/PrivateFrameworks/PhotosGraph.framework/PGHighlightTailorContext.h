/*
* Generated on Monday, March 1, 2021 at 2:35:10 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotosGraph.framework/PhotosGraph
*/


@protocol PGHighlightModel;
@class PGGraphHighlightNode, NSSet, CLSInvestigationPhotoKitFeeder, NSString, NSArray;

@interface PGHighlightTailorContext : NSObject {

	BOOL _babyIsPresent;
	BOOL _petIsPresent;
	id<PGHighlightModel> _highlight;
	PGGraphHighlightNode* _highlightNode;
	NSSet* _meaningLabels;
	NSSet* _momentNodes;
	CLSInvestigationPhotoKitFeeder* _feeder;
	NSString* _keyAssetUUID;
	double _promotionScore;
	unsigned long long numberOfExtendedAssets;
	NSArray* _childHighlights;
	NSSet* _verifiedPersonLocalIdentifiers;

}

@property (nonatomic,retain) NSSet * meaningLabels;                                  //@synthesize meaningLabels=_meaningLabels - In the implementation block
@property (nonatomic,readonly) id<PGHighlightModel> highlight;                       //@synthesize highlight=_highlight - In the implementation block
@property (nonatomic,readonly) PGGraphHighlightNode * highlightNode;                 //@synthesize highlightNode=_highlightNode - In the implementation block
@property (nonatomic,readonly) NSSet * momentNodes;                                  //@synthesize momentNodes=_momentNodes - In the implementation block
@property (nonatomic,readonly) BOOL babyIsPresent;                                   //@synthesize babyIsPresent=_babyIsPresent - In the implementation block
@property (nonatomic,readonly) BOOL petIsPresent;                                    //@synthesize petIsPresent=_petIsPresent - In the implementation block
@property (nonatomic,readonly) CLSInvestigationPhotoKitFeeder * feeder;              //@synthesize feeder=_feeder - In the implementation block
@property (assign,nonatomic) double promotionScore;                                  //@synthesize promotionScore=_promotionScore - In the implementation block
@property (assign,nonatomic) unsigned long long numberOfExtendedAssets; 
@property (nonatomic,retain) NSArray * childHighlights;                              //@synthesize childHighlights=_childHighlights - In the implementation block
@property (nonatomic,retain) NSSet * verifiedPersonLocalIdentifiers;                 //@synthesize verifiedPersonLocalIdentifiers=_verifiedPersonLocalIdentifiers - In the implementation block
@property (nonatomic,copy) NSString * keyAssetUUID;                                  //@synthesize keyAssetUUID=_keyAssetUUID - In the implementation block
-(id<PGHighlightModel>)highlight;
-(NSString *)keyAssetUUID;
-(void)setKeyAssetUUID:(NSString *)arg1 ;
-(double)promotionScore;
-(void)setPromotionScore:(double)arg1 ;
-(NSSet *)meaningLabels;
-(CLSInvestigationPhotoKitFeeder *)feeder;
-(void)setVerifiedPersonLocalIdentifiers:(NSSet *)arg1 ;
-(NSSet *)momentNodes;
-(BOOL)babyIsPresent;
-(BOOL)petIsPresent;
-(NSSet *)verifiedPersonLocalIdentifiers;
-(unsigned long long)numberOfExtendedAssets;
-(id)initWithHighlight:(id)arg1 forManager:(id)arg2 ;
-(id)initForTestingWithHighlight:(id)arg1 ;
-(NSArray *)childHighlights;
-(PGGraphHighlightNode *)highlightNode;
-(void)setMeaningLabels:(NSSet *)arg1 ;
-(void)setNumberOfExtendedAssets:(unsigned long long)arg1 ;
-(void)setChildHighlights:(NSArray *)arg1 ;
@end

