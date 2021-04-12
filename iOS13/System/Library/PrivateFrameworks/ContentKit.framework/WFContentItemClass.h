/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/


@protocol WFContentItemClass
@optional
+(id)propertyBuilders;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1;
+(id)filterRepresentationsForAllowedContent:(id)arg1;
-(id)generateFileRepresentationsForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3;
-(void)getPreferredFileExtension:(/*^block*/id)arg1;
-(void)getPreferredFileSize:(/*^block*/id)arg1;
-(id)additionalRepresentationsForSerialization;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1;
-(BOOL)includesFileRepresentationInSerializedItem;
-(id)internalRepresentationForCopying;
-(id)preferredFileType;
-(id)preferredObjectType;
-(BOOL)canGenerateRepresentationForType:(id)arg1;
-(BOOL)cachesSupportedTypes;

@required
+(id)typeDescription;
+(id)localizedTypeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)localizedPluralTypeDescription;
+(id)filterDescription;
+(id)localizedFilterDescription;
+(id)pluralFilterDescription;
+(id)localizedPluralFilterDescription;
+(id)defaultSourceForRepresentation:(id)arg1;

@end

