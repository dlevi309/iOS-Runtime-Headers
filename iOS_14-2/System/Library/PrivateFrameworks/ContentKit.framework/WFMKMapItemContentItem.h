/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/WFContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class CLLocation, MKMapItem;

@interface WFMKMapItemContentItem : WFContentItem <WFContentItemClass> {

	CLLocation* _queryLocation;

}

@property (nonatomic,retain) CLLocation * queryLocation;              //@synthesize queryLocation=_queryLocation - In the implementation block
@property (nonatomic,readonly) MKMapItem * mapItem; 
+(id)typeDescription;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)itemWithMapItem:(id)arg1 fromQueryLocation:(id)arg2 ;
-(MKMapItem *)mapItem;
-(BOOL)getListSubtitle:(/*^block*/id)arg1 ;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(CLLocation *)queryLocation;
-(void)setQueryLocation:(CLLocation *)arg1 ;
@end

