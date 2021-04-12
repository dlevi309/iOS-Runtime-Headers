/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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
+(id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 contentSource:(id)arg3 ;
+(id)itemsWithJSONFileRepresentation:(id)arg1 contentSource:(id)arg2 ;
+(id)itemsWithPlistFileRepresentation:(id)arg1 contentSource:(id)arg2 ;
+(id)itemsWithPropertyListObject:(id)arg1 preferredDictionaryType:(id)arg2 topLevelName:(id)arg3 contentSource:(id)arg4 ;
-(NSDictionary *)dictionary;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)preferredFileType;
@end

