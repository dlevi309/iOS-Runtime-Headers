/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class EKEventStore, EKCalendarItem, NSString;

@interface WFCalendarItemContentItem : WFGenericFileContentItem <WFContentItemClass> {

	EKEventStore* _eventStore;

}

@property (nonatomic,retain) EKEventStore * eventStore;                    //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,readonly) EKCalendarItem * calendarItem; 
@property (nonatomic,readonly) NSString * location; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
-(EKEventStore *)eventStore;
-(NSString *)location;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(EKCalendarItem *)calendarItem;
-(id)generateObjectRepresentationsForClass:(Class)arg1 options:(id)arg2 error:(id*)arg3 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
@end

