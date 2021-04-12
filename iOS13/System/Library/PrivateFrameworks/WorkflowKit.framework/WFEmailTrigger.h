/*
* Generated on Monday, March 1, 2021 at 2:32:56 AM Pacific Standard Time
* Operating System: Version 13.4.1 (Build 17E262)
* Image Source: /System/Library/PrivateFrameworks/WorkflowKit.framework/WorkflowKit
*/

#import <WorkflowKit/WorkflowKit-Structs.h>
#import <WorkflowKit/WFTrigger.h>

@class NSString, NSArray;

@interface WFEmailTrigger : WFTrigger {

	NSString* _selectedAccount;
	NSString* _selectedSubject;
	NSArray* _selectedRecipients;
	NSArray* _selectedSenders;
	unsigned long long _attachmentConfiguration;

}

@property (nonatomic,retain) NSString * selectedAccount;                              //@synthesize selectedAccount=_selectedAccount - In the implementation block
@property (nonatomic,retain) NSString * selectedSubject;                              //@synthesize selectedSubject=_selectedSubject - In the implementation block
@property (nonatomic,retain) NSArray * selectedRecipients;                            //@synthesize selectedRecipients=_selectedRecipients - In the implementation block
@property (nonatomic,retain) NSArray * selectedSenders;                               //@synthesize selectedSenders=_selectedSenders - In the implementation block
@property (assign,nonatomic) unsigned long long attachmentConfiguration;              //@synthesize attachmentConfiguration=_attachmentConfiguration - In the implementation block
+(BOOL)supportsSecureCoding;
+(id)localizedDisplayName;
+(id)localizedDisplayExplanation;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(NSArray *)selectedRecipients;
-(BOOL)hasValidConfiguration;
-(id)localizedDescriptionWithConfigurationSummary;
-(id)localizedPastTenseDescription;
-(NSString *)selectedAccount;
-(void)setSelectedAccount:(NSString *)arg1 ;
-(NSString *)selectedSubject;
-(void)setSelectedSubject:(NSString *)arg1 ;
-(void)setSelectedRecipients:(NSArray *)arg1 ;
-(NSArray *)selectedSenders;
-(void)setSelectedSenders:(NSArray *)arg1 ;
-(unsigned long long)attachmentConfiguration;
-(void)setAttachmentConfiguration:(unsigned long long)arg1 ;
@end

