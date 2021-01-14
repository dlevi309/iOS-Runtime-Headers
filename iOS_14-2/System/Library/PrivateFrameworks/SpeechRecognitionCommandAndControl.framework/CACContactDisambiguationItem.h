/*
* Generated on Thursday, January 14, 2021 at 2:28:32 PM Pacific Standard Time
* Operating System: Version 14.2 (Build 18B92)
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
-(CNContact *)contact;
-(void)setContact:(CNContact *)arg1 ;
-(id)displayDescription;
-(void)startInteraction;
-(id)displayName;
-(id)initWithContact:(id)arg1 labeledValue:(id)arg2 type:(long long)arg3 ;
-(void)setContactLabeledValue:(CNLabeledValue *)arg1 ;
-(CNLabeledValue *)contactLabeledValue;
-(NSString *)contactDisplayLabel;
-(NSString *)contactDisplayValue;
@end

