/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class AVAsset;

@interface WFAVAssetContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) AVAsset * asset; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(id)duration;
-(AVAsset *)asset;
-(id)supportedTypes;
-(id)frameRate;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)preferredFileType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)generateExportSessionForType:(id)arg1 ;
-(id)metadataItemForCommonKey:(id)arg1 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 forType:(id)arg2 metadata:(id)arg3 options:(id)arg4 ;
@end

