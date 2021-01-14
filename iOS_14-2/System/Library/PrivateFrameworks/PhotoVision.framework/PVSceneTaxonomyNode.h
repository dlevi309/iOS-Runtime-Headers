/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@class PVSceneTaxonomy, NSString, NSMutableSet, NSSet;

@interface PVSceneTaxonomyNode : NSObject {

	BOOL _indexed;
	unsigned _sceneClassId;
	PVSceneTaxonomy* _taxonomy;
	NSString* _name;
	double _threshold;
	double _highRecallThreshold;
	double _highPrecisionThreshold;
	NSMutableSet* _parentNodes;
	NSMutableSet* _childNodes;
	NSMutableSet* _detectorNodes;

}

@property (retain) NSMutableSet * parentNodes;                        //@synthesize parentNodes=_parentNodes - In the implementation block
@property (retain) NSMutableSet * childNodes;                         //@synthesize childNodes=_childNodes - In the implementation block
@property (retain) NSMutableSet * detectorNodes;                      //@synthesize detectorNodes=_detectorNodes - In the implementation block
@property (readonly) PVSceneTaxonomy * taxonomy;                      //@synthesize taxonomy=_taxonomy - In the implementation block
@property (readonly) unsigned sceneClassId;                           //@synthesize sceneClassId=_sceneClassId - In the implementation block
@property (copy,readonly) NSString * name;                            //@synthesize name=_name - In the implementation block
@property (getter=isIndexed,readonly) BOOL indexed;                   //@synthesize indexed=_indexed - In the implementation block
@property (readonly) double threshold;                                //@synthesize threshold=_threshold - In the implementation block
@property (readonly) double highRecallThreshold;                      //@synthesize highRecallThreshold=_highRecallThreshold - In the implementation block
@property (readonly) double highPrecisionThreshold;                   //@synthesize highPrecisionThreshold=_highPrecisionThreshold - In the implementation block
@property (readonly) double graphHighPrecisionThreshold; 
@property (readonly) double graphHighRecallThreshold; 
@property (copy,readonly) NSSet * parents; 
@property (copy,readonly) NSSet * children; 
@property (copy,readonly) NSSet * detectors; 
@property (getter=isRoot,readonly) BOOL root; 
+(id)localizedStringForKey:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(NSSet *)children;
-(NSSet *)parents;
-(double)threshold;
-(void)setChildNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)detectorNodes;
-(BOOL)isRoot;
-(BOOL)isIndexed;
-(id)localizedLabel;
-(void)setDetectorNodes:(NSMutableSet *)arg1 ;
-(id)initWithSceneClassId:(unsigned)arg1 name:(id)arg2 indexed:(BOOL)arg3 threshold:(double)arg4 highRecallThreshold:(double)arg5 highPrecisionThreshold:(double)arg6 taxonomy:(id)arg7 ;
-(id)localizedSynonyms;
-(void)addDetectorNode:(id)arg1 ;
-(double)graphHighRecallThreshold;
-(NSMutableSet *)parentNodes;
-(void)recursivelyReleaseParents;
-(NSString *)name;
-(id)description;
-(PVSceneTaxonomy *)taxonomy;
-(unsigned)sceneClassId;
-(NSSet *)detectors;
-(double)highPrecisionThreshold;
-(double)graphHighPrecisionThreshold;
-(unsigned long long)hash;
-(void)traverse:(long long)arg1 visitor:(/*^block*/id)arg2 ;
-(void)setParentNodes:(NSMutableSet *)arg1 ;
-(NSMutableSet *)childNodes;
-(BOOL)isEqualToNode:(id)arg1 ;
-(void)addChildNode:(id)arg1 ;
-(double)highRecallThreshold;
-(BOOL)isEqual:(id)arg1 ;
@end

