/*
* Generated on Thursday, January 14, 2021 at 2:28:11 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(NSString *)tableName;
-(void)setGraphURL:(NSURL *)arg1 ;
-(id)init;
-(id)nodeForName:(id)arg1 ;
-(NSString *)sha256Hash;
-(PVSceneTaxonomyNode *)rootNode;
-(id)nodeForSceneClassId:(unsigned)arg1 ;
-(id)description;
-(NSURL *)graphURL;
-(void)setTableName:(NSString *)arg1 ;
-(void)dealloc;
-(NSBundle *)localizationBundle;
-(void)setLocalizationBundle:(NSBundle *)arg1 ;
-(NSMapTable *)nameIndex;
-(id)initWithGraphURL:(id)arg1 localizationBundle:(id)arg2 tableName:(id)arg3 ;
-(void)putNodeInIndex:(id)arg1 ;
-(id)buildNodesFromGraphURL:(id)arg1 sha256Hash:(id*)arg2 ;
-(NSMapTable *)sceneClassIndex;
-(void)setSceneClassIndex:(NSMapTable *)arg1 ;
-(void)setNameIndex:(NSMapTable *)arg1 ;
@end

