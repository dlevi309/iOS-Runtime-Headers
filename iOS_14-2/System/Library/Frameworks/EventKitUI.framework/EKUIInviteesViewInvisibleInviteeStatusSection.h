/*
* Generated on Thursday, January 14, 2021 at 2:23:52 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/Frameworks/EventKitUI.framework/EventKitUI
*/

#import <libobjc.A.dylib/EKUIInviteesViewSection.h>

@class NSMutableArray, EKEvent, NSString;

@interface EKUIInviteesViewInvisibleInviteeStatusSection : NSObject <EKUIInviteesViewSection> {

	BOOL _editable;
	/*^block*/id _participantTapped;
	/*^block*/id _participantRemoved;
	NSMutableArray* _participants;
	EKEvent* _event;
	NSString* _cachedCellReuseIdentifier;
	unsigned long long _reuseIdentifierVersion;
	/*^block*/id _tableViewCellHook;

}

@property (nonatomic,retain) NSMutableArray * participants;                          //@synthesize participants=_participants - In the implementation block
@property (nonatomic,retain) EKEvent * event;                                        //@synthesize event=_event - In the implementation block
@property (nonatomic,retain) NSString * cachedCellReuseIdentifier;                   //@synthesize cachedCellReuseIdentifier=_cachedCellReuseIdentifier - In the implementation block
@property (assign,nonatomic) unsigned long long reuseIdentifierVersion;              //@synthesize reuseIdentifierVersion=_reuseIdentifierVersion - In the implementation block
@property (nonatomic,copy) id tableViewCellHook;                                     //@synthesize tableViewCellHook=_tableViewCellHook - In the implementation block
@property (assign,nonatomic) BOOL editable;                                          //@synthesize editable=_editable - In the implementation block
@property (nonatomic,copy) id participantTapped;                                     //@synthesize participantTapped=_participantTapped - In the implementation block
@property (nonatomic,copy) id participantRemoved;                                    //@synthesize participantRemoved=_participantRemoved - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)cancelOutstandingOperations;
-(id)headerTitle;
-(id)debugTitle;
-(void)updateWithEvent:(id)arg1 editable:(BOOL)arg2 fromDetail:(BOOL)arg3 ;
-(unsigned long long)numberOfRows;
-(void)setParticipants:(NSMutableArray *)arg1 ;
-(BOOL)editable;
-(NSMutableArray *)participants;
-(BOOL)_isValidRow:(long long)arg1 ;
-(NSString *)cachedCellReuseIdentifier;
-(unsigned long long)reuseIdentifierVersion;
-(void)setCachedCellReuseIdentifier:(NSString *)arg1 ;
-(void)setReuseIdentifierVersion:(unsigned long long)arg1 ;
-(id)participantTapped;
-(id)participantRemoved;
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
-(EKEvent *)event;
-(void)setEditable:(BOOL)arg1 ;
-(void)setEvent:(EKEvent *)arg1 ;
-(void)setTableViewCellHook:(id)arg1 ;
-(id)actionsForRow:(id)arg1 ;
-(void)setParticipantTapped:(id)arg1 ;
-(void)setParticipantRemoved:(id)arg1 ;
-(id)tableViewCellHook;
@end

