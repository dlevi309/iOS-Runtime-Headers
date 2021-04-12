/*
* Generated on Thursday, January 14, 2021 at 2:25:41 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/CalendarUIKit.framework/CalendarUIKit
*/


@class CUIKObjectGroup, NSSet, EKEventStore, NSMutableArray, NSNumber;

@interface CUIKEditingContextGroup : NSObject {

	CUIKObjectGroup* _objectGroup;
	NSSet* _openContexts;
	EKEventStore* _eventStore;
	NSMutableArray* _additionalObjectGroups;
	NSNumber* _spanDecisionAsNumber;
	NSNumber* _earlyCommitDecisionAsNumber;

}

@property (retain) CUIKObjectGroup * objectGroup;                        //@synthesize objectGroup=_objectGroup - In the implementation block
@property (retain) NSMutableArray * additionalObjectGroups;              //@synthesize additionalObjectGroups=_additionalObjectGroups - In the implementation block
@property (retain) NSSet * openContexts;                                 //@synthesize openContexts=_openContexts - In the implementation block
@property (retain) NSNumber * spanDecisionAsNumber;                      //@synthesize spanDecisionAsNumber=_spanDecisionAsNumber - In the implementation block
@property (retain) NSNumber * earlyCommitDecisionAsNumber;               //@synthesize earlyCommitDecisionAsNumber=_earlyCommitDecisionAsNumber - In the implementation block
@property (__weak) EKEventStore * eventStore;                            //@synthesize eventStore=_eventStore - In the implementation block
-(EKEventStore *)eventStore;
-(void)setEventStore:(EKEventStore *)arg1 ;
-(CUIKObjectGroup *)objectGroup;
-(void)setObjectGroup:(CUIKObjectGroup *)arg1 ;
-(NSSet *)openContexts;
-(void)setOpenContexts:(NSSet *)arg1 ;
-(NSMutableArray *)additionalObjectGroups;
-(void)setAdditionalObjectGroups:(NSMutableArray *)arg1 ;
-(NSNumber *)spanDecisionAsNumber;
-(void)setSpanDecisionAsNumber:(NSNumber *)arg1 ;
-(NSNumber *)earlyCommitDecisionAsNumber;
-(void)setEarlyCommitDecisionAsNumber:(NSNumber *)arg1 ;
@end

