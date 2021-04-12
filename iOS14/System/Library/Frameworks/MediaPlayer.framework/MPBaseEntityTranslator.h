/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/


#import <MediaPlayer/MediaPlayer-Structs.h>
@class NSMutableDictionary, NSMutableSet;

@interface MPBaseEntityTranslator : NSObject {

	NSMutableDictionary* _propertiesToTranslators;
	NSMutableDictionary* _relationshipsToTranslators;
	/*^block*/id _sourcePreprocessorBlock;
	NSMutableSet* _unsupportedKeys;
	SCD_Struct_MP50 _optionalHooks;
	Class _MPModelClass;

}

@property (nonatomic,readonly) Class MPModelClass;              //@synthesize MPModelClass=_MPModelClass - In the implementation block
+(id)translatorForMPModelClass:(Class)arg1 ;
+(void)buildSchemaIfNeeded;
+(id)createTranslatorForMPModelClass:(Class)arg1 ;
-(id)description;
-(Class)classForRelationshipKey:(id)arg1 ;
-(id)initWithMPModelClass:(Class)arg1 ;
-(id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3 ;
-(void)setSourcePreprocessorBlock:(/*^block*/id)arg1 ;
-(void)mapUnsupportedPropertyKey:(id)arg1 ;
-(void)mapUnsupportedRelationshipKey:(id)arg1 ;
-(id)_objectForPropertySet:(id)arg1 source:(id)arg2 context:(id)arg3 ;
-(id)_objectForRelationshipKey:(id)arg1 propertySet:(id)arg2 source:(id)arg3 context:(id)arg4 ;
-(id)_valueForPropertyKey:(id)arg1 source:(id)arg2 context:(id)arg3 ;
-(Class)MPModelClass;
@end

