/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFSafariWebPage;

@interface WFSafariWebPageContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFSafariWebPage * webPage; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)canLowercaseTypeDescription;
+(id)ownedPasteboardTypes;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)defaultSourceForRepresentation:(id)arg1 ;
-(WFSafariWebPage *)webPage;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(void)getSerializedItem:(/*^block*/id)arg1 ;
@end

