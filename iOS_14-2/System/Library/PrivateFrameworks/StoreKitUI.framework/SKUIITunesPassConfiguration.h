/*
* Generated on Thursday, January 14, 2021 at 2:25:05 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
* Image Source: /System/Library/PrivateFrameworks/StoreKitUI.framework/StoreKitUI
*/


@class NSString;

@interface SKUIITunesPassConfiguration : NSObject {

	NSString* _dialogLearnMoreButton;
	NSString* _dialogMessage;
	NSString* _dialogNotNowButton;
	NSString* _dialogTitle;
	NSString* _learnMoreAddPassButtonTitle;
	NSString* _learnMoreDoneButtonTitle;
	NSString* _learnMoreExplanation;
	NSString* _learnMoreTitle;
	NSString* _learnMoreViewPassButtonTitle;
	NSString* _lockupDescription;
	NSString* _lockupLearnMoreLinkTitle;
	NSString* _lockupTitle;

}

@property (nonatomic,readonly) NSString * lockupDescription;                         //@synthesize lockupDescription=_lockupDescription - In the implementation block
@property (nonatomic,readonly) NSString * lockupLearnMoreLinkTitle;                  //@synthesize lockupLearnMoreLinkTitle=_lockupLearnMoreLinkTitle - In the implementation block
@property (nonatomic,readonly) NSString * lockupTitle;                               //@synthesize lockupTitle=_lockupTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreAddPassButtonTitle;               //@synthesize learnMoreAddPassButtonTitle=_learnMoreAddPassButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreDoneButtonTitle;                  //@synthesize learnMoreDoneButtonTitle=_learnMoreDoneButtonTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreExplanation;                      //@synthesize learnMoreExplanation=_learnMoreExplanation - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreTitle;                            //@synthesize learnMoreTitle=_learnMoreTitle - In the implementation block
@property (nonatomic,readonly) NSString * learnMoreViewPassButtonTitle;              //@synthesize learnMoreViewPassButtonTitle=_learnMoreViewPassButtonTitle - In the implementation block
-(NSString *)learnMoreTitle;
-(NSString *)learnMoreExplanation;
-(NSString *)learnMoreViewPassButtonTitle;
-(NSString *)learnMoreAddPassButtonTitle;
-(NSString *)learnMoreDoneButtonTitle;
-(NSString *)lockupTitle;
-(NSString *)lockupDescription;
-(NSString *)lockupLearnMoreLinkTitle;
-(id)initWithITunesPassDictionary:(id)arg1 clientContext:(id)arg2 ;
-(id)learnMoreAlertView;
@end

