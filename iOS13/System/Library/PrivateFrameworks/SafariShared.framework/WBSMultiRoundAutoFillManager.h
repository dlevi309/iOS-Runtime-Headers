/*
* Generated on Monday, March 1, 2021 at 2:33:06 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SafariShared.framework/SafariShared
*/


@class WBSFormMetadata, NSTimer, NSMutableSet, NSString, NSSet;

@interface WBSMultiRoundAutoFillManager : NSObject {

	unsigned long long _autoFillAttemptTrigger;
	WBSFormMetadata* _formMetadataFromPreviousAutoFillAttempt;
	BOOL _userDidInteractWithForm;
	unsigned long long _numberOfFollowUpAutoFillAttempts;
	NSTimer* _timerForFollowUpAutoFill;
	NSMutableSet* _controlUniqueIDToBeIgnoredByFollowUpAutoFill;
	NSString* _addressSetLabelUsedDuringFirstAutoFillPass;
	NSSet* _addressBookPropertiesThatCanBeFilled;

}

@property (nonatomic,copy) NSString * addressSetLabelUsedDuringFirstAutoFillPass;              //@synthesize addressSetLabelUsedDuringFirstAutoFillPass=_addressSetLabelUsedDuringFirstAutoFillPass - In the implementation block
@property (nonatomic,copy) NSSet * addressBookPropertiesThatCanBeFilled;                       //@synthesize addressBookPropertiesThatCanBeFilled=_addressBookPropertiesThatCanBeFilled - In the implementation block
-(id)init;
-(void)dealloc;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSString *)addressSetLabelUsedDuringFirstAutoFillPass;
-(NSSet *)addressBookPropertiesThatCanBeFilled;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(void)didEditFormText;
-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)setAddressBookPropertiesThatCanBeFilled:(NSSet *)arg1 ;
-(void)setAddressSetLabelUsedDuringFirstAutoFillPass:(NSString *)arg1 ;
@end

