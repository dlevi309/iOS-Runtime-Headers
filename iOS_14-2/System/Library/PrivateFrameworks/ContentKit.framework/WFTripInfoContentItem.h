/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class WFTripInfo;

@interface WFTripInfoContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) WFTripInfo * tripInfo; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
-(id)routeName;
-(id)travelTime;
-(id)arrivalTime;
-(id)distance;
-(id)generateObjectRepresentationForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(WFTripInfo *)tripInfo;
@end

