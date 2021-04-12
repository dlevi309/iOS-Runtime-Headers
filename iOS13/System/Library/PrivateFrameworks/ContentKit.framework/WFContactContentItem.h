/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFContact;

@interface WFContactContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFContact * contact; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(BOOL)hasLibrary;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)cachedContactGroups;
-(WFContact *)contact;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListThumbnail:(/*^block*/id)arg1 forSize:(CGSize)arg2 ;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)objectRepresentationsFromLabeledValues:(id)arg1 ;
-(id)unnamedObjectRepresentationsFromLabeledValues:(id)arg1 ;
@end

