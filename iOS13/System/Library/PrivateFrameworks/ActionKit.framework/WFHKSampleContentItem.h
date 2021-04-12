/*
* Generated on Monday, March 1, 2021 at 2:34:36 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/ActionKit.framework/ActionKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@interface WFHKSampleContentItem : WFContentItem <WFContentItemClass>
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)filterDescription;
+(id)pluralFilterDescription;
+(BOOL)hasLibrary;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(id)itemWithQuantitySample:(id)arg1 ;
+(id)itemWithQuantitySample:(id)arg1 unit:(id)arg2 ;
+(id)itemWithQuantitySamples:(id)arg1 ;
+(id)itemWithQuantitySamples:(id)arg1 unit:(id)arg2 ;
-(id)unit;
-(id)startDate;
-(id)endDate;
-(id)duration;
-(id)sourceName;
-(id)quantitySample;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)quantitySampleContainer;
-(id)readableTypeIdentifier;
-(id)sampleValue;
-(id)categorySampleValue;
-(id)categorySample;
@end

