/*
* Generated on Thursday, January 14, 2021 at 2:21:15 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/MediaPlayer.framework/MediaPlayer
*/

#import <MediaPlayer/MPBaseEntityTranslator.h>

@interface MPMediaRemoteEntityTranslator : MPBaseEntityTranslator
+(void)buildSchemaIfNeeded;
-(void)mapIdentifierCreationBlock:(/*^block*/id)arg1 ;
-(id)identifiersForContentItem:(id)arg1 ;
-(void)mapArtworkPropertyKey:(id)arg1 ;
-(void)mapPropertyKey:(id)arg1 toDeviceSpecificUserInfoKey:(id)arg2 ;
-(id)objectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3 ;
-(void)mapPropertyKey:(id)arg1 toValueTransformer:(/*^block*/id)arg2 ;
-(void)mapPropertyKey:(id)arg1 toUserInfoKey:(id)arg2 ;
-(void)mapRelationshipKey:(id)arg1 toModelClass:(Class)arg2 ;
-(void)mapPropertyKey:(id)arg1 toMPContentItemSelector:(SEL)arg2 ;
-(id)sectionObjectForPropertySet:(id)arg1 contentItem:(id)arg2 context:(id)arg3 ;
@end

