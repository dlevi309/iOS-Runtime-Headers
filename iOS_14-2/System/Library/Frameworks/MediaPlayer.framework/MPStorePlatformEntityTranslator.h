/*
* Generated on Thursday, January 14, 2021 at 2:21:17 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPStorePlatformEntityTranslator : MPBaseEntityTranslator
+(id)translatorForKind:(id)arg1 ;
+(void)buildSchemaIfNeeded;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 payloadTransform:(/*^block*/id)arg3 ;
-(id)prepareSource:(id)arg1 context:(id)arg2 properties:(id)arg3 ;
-(id)identifiersForPayload:(id)arg1 context:(id)arg2 ;
-(void)mapIdentifierCreationKeyPaths:(id)arg1 transformBlock:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPath:(id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformer:(/*^block*/id)arg3 ;
-(void)mapPropertyKey:(id)arg1 toPayloadKeyPaths:(id)arg2 valueTransformerFunction:(/*function pointer*/void*)arg3 ;
-(id)objectForPropertySet:(id)arg1 payload:(id)arg2 context:(id)arg3 ;
@end

