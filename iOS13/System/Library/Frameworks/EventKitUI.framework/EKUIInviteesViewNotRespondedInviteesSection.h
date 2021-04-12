/*
* Generated on Monday, March 1, 2021 at 2:31:40 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/EKUIInviteesViewSection.h>

@class NSMutableArray, EKEvent, NSString, NSOperationQueue, NSMutableDictionary, NSMutableSet;

@interface EKUIInviteesViewNotRespondedInviteesSection : NSObject <EKUIInviteesViewSection> {

	BOOL _canSeeAttendeeStatuses;
	BOOL _editable;
	/*^block*/id _participantTapped;
	/*^block*/id _participantRemoved;
	/*^block*/id _addInviteesTapped;
	/*^block*/id _participantSetRole;
	NSMutableArray* _participants;
	EKEvent* _event;
	NSString* _cachedInviteeCellReuseIdentifier;
	NSString* _cachedAddInviteeCellReuseIdentifier;
	unsigned long long _reuseIdentifierVersion;
	NSOperationQueue* _availabilityRequestsQueue;
	NSMutableDictionary* _participantAddressesToAvailabilityType;
	NSMutableDictionary* _participantAddressesToParticipantIndex;
	NSMutableSet* _participantAddressesForInFlightAvailabilityOperations;
	/*^block*/id _tableViewCellHook;

}

@property (nonatomic,retain) NSMutableArray * participants;                                                     //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                                                   //@synthesize event=_event - In the implementation block
@property (assign,nonatomic) BOOL canSeeAttendeeStatuses;                                                       //@synthesize canSeeAttendeeStatuses=_canSeeAttendeeStatuses - In the implementation block
@property (nonatomic,retain) NSString * cachedInviteeCellReuseIdentifier;                                       //@synthesize cachedInviteeCellReuseIdentifier=_cachedInviteeCellReuseIdentifier - In the implementation block
@property (nonatomic,retain) NSString * cachedAddInviteeCellReuseIdentifier;                                    //@synthesize cachedAddInviteeCellReuseIdentifier=_cachedAddInviteeCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long reuseIdentifierVersion;                                         //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (assign,nonatomic) BOOL editable;                                                                     //@synthesize editable=_editable - In the implementation block
@property (nonatomic,retain) NSOperationQueue * availabilityRequestsQueue;                                      //@synthesize availabilityRequestsQueue=_availabilityRequestsQueue - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantAddressesToAvailabilityType;                      //@synthesize participantAddressesToAvailabilityType=_participantAddressesToAvailabilityType - In the implementation block
@property (nonatomic,retain) NSMutableDictionary * participantAddressesToParticipantIndex;                      //@synthesize participantAddressesToParticipantIndex=_participantAddressesToParticipantIndex - In the implementation block
@property (nonatomic,retain) NSMutableSet * participantAddressesForInFlightAvailabilityOperations;              //@synthesize participantAddressesForInFlightAvailabilityOperations=_participantAddressesForInFlightAvailabilityOperations - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                                                //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (nonatomic,copy) id participantTapped;                                                                //@synthesize participantTapped=_participantTapped - In the implementation block
@property (nonatomic,copy) id participantRemoved;                                                               //@synthesize participantRemoved=_participantRemoved - In the implementation block
@property (nonatomic,copy) id addInviteesTapped;                                                                //@synthesize addInviteesTapped=_addInviteesTapped - In the implementation block
@property (nonatomic,copy) id participantSetRole;                                                               //@synthesize participantSetRole=_participantSetRole - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)_participantAddressForParticipant:(id)arg1 ;
-(id)init;
-(void)dealloc;
-(EKEvent *)event;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)cancelOutstandingOperations;
-(unsigned long long)numberOfRows;
-(void)setEditable:(BOOL)arg1 ;
-(id)headerTitle;
-(BOOL)editable;
-(NSMutableArray *)participants;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(BOOL)_isValidRow:(long long)arg1 ;
-(unsigned long long)reuseIdentifierVersion;
-(void)setReuseIdentifierVersion:(unsigned long long)arg1 ;
-(id)participantTapped;
-(id)participantRemoved;
-(id)participantSetRole;
-(id)debugTitle;
-(BOOL)sectionShouldBeShown;
-(id)cellForIndexPath:(id)arg1 inTableView:(id)arg2 ;
-(void)reloadAndRegisterReusableCellsWithTableView:(id)arg1 ;
-(BOOL)canSelectRow:(id)arg1 ;
-(void)selectRow:(id)arg1 ;
-(double)estimatedHeightForRow:(id)arg1 ;
-(BOOL)canEditRow:(id)arg1 ;
-(long long)editingStyleForRow:(id)arg1 ;
-(id)titleForDeleteConfirmationButtonForRow:(id)arg1 ;
-(void)commitEditingStyle:(long long)arg1 forRow:(id)arg2 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(id)actionsForRow:(id)arg1 ;
-(void)setParticipantTapped:(id)arg1 ;
-(void)setParticipantRemoved:(id)arg1 ;
-(void)setParticipantSetRole:(id)arg1 ;
-(id)tableViewCellHook;
-(void)setAddInviteesTapped:(id)arg1 ;
-(void)updateWithEvent:(id)arg1 editable:(BOOL)arg2 fromDetail:(BOOL)arg3 ;
-(void)setParticipantAddressesToAvailabilityType:(NSMutableDictionary *)arg1 ;
-(void)setParticipantAddressesToParticipantIndex:(NSMutableDictionary *)arg1 ;
-(void)setParticipantAddressesForInFlightAvailabilityOperations:(NSMutableSet *)arg1 ;
-(void)setAvailabilityRequestsQueue:(NSOperationQueue *)arg1 ;
-(NSOperationQueue *)availabilityRequestsQueue;
-(BOOL)_isAddInviteesRow:(long long)arg1 ;
-(NSString *)cachedAddInviteeCellReuseIdentifier;
-(NSString *)cachedInviteeCellReuseIdentifier;
-(void)_updateCell:(id)arg1 forParticipantAtIndex:(long long)arg2 animated:(BOOL)arg3 ;
-(void)setCachedInviteeCellReuseIdentifier:(NSString *)arg1 ;
-(void)setCachedAddInviteeCellReuseIdentifier:(NSString *)arg1 ;
-(id)addInviteesTapped;
-(void)_removeParticipantAtIndexPath:(id)arg1 ;
-(NSMutableDictionary *)participantAddressesToAvailabilityType;
-(NSMutableDictionary *)participantAddressesToParticipantIndex;
-(NSMutableSet *)participantAddressesForInFlightAvailabilityOperations;
-(void)setCanSeeAttendeeStatuses:(BOOL)arg1 ;
-(BOOL)canSeeAttendeeStatuses;
-(void)_setParticipantIndex:(id)arg1 forParticipantAddress:(id)arg2 ;
-(void)_addAddressToSetOfAddressesToInflightOperations:(id)arg1 ;
-(BOOL)_setOfAddressesToInflightOperationsContainsAddress:(id)arg1 ;
-(void)_setAvailabilityType:(id)arg1 forParticipantAddress:(id)arg2 ;
-(void)_removeAddressFromSetOfAddressesToInflightOperations:(id)arg1 ;
-(void)_updateCellForParticipantWithAddress:(id)arg1 ;
-(void)_removeAddressFromDictionaryOfAddressesToAvailabilityType:(id)arg1 ;
-(void)_removeAddressFromDictionaryOfAddressesToParticipantIndex:(id)arg1 ;
-(id)_lookUpParticipantIndexForParticipantAddress:(id)arg1 ;
-(id)_lookUpAvailabilityTypeForParticipantAddress:(id)arg1 ;
@end

