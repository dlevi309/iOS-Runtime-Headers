/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFRichTextContentItem : WFGenericFileContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(BOOL)typeRequiresMainThread:(id)arg1 ;
+(id)attributedStringFromHTMLFile:(id)arg1 options:(id)arg2 documentAttributes:(id*)arg3 error:(id*)arg4 ;
+(id)attributesDictionaryForType:(id)arg1 ;
+(id)documentTypeForType:(id)arg1 ;
+(id)htmlHeader;
+(id)htmlFooter;
+(id)normalizedHTMLDocumentFromHTML:(id)arg1 ;
+(id)normalizedHTMLDocumentFromHTMLData:(id)arg1 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentations:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(void)getFileRepresentationsForSerialization:(/*^block*/id)arg1 ;
-(id)preferredFileType;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)isContent;
-(void)generateRTFDRepresentation:(/*^block*/id)arg1 fromAttributedString:(id)arg2 forType:(id)arg3 ;
-(void)generateDataRepresentation:(/*^block*/id)arg1 fromAttributedString:(id)arg2 forType:(id)arg3 ;
-(void)generateAttributedString:(/*^block*/id)arg1 fromFile:(id)arg2 forClass:(Class)arg3 ;
@end

