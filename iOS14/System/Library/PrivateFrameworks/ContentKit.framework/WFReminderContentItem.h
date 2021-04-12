/*
* Generated on Thursday, January 14, 2021 at 2:26:47 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/ContentKit.framework/ContentKit
*/

#import <ContentKit/ContentKit-Structs.h>
#import <ContentKit/WFGenericFileContentItem.h>
#import <libobjc.A.dylib/WFContentItemClass.h>

@class REMStore, REMReminder;

@interface WFReminderContentItem : WFGenericFileContentItem <WFContentItemClass> {

	REMStore* _reminderStore;

}

@property (nonatomic,retain) REMStore * reminderStore;              //@synthesize reminderStore=_reminderStore - In the implementation block
@property (nonatomic,readonly) REMReminder * reminder; 
+(id)typeDescription;
+(id)propertyBuilders;
+(id)ownedTypes;
+(id)outputTypes;
+(id)contentCategories;
+(id)pluralTypeDescription;
+(id)countDescription;
+(BOOL)supportedTypeMustBeDeterminedByInstance:(id)arg1 ;
+(id)defaultSourceForRepresentation:(id)arg1 ;
+(id)allLists;
+(id)defaultList;
+(void)runQuery:(id)arg1 withItems:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
+(BOOL)hasLibrary;
+(id)itemWithReminder:(id)arg1 fromReminderStore:(id)arg2 ;
-(BOOL)flagged;
-(id)parentReminder;
-(REMReminder *)reminder;
-(REMStore *)reminderStore;
-(id)imageAttachment;
-(id)URL;
-(BOOL)hasAlarms;
-(BOOL)getListAltText:(/*^block*/id)arg1 ;
-(id)generateFileRepresentationForType:(id)arg1 options:(id)arg2 error:(id*)arg3 ;
-(void)generateObjectRepresentations:(/*^block*/id)arg1 options:(id)arg2 forClass:(Class)arg3 ;
-(BOOL)canGenerateRepresentationForType:(id)arg1 ;
-(id)copyWithName:(id)arg1 zone:(NSZone*)arg2 ;
-(BOOL)hasSubtasks;
-(id)subtasks;
-(void)setReminderStore:(REMStore *)arg1 ;
@end

