/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSDictionary;

@interface WFDictionaryContentItem : WFGenericFileContentItem <WFContentItemClass>

@property (nonatomic,readonly) NSDictionary * dictionary; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 attributionSet:(id)arg3 ;
+(id)itemsWithJSONFileRepresentation:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemsWithPlistFileRepresentation:(id)arg1 attributionSet:(id)arg2 ;
+(id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 attributionSet:(id)arg4 ;
-(NSDictionary *)dictionary;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)preferredFileType;
-(id)allowedClassesForDecodingInternalRepresentations;
@end

