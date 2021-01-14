/*
* Generated on Thursday, January 14, 2021 at 2:21:18 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSMutableDictionary;

@interface MPMediaLibraryEntityTranslator : NSObject {

	NSMutableDictionary* _propertiesToTranslators;
	NSMutableDictionary* _relationshipsToTranslators;
	BOOL _transient;
	Class _MPModelClass;
	EntityClass* _entityClass;
	/*^block*/id _allowedItemPredicatesBlock;
	/*^block*/id _entityQueryBlock;

}

@property (nonatomic,readonly) Class MPModelClass;                             //@synthesize MPModelClass=_MPModelClass - In the implementation block
@property (getter=isTransient,nonatomic,readonly) BOOL transient;              //@synthesize transient=_transient - In the implementation block
@property (nonatomic,readonly) EntityClass* entityClass;                       //@synthesize entityClass=_entityClass - In the implementation block
@property (nonatomic,copy) id allowedItemPredicatesBlock;                      //@synthesize allowedItemPredicatesBlock=_allowedItemPredicatesBlock - In the implementation block
@property (nonatomic,copy) id entityQueryBlock;                                //@synthesize entityQueryBlock=_entityQueryBlock - In the implementation block
+(id)translatorForMPModelClass:(Class)arg1 ;
+(id)translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(EntityClass*)arg2 ;
+(id)_translatorForMPModelClass:(Class)arg1 mlcoreEntityClass:(EntityClass*)arg2 create:(BOOL)arg3 transient:(BOOL)arg4 ;
+(id)translatorForTransientMPModelClass:(Class)arg1 ;
-(map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)_propertyMapForKeyPath:(id)arg1 includePropertiesToSort:(BOOL)arg2 ;
-(void)mapPropertyKey:(id)arg1 toMLProperty:(ModelPropertyBase*)arg2 ;
-(BOOL)isTransient;
-(id)_propertyTranslatorForKeyPath:(id)arg1 ;
-(shared_ptr<mlcore::EntityQuery>*)entityQueryForPropertySet:(id)arg1 sortDescriptors:(id)arg2 context:(id)arg3 view:(id)arg4 ;
-(id)_valueForKeyPath:(id)arg1 forEntity:(shared_ptr<mlcore::Entity>*)arg2 context:(id)arg3 ;
-(shared_ptr<mlcore::PropertiesQuery>*)propertiesQueryForPropertySet:(id)arg1 scopedContainers:(id)arg2 allowedItemIdentifiers:(id)arg3 view:(id)arg4 ;
-(id)objectForPropertySet:(id)arg1 entity:(shared_ptr<mlcore::Entity>*)arg2 context:(id)arg3 ;
-(map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)propertiesToFetchForPropertyKey:(id)arg1 ;
-(void)setEntityQueryBlock:(id)arg1 ;
-(void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)arg2 valueTransformer:(/*^block*/id)arg3 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(BOOL)arg3 usingForeignPropertyBase:(ModelPropertyBase*)arg4 ;
-(vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *> >*)_MLCorePropertiesForPropertySet:(id)arg1 withForeignPropertyBase:(ModelPropertyBase*)arg2 ;
-(EntityClass*)entityClass;
-(id)_objectForPropertySet:(id)arg1 entity:(shared_ptr<mlcore::Entity>*)arg2 baseTranslator:(id)arg3 prependKeyPath:(id)arg4 context:(id)arg5 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 transient:(BOOL)arg3 usingForeignPropertyBase:(ModelPropertyBase*)arg4 relationshipValidationProperties:(const map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)arg5 isValidRelationshipHandler:(/*^block*/id)arg6 ;
-(id)allowedItemPredicatesBlock;
-(void)mapIdentifierMLProperties:(const map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)arg1 identifierCreationBlock:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 withPropertiesToFetch:(const map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)arg2 propertiesToSort:(const map<std::__1::basic_string<char>, mlcore::ModelPropertyBase *, std::__1::less<std::__1::basic_string<char> >, std::__1::allocator<std::__1::pair<const std::__1::basic_string<char>, mlcore::ModelPropertyBase *> > >*)arg3 sortTransformer:(/*^block*/id)arg4 valueTransformer:(/*^block*/id)arg5 ;
-(vector<mlcore::SortDescriptor, std::__1::allocator<mlcore::SortDescriptor> >*)MLCoreSortDescriptorsForModelSortDescriptors:(id)arg1 ;
-(void)setAllowedItemPredicatesBlock:(id)arg1 ;
-(Class)classForRelationshipKey:(id)arg1 ;
-(vector<mlcore::ModelPropertyBase *, std::__1::allocator<mlcore::ModelPropertyBase *> >*)MLCorePropertiesForPropertySet:(id)arg1 ;
-(id)identifiersForEntity:(shared_ptr<mlcore::Entity>*)arg1 context:(id)arg2 ;
-(ModelPropertyBase*)_propertyForKeyPath:(id)arg1 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 usingForeignPropertyBase:(ModelPropertyBase*)arg3 ;
-(Class)MPModelClass;
-(id)entityQueryBlock;
@end

