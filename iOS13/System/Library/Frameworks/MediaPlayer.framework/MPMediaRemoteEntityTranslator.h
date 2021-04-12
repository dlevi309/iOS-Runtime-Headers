/*
* Generated on Monday, March 1, 2021 at 2:31:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


@class NSMutableDictionary;

@interface MPMediaRemoteEntityTranslator : NSObject {

	NSMutableDictionary* _propertiesToTranslators;
	NSMutableDictionary* _relationshipsToTranslators;
	Class _MPModelClass;

}

@property (nonatomic,readonly) Class MPModelClass;              //@synthesize MPModelClass=_MPModelClass - In the implementation block
+(id)translatorForMPModelClass:(Class)arg1 ;
+(id)_translatorForMPModelClass:(Class)arg1 create:(BOOL)arg2 ;
+(id)_translatorForMPModelClass:(Class)arg1 ;
-(id)_propertyTranslatorForKeyPath:(id)arg1 ;
-(Class)MPModelClass;
-(void)mapIdentifierCreationBlock:(/*^block*/id)arg1 ;
-(void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2 ;
-(void)mapPropertyKey:(id)arg1 toArtworkValueTransformer:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toValueTransformer:(/*^block*/id)arg2 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 ;
-(id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3 ;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3 ;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 artworkGenerator:(id)arg3 baseTranslator:(id)arg4 prependKeyPath:(id)arg5 ;
-(id)identifiersForContentItem:(id)arg1 ;
-(id)_sectionGenericObjectPropertySetForContentItem:(id)arg1 propertySet:(id)arg2 ;
-(id)_valueForKeyPath:(id)arg1 forContentItem:(id)arg2 artworkGenerator:(id)arg3 ;
@end

