/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class NSURL;

@interface WFURLContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) NSURL * URL; 
+(id)allURLCoercionsInWorkflowKit;
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)ownedPasteboardTypes;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 contentSource:(id)arg4 ;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterRepresentationsForAllowedContent:(id)arg1 ;
+(id)contentSourceContentOfURL:(id)arg1 ;
+(void)rediscoverURLCoercionClassesIfNeeded;
+(id)URLCoercions;
+(id)mutableURLCoercions;
+(void)registerURLCoercion:(Class)arg1 ;
-(id)description;
-(NSURL *)URL;
-(id)outputTypes;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getPreferredFileExtension:(/*^block*/id)arg1 ;
-(void)getPreferredFileSize:(/*^block*/id)arg1 ;
-(id)additionalRepresentationsForSerialization;
-(BOOL)includesFileRepresentationInSerializedItem;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)intermediaryTypesForCoercionToItemClass:(Class)arg1 ;
-(void)getHeadersWithCompletionHandler:(/*^block*/id)arg1 ;
-(void)getContentsOfURLWithHandler:(/*^block*/id)arg1 ;
-(void)getContentsWithRequest:(id)arg1 expectedByteCountHandler:(/*^block*/id)arg2 writtenByteCountHandler:(/*^block*/id)arg3 completionHandler:(/*^block*/id)arg4 ;
-(void)getContentsWithRequest:(id)arg1 cacheResult:(BOOL)arg2 expectedByteCountHandler:(/*^block*/id)arg3 writtenByteCountHandler:(/*^block*/id)arg4 completionHandler:(/*^block*/id)arg5 ;
-(void)getTitle:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentationForPrintHandler:(/*^block*/id)arg1 ;
@end

