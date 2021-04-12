/*
* Generated on Thursday, January 14, 2021 at 2:26:46 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Assistant/Plugins/Reminders.assistantBundle/Reminders
*/

#import <libobjc.A.dylib/AFSyncHandler.h>

@class EKEventStore, NSString, NSMutableArray;

@interface RemindersAssistantSyncHandler : NSObject <AFSyncHandler> {

	EKEventStore* _eventStore;
	NSString* _finalAnchor;
	NSMutableArray* _postAnchors;
	NSMutableArray* _domainObjects;

}

@property (nonatomic,retain) EKEventStore * eventStore;                   //@synthesize eventStore=_eventStore - In the implementation block
@property (nonatomic,retain) NSString * finalAnchor;                      //@synthesize finalAnchor=_finalAnchor - In the implementation block
@property (nonatomic,retain) NSMutableArray * postAnchors;                //@synthesize postAnchors=_postAnchors - In the implementation block
@property (nonatomic,retain) NSMutableArray * domainObjects;              //@synthesize domainObjects=_domainObjects - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(EKEventStore *)eventStore;
-(id)init;
-(NSMutableArray *)domainObjects;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(void)setDomainObjects:(NSMutableArray *)arg1 ;
-(void)dealloc;
-(void)beginSyncWithAnchor:(id)arg1 validity:(id)arg2 forKey:(id)arg3 beginInfo:(id)arg4 ;
-(void)getChangeAfterAnchor:(id)arg1 changeInfo:(id)arg2 ;
-(void)syncDidEnd;
-(void)setFinalAnchor:(NSString *)arg1 ;
-(NSString *)finalAnchor;
-(id)_sortedArrayOfReminderLists;
-(id)calculateFinalAnchor:(id)arg1 ;
-(id)identifierForCalendar:(id)arg1 ;
-(NSMutableArray *)postAnchors;
-(void)setPostAnchors:(NSMutableArray *)arg1 ;
@end

