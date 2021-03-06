/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFArticle;

@interface WFArticleContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFArticle * article; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)attributedStringWithHTML:(id)arg1 named:(id)arg2 ;
+(id)fileWithHTML:(id)arg1 named:(id)arg2 ;
+(BOOL)supportedTypesMustBeDeterminedByInstance;
-(WFArticle *)article;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
@end

