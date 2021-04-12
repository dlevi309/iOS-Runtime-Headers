/*
* Generated on Monday, March 1, 2021 at 2:35:18 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/SpeechRecognitionCommandAndControl.framework/SpeechRecognitionCommandAndControl
*/

#import <SpeechRecognitionCommandAndControl/CACDisambiguationItem.h>

@class CNContact, CNLabeledValue, NSString;

@interface CACContactDisambiguationItem : CACDisambiguationItem {

	CNContact* _contact;
	CNLabeledValue* _contactLabeledValue;

}

@property (nonatomic,retain) CNContact * contact;                               //@synthesize contact=_contact - In the implementation block
@property (nonatomic,retain) CNLabeledValue * contactLabeledValue;              //@synthesize contactLabeledValue=_contactLabeledValue - In the implementation block
@property (readonly) NSString * contactDisplayLabel; 
@property (readonly) NSString * contactDisplayValue; 
-(id)displayName;
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(void)startInteraction;
-(id)displayDescription;
-(id)initWithContact:(id)arg1 labeledValue:(id)arg2 type:(long long)arg3 ;
-(void)setContactLabeledValue:(CNLabeledValue *)arg1 ;
-(CNLabeledValue *)contactLabeledValue;
-(NSString *)contactDisplayLabel;
-(NSString *)contactDisplayValue;
@end

