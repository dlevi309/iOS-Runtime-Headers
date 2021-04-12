/*
* Generated on Monday, March 1, 2021 at 2:34:24 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/PhotoVision.framework/PhotoVision
*/


@class PVSceneTaxonomyNode, NSString, NSURL, NSBundle, NSMapTable;

@interface PVSceneTaxonomy : NSObject {

	PVSceneTaxonomyNode* _rootNode;
	NSString* _sha256Hash;
	NSURL* _graphURL;
	NSBundle* _localizationBundle;
	NSString* _tableName;
	NSMapTable* _sceneClassIndex;
	NSMapTable* _nameIndex;

}

@property (copy) NSURL * graphURL;                                //@synthesize graphURL=_graphURL - In the implementation block
@property (retain) NSBundle * localizationBundle;                 //@synthesize localizationBundle=_localizationBundle - In the implementation block
@property (copy) NSString * tableName;                            //@synthesize tableName=_tableName - In the implementation block
@property (retain) NSMapTable * sceneClassIndex;                  //@synthesize sceneClassIndex=_sceneClassIndex - In the implementation block
@property (retain) NSMapTable * nameIndex;                        //@synthesize nameIndex=_nameIndex - In the implementation block
@property (readonly) PVSceneTaxonomyNode * rootNode;              //@synthesize rootNode=_rootNode - In the implementation block
@property (copy,readonly) NSString * sha256Hash;                  //@synthesize sha256Hash=_sha256Hash - In the implementation block
+(id)sharedTaxonomy;
-(id)init;
-(void)dealloc;
-(id)description;
-(PVSceneTaxonomyNode *)rootNode;
-(NSString *)tableName;
-(void)setTableName:(NSString *)arg1 ;
-(NSString *)sha256Hash;
-(id)nodeForSceneClassId:(unsigned)arg1 ;
-(id)nodeForName:(id)arg1 ;
-(NSURL *)graphURL;
-(void)setGraphURL:(NSURL *)arg1 ;
-(NSBundle *)localizationBundle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
-(id)initWithGraphURL:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(void)putNodeInIndex:(id)arg1 ;
-(id)buildNodesFromGraphURL:(id)arg1 sha256Hash:(id*)arg2 ;
-(NSMapTable *)sceneClassIndex;
-(void)setSceneClassIndex:(NSMapTable *)arg1 ;
-(NSMapTable *)nameIndex;
-(void)setNameIndex:(NSMapTable *)arg1 ;
@end

