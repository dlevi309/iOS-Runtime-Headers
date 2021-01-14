/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFGenericFileContentItem : WFContentItem <WFContentItemClass>
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)itemWithSerializedItem:(id)arg1 forType:(id)arg2 named:(id)arg3 attributionSet:(id)arg4 ;
-(void)generateObjectRepresentation:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(void)generateFileRepresentation:(/*^block*/id)arg1 options:(id)arg2 forType:(id)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(BOOL)isContent;
@end

