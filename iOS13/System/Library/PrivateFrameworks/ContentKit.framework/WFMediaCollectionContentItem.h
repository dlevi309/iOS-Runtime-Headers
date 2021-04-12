/*
* Generated on Monday, March 1, 2021 at 2:34:21 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
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

