/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class MPMediaItemCollection;

@interface WFMediaCollectionContentItem : WFContentItem <WFContentItemClass>

@property (nonatomic,readonly) MPMediaItemCollection * collection; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
-(MPMediaItemCollection *)collection;
@end

