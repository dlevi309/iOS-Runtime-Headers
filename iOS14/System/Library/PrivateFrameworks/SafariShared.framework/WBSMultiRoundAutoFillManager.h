/*
* Generated on Thursday, January 14, 2021 at 2:23:13 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(void)didEditFormText;
-(void)dispatchFollowUpAutoFillOfFormWithMetdata:(id)arg1 autoFillBlock:(/*^block*/id)arg2 ;
-(BOOL)shouldAttemptFollowUpAutoFillInFormWithMetadata:(id)arg1 requestType:(unsigned long long)arg2 ;
-(void)addControlUniqueIDsIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)setAddressBookPropertiesThatCanBeFilled:(NSSet *)arg1 ;
-(void)setAddressSetLabelUsedDuringFirstAutoFillPass:(NSString *)arg1 ;
-(BOOL)shouldControlBeIgnoredByFollowUpAutoFill:(id)arg1 ;
-(NSString *)addressSetLabelUsedDuringFirstAutoFillPass;
-(unsigned long long)currentAutoFillAttemptTrigger;
-(NSSet *)addressBookPropertiesThatCanBeFilled;
-(void)addControlUniqueIDIgnoredByFollowUpAutoFill:(id)arg1 ;
-(void)dealloc;
@end

